#include<iostream>
using namespace std;

int main()
{
    int t;
    int a, b;
    cin >> t;
    for (int w = 0; w < t; w++)
    {
        cin >> a >> b;
        cout << (a < 1 ? 1 : a + 2*b + 1) << endl;
    }
    
}
