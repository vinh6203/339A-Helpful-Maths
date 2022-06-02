#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int a, b;
        cin >> a >> b;
        if (a == b)
        {
            cout << 0 << endl;
        }
        else
        {
            if ((a - b) % 10 == 0)
            {
                cout << abs(a - b) / 10 << endl;
            }
            else
            {
                cout << abs(a - b) / 10 + 1 << endl;
            }
        }
        
        
    }
    
}
