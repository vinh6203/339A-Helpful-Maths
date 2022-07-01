#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cout << n/2 << endl;
    cout << (n % 2 == 1 ? "3 " : "");
    for (int i = 0; i < n/2 - (n % 2 == 1 ? 1 : 0); i++)
    {
        cout << "2 ";
    }
}
