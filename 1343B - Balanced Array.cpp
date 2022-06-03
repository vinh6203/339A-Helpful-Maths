#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        if (n % 4 == 0)
        {
            cout << "YES" << endl;
            int odd = 0, even = 0;
            for (int e = 2, count = 0; count < n/2; e += 2, count++)
            {
                cout << e << " ";
                even += e;
            }
            for (int o = 1, count = 0; count < (n/2) - 1; o += 2, count++)
            {
                cout << o << " ";
                odd += o;
            }
            cout << even - odd;
            cout << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    
}
