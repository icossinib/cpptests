/*
 * IntegerAndString.h
 *
 *  Created on: 22/09/2013
 *      Author: "Ignacio Esteban Cossini Benchimol"
 */

#ifndef INTEGERANDSTRING_H_
#define INTEGERANDSTRING_H_

class IntegerAndString
{
public:
	IntegerAndString();
	IntegerAndString( int n, const char* p);
	virtual ~IntegerAndString();
	int getA() const;
	void setA( int a );
	const char* getS() const;
	void setS(  char* s );
	char* toString();

protected:
	int a;
	char* s;

};

#endif /* INTEGERANDSTRING_H_ */
