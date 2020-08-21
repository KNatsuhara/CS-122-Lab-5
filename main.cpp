#include "header.h"


int main()
{
	Complex num1, num2, test1, test2, test3, test4, test5;

	num1.setImagin(3);
	num1.setReal(4);
	 
	num2.setImagin(5);
	num2.setReal(6);

	test1 = num1.add(num2); //member add() function
	test2 = add(num1, num2); //non-member add() function
	test3 = num1 + num2; //overloaded + operator

	test4 = num2 - num1; //overloaded - operator

	cout << "Input a Complex Number a + bi: ";
	cin >> test5;
	cout << test5;

	test1 = test5 + test4;
	test2 = test5 - test4;

	cout << test1;
	cout << test2;

	/*test1.print();
	test2.print();
	test3.print();
	test4.print();
	test5.print();*/


	return 0;
}