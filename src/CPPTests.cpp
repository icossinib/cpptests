//============================================================================
// Name        : CPPTests.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Composed.h"



int main() {
	IntegerAndString* intAndStr = new IntegerAndString(2,"hola");
	IntegerSum* intSum = new IntegerSum(3,8);
	Composed* com = new Composed(*intAndStr, *intSum);
	Composed* pCom = com;
	Composed pcom2 = Composed(*intAndStr,*intSum);
	cout << com->toString();
	cout << pCom->toString();
	cout << pcom2.toString();
	return 0;
}
