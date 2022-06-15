#include "MyVector.h"

MyVector::MyVector()
{}

MyVector::MyVector(MyPoint ori, MyPoint dest)
{
	mOrigine = ori;
	mDestination = dest;
}

MyVector::MyVector(int xo, int yo, int xd, int yd)
{
	mOrigine.setX(xo);
	mOrigine.setY(yo);

	mDestination.setX(xd);
	mDestination.setY(yd);

	//mOrigine = MyPoint(xo, yo); autre possibilit�
}

void MyVector::setOrigine(MyPoint ori)
{
	mOrigine = ori;
}
void MyVector::setDestination(MyPoint dest)
{
	mDestination = dest;
}
MyPoint MyVector::getOrigine()
{
	return mOrigine;
}
MyPoint MyVector::getDestination()
{
	return mDestination;
}
void MyVector::afficher()
{
	cout << "ori: x:" << mOrigine.getX() << " y:" << mOrigine.getY() << endl;
	cout << "dest: x:" << mDestination.getX() << " y:" << mDestination.getY() << endl;
	cout << "longueur:" << longueur() << " angle:" << angle() << endl;
}

float MyVector::longueur()
{
	float y = pow((mDestination.getY() - mOrigine.getY()), 2);
	float x = pow((mDestination.getX() - mOrigine.getX()), 2);

	return sqrt(x + y);
}

float MyVector::angle()
{
	float m = (mOrigine.getX() * mDestination.getX()) + (mOrigine.getY() * mDestination.getY());
	float mO = sqrt(pow(mOrigine.getX(), 2) + pow(mOrigine.getY(), 2));
	float mD = sqrt(pow(mDestination.getX(), 2) + pow(mDestination.getY(), 2));

	/* Converting from radians to degrees */
	return (acos(m / (mO * mD)) * (180 / M_PI));

	
}