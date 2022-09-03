#pragma once
#include <iostream>

class Fraction
{
private:
	int num, den; //tử số, mẫu số
public:
	Fraction();
	Fraction(int , int);
	~Fraction();
	void Output(Fraction fr0);
	Fraction min(); //rút gọn

	friend Fraction operator+(Fraction fr1, Fraction fr2);
	friend Fraction operator+(Fraction fr1, int x);
	friend Fraction operator-(Fraction fr1, int x);

	Fraction operator ++();
	Fraction operator ++(int);
	Fraction operator --();
	Fraction operator --(int);

	friend std::istream& operator >>(std::istream& dInput, Fraction& fract); //nhập phân số
	friend std::ostream& operator <<(std::ostream& dOutput, Fraction frac);

	friend bool operator == (Fraction fr1, Fraction fr2);
	friend bool operator != (Fraction fr1, Fraction fr2);
	friend bool operator > (Fraction fr1, Fraction fr2);
	friend bool operator >= (Fraction fr1, Fraction fr2);
	friend bool operator < (Fraction fr1, Fraction fr2);
	friend bool operator <= (Fraction fr1, Fraction fr2);
};