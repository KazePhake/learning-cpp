#include <iostream>
#include <fstream>

void input();
void process();
void output();

int n=0;
int cnt[];

int main(int argc, char* argv[])
{
	input();
	process();
	output();
	return 0;
}

void input()
{
	std::ifstream fin("BAI25.inp");
	std::fin>>n;
	for (int i=0;i<n;i++) std::fin>>cnt[i];
	fin.close();
}