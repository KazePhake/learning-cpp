#pragma once

class SpecNum
{
private:
	int m, n;
public:
	void Create();
	bool _prime(int x); //số nguyên tố
	bool _cube(int x); //số chính phương
	bool _perfect(int x); //số hoàn hảo
	bool _balance(int x); //số đối xứng
	int maxi(int m, int n); //ước lớn nhất
	int mini(int m, int n); //bội bé nhất
	void Input(); //Nhập
	void Output(); //Xuất
};


