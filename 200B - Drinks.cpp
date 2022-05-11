#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int n;
    long double total = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        total += temp;
    }
    cout << fixed << setprecision(12) << total/n;
}
