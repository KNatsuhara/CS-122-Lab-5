#include "header.h"

//getter functions
double Complex::getReal()
{
	return realPart;
}
double Complex::getImagin()
{
	return imaginaryPart;
}

//setter functions
void Complex :: setReal(double real)
{
	realPart = real;
}
void Complex::setImagin(double imagin)
{
	imaginaryPart = imagin;
}

//print function
void Complex :: print()
{
	cout << realPart << " + " << imaginaryPart << "i" << endl;
}

//Addition function inside class
Complex Complex::add(Complex rhs)
{
	Complex wh;
	double real = 0.0;
	double imagin = 0.0;
	real = realPart + rhs.getReal();
	imagin = imaginaryPart + rhs.getImagin();
	wh.setReal(real);
	wh.setImagin(imagin);
	return wh;
}

//Subtraction function inside class
Complex Complex::sub(Complex rhs)
{
	Complex wh;
	double real = 0.0;
	double imagin = 0.0;
	real = realPart - rhs.getReal();
	imagin = imaginaryPart - rhs.getImagin();
	wh.setReal(real);
	wh.setImagin(imagin);
	return wh;
}

//Read function
void Complex::read()
{
	//initializing variables
	string input;
	char newLine[20];
	char* tok;
	double temp = 0.0;

	//asks user for string and converts it to char array
	getline(cin, input);
	strcpy(newLine, input.c_str());
	tok = strtok(newLine, " +i");

	//reads real number and sets real number
	temp = stod(tok);
	realPart = temp;
	tok = strtok(NULL, " +i");

	//reads imaginary number and sets imaginary number
	temp = stod(tok);
	imaginaryPart = temp;
}

//Addition functions outside class
Complex add(Complex rhs, Complex lhs)
{
	return rhs.add(lhs);
}

//Addition overload operator
Complex operator+ (const Complex &rhs, const Complex &lhs)
{
	return add(rhs, lhs);
}

//Subtraction function outside class
Complex sub(Complex rhs, Complex lhs)
{
	return rhs.sub(lhs);
}

//Subtraction overload operator
Complex operator- (const Complex& rhs, const Complex& lhs)
{
	return sub(rhs, lhs);
}

// for use with cout : cin >> rhs
istream& operator >> (istream& input, Complex& rhs)
{	
	//initializing variables
	string str;
	char newLine[20];
	char* tok;
	double temp = 0.0;

	//asks user for string and converts it to char array
	getline(input, str);
	strcpy(newLine, str.c_str());
	tok = strtok(newLine, " +i");

	//reads real number and sets real number
	temp = stod(tok);
	rhs.realPart = temp;
	tok = strtok(NULL, " +i");

	//reads imaginary number and sets imaginary number
	temp = stod(tok);
	rhs.imaginaryPart = temp;
	return input;
}

// for use with cout : cout << rhs
ostream& operator << (ostream& output, const Complex& rhs)
{
	output << rhs.realPart << " + " << rhs.imaginaryPart << "i" << endl;
	return output;
}