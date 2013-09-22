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
	int getA();
	int getB();
	void setA(int n);
	void setB(int n);
	string toString();
	int sum();
private:
	int a, b;
};

#endif /* INTEGERSUM_H_ */
