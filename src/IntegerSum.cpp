/*
 * IntegerSum.cpp
 *
 *  Created on: 22/09/2013
 *      Author: "Ignacio Esteban Cossini Benchimol"
 */

#include "IntegerSum.h"

IntegerSum::IntegerSum() :
	a ( 0 ),
	b ( 0 )
{

}

IntegerSum::IntegerSum( int n, int m ) :
		a ( 0 ),
		b ( 0 )
{
	a = n;
	b = m;
}

IntegerSum::~IntegerSum()
{
}


string IntegerSum::toString()
{
	return "A value: " << a << "\nB value: ";
}

int IntegerSum::sum()
{
	return a+b;
}

int IntegerSum::getA() const
{
	return a;
}

void IntegerSum::setA( int a )
{
	this->a = a;
}

int IntegerSum::getB() const
{
	return b;
}

void IntegerSum::setB( int b )
{
	this->b = b;
}
