#include "SpecialNumber.h"
#include <iostream>
#include <math.h>
using namespace std;

void SpecNum::Create()
{
	this->m = this->n = 1;
}

bool SpecNum::_prime(int x)
{
	if (x<2) return false;
	else
		for (int i = 2; i <= sqrt(x); i++)
			if ((x % i) == 0) return false;
	return true;
}

bool SpecNum::_cube(int x)
{
	int sqr = sqrt(x);
	if (sqr * sqr == x) return true;
	else return false;
}

bool SpecNum::_perfect(int x)
{
	int sum = 0;
	for (int i = 1; i <= (x / 2); i++) 
	{
		if (x % i == 0)
			sum += i;
	}
	if (sum == x) return true;
	return false;
}

bool SpecNum::_balance(int x)
{
	int remain, _num = 0;
	int tmp = x;
	while (tmp != 0)
	{
		remain = tmp % 10;
		_num = _num * 10 + remain;
		tmp /= 10;
	}
	if (_num == x) return true;
	else return false;
}

int SpecNum::maxi(int m, int n)
{
	int _maxi = 0;
	m = abs(m);
	n = abs(n);
	if (m == 0 || n == 0) _maxi = m+n;
	else
	{
		while (m!=n)
		{
			if (m>n) m -= n;
			else n -= m;
		}
		_maxi = m;
	}
	return _maxi;
}

int SpecNum::mini(int m, int n)
{
	int result = maxi(m,n);
	return (m*n) / result;
}

void SpecNum::Input()
{
	cin >> this->m; //Nhập m
	cin >> this->n; //Nhập n
}

void SpecNum::Output()
{
	cout << this->m << endl;
	cout << this->n << endl;
	if (_prime(this->m) == true) cout << "So m la so nguyen to" << endl;
	else cout << "So m khong la so nguyen to" << endl;
	if (_prime(this->n) == true) cout << "So n la so nguyen to" << endl;
	else cout << "So n khong la so nguyen to" << endl;
	if (_cube(this->m) == true) cout << "So m la so chinh phuong" << endl;
	else cout << "So m khong la so chinh phuong" << endl;
	if (_cube(this->n) == true) cout << "So n la so chinh phuong" << endl;
	else cout << "So n khong la so chinh phuong" << endl;
	if (_perfect(this->m) == true) cout << "So m la so hoan thien" << endl;
	else cout << "So m khong la so hoan thien" << endl;
	if (_perfect(this->n) == true) cout << "So n la so hoan thien" << endl;
	else cout << "So n khong la so hoan thien" << endl;
	if (_balance(this->m) == true) cout << "So m la so doi xung" << endl;
	else cout << "So m khong la so doi xung" << endl;
	if (_balance(this->n) == true) cout << "So n la so doi xung" << endl;
	else cout << "So n khong la so doi xung" << endl;
	cout << "Uoc chung lon nhat cua m va n la: " << maxi(this->m, this->n) << endl;
	cout << "Boi chung nho nhat cua m va n la: " << mini(this->m, this->n) << endl;
}