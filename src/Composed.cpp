/*
 * Composed.cpp
 *
 *  Created on: 22/09/2013
 *      Author: "Ignacio Esteban Cossini Benchimol"
 */

#include "Composed.h"

using namespace std;

Composed::Composed() :
		m_ias (),
		m_is ()
{
}

Composed::~Composed()
{
	// TODO Auto-generated destructor stub
}

const IntegerAndString& Composed::getIas() const
{
	return m_ias;
}

void Composed::setIas( const IntegerAndString& ias )
{
	m_ias = ias;
}

const IntegerSum& Composed::getIs() const
{
	return m_is;
}

Composed::Composed( IntegerAndString nap, IntegerSum nm )
{
	m_ias = nap;
	m_is = nm;
}

char* Composed::toString()
{
	return m_ias.toString();
}

void Composed::setIs( const IntegerSum& is )
{
	m_is = is;
}
