#include "MyPoint.h"
#include "MyVector.h"
#include <iostream>
using namespace std;

int main()
{
	MyPoint po(5, 7);
	MyPoint pd(55, 97);
	MyVector v(po,pd);

	MyPoint p3 = po;
	MyPoint po2 = po + pd;
	//MyPoint po2 = po.operator+(pd);

	if (po == pd)
	{
		cout << "pareils !!";
	}

	if (po.isNear(pd, 10))
	{
		cout << "pareils !!";
	}

	MyVector v2(987, 456, 321, 489);	
	v.afficher();	
	
	MyPoint p1(45,98);
	p1.setX(17);

	p1.afficher();
	p1.SaisieConsole();
	p1.afficher();
	
	MyPoint* p2 = new MyPoint();
	p2->setY(456);
	p2->afficher();
	p2->SaisieConsole();
	p2->afficher();

	delete p2;


	int a = 12;	
}