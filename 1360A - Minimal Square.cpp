#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int a, b;
        cin >> a >> b;
        if (a < b)
        {
            int temp = a;
            a = b;
            b = temp;
        }
        cout << ((a > 2*b ? a : 2*b)*(a > 2*b ? a : 2*b)) << endl;
    }
    
}
