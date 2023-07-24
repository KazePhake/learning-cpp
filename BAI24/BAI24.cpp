#include <iostream>
#include <fstream>
using namespace std;

int n;

int main()
{
    ifstream fin("bai24.inp");
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    fin.close();
    ofstream fout("bai24.out");
    int minSum = a[0] + a[1];

    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            count += a[j];
            if (count < minSum) {
                minSum = count;
            }
        }
        int tmp[n];
        for (int j = 0; j < n - 1; j++) {
            tmp[j] = a[j + 1];
        }
        tmp[n - 1] = a[0];
        for (int j = 0; j < n; j++) {
            a[j] = tmp[j];
        }
    }

    cout << minSum;
    fout.close();
}