#ifndef HEADER_H
#define HEADER_H
#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <stdio.h>
#include <string>

using namespace std;

class Complex {
private:
	double realPart;
	double imaginaryPart;
public:
	//getter functions
	double getReal();
	double getImagin();
	//setter functions
	void setReal(double real);
	void setImagin(double imagin);
	//print complex number
	void print();
	//addition function
	Complex add(Complex rhs);
	//subtraction function
	Complex sub(Complex rhs);
	//reads a complex number
	void read();

	friend istream& operator >> (istream& input, Complex& rhs);
	friend ostream& operator << (ostream& output, const Complex& rhs);
};

Complex add(Complex rhs, Complex lhs);

Complex operator+ (const Complex &rhs, const Complex &lhs);

Complex sub(Complex rhs, Complex lhs);

Complex operator- (const Complex& rhs, const Complex& lhs);

#endif