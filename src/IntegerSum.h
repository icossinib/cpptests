/*
 * IntegerSum.h
 *
 *  Created on: 22/09/2013
 *      Author: "Ignacio Esteban Cossini Benchimol"
 */

#ifndef INTEGERSUM_H_
#define INTEGERSUM_H_

using namespace std;

class IntegerSum
{
public:
	IntegerSum();
	IntegerSum(int n, int m);
	virtual ~IntegerSum();
	
	char* toString();
	int sum();
	int getA() const;
	void setA( int a );
	int getB() const;
	void setB( int b );

protected:
	int a, b;
};

#endif /* INTEGERSUM_H_ */
