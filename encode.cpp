#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    int w;
    cin >> w;
    int h;
    cin >> h;
    int length = w*h;
    int code[length]={};
    int i=0,tot=0;
    while (tot<length)
    {
        cin>>code[i];
        tot=tot+code[i];
        i=i+1;
    }
    // for (int i=0;i<=length;i++) cin>>code[i];
    // string t;
    // getline(cin, t);

    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    // cout << "|********|" << endl;
    // cout << "|**      |" << endl;
    // cout << "|    ****|" << endl;
    for (int i=0;i<=length;i++) cout<<code[i]<<" ";
}