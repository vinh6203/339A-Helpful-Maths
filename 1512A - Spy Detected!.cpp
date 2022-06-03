#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        int a[101];
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            cin >> a[j];            
        }
        for (int j = 1; j < n-1; j++)
        {
            if (a[n-1] != a[n-2] && a[n-1] != a[n-3])
            {
                cout << n << endl;
                break;
            }
            if (a[0] != a[1] && a[0] != a[2])
            {
                cout << 1 << endl;
                break;
            }
            if (a[j] != a[j-1] && a[j] != a[j+1])
            {
                cout << j + 1 << endl;
                break;
            }
            
        }
        
        
    }
    
}
