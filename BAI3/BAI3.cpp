#include <iostream>
#include <fstream>
#include <iomanip>

int main(int argc, char* argv[]) 
{
    float math,lite,eng;
        std::cin>>math>>lite>>eng;
        float ttb,vtb,tong;
        ttb = math * 2;
        vtb = lite * 2;
        tong = ttb + vtb + eng;
    std::cout<<setprecision(2);    
    std::cout<<tong/5;
    system("pause");
    return 0;
}