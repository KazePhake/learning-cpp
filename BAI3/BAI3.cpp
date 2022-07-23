#include <iostream>
#include <fstream>
#include <iomanip>

int main(int argc, char* argv[]) 
{
    float math,lite,eng;
    ifstream file_i("BAI3.INP");
        cin>>math>>lite>>eng;
    file_i.close();
    ofstream file_o("BAI3.OUT");
        float ttb,vtb,tong;
        ttb = math * 2;
        vtb = lite * 2;
        tong = ttb + vtb + eng;
    cout<<setprecision(2);    
    cout<<tong/5;
    file_o.close();
    system("pause");
    return 0;
}