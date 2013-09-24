/*
 * Composed.h
 *
 *  Created on: 22/09/2013
 *      Author: "Ignacio Esteban Cossini Benchimol"
 */

#ifndef COMPOSED_H_
#define COMPOSED_H_

#include "IntegerAndString.h"
#include "IntegerSum.h"

using namespace std;

class Composed
{
public:
	Composed();
	Composed(IntegerAndString nap, IntegerSum nm);
	virtual ~Composed();
	
	char* toString();

	const IntegerAndString& getIas() const;
	void setIas( const IntegerAndString& ias );
	const IntegerSum& getIs() const;
	void setIs( const IntegerSum& is );

protected:
	IntegerAndString m_ias;
	IntegerSum m_is;
};

#endif /* COMPOSED_H_ */
