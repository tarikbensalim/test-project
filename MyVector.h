#pragma once
#define _USE_MATH_DEFINES

#include "MyPoint.h"
#include <iostream>
#include <cmath>

using namespace std;

class MyVector
{
public:
	MyVector();
	MyVector(MyPoint ori, MyPoint dest);
	MyVector(int xo, int yo, int xd, int yd);
	void setOrigine(MyPoint ori);
	void setDestination(MyPoint dest);
	MyPoint getOrigine();
	MyPoint getDestination();
	void afficher();

	float longueur();
	float angle();


protected:
	MyPoint mOrigine;
	MyPoint mDestination;
};

