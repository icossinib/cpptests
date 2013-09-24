/*
 * IntegerAndString.cpp
 *
 *  Created on: 22/09/2013
 *      Author: "Ignacio Esteban Cossini Benchimol"
 */

#include "IntegerAndString.h"

IntegerAndString::IntegerAndString() :
	a ( 0 ),
	s ( "" )
{
}

IntegerAndString::IntegerAndString( int n,const char* p ) :
	s ( "" )
{
	a = n;
	p = s;
}

IntegerAndString::~IntegerAndString()
{
}

int IntegerAndString::getA() const
{
	return a;
}

void IntegerAndString::setA( int a )
{
	this->a = a;
}

const char* IntegerAndString::getS() const
{
	return s;
}

void IntegerAndString::setS( char* s )
{
	this->s = s;
}

char* IntegerAndString::toString()
{
	return this->s;
}
