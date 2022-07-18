#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int t, n, x, a[200];
    cin >> t;
    for (int w = 0; w < t; w++)
    {
        cin >> n >> x;
        bool stop = false;
        for (int i = 0; i < 2*n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + 2*n);
        for (int i = 0; i < n; i++)
        {
            if (a[i + n] - a[i] < x)
            {
                stop = true;
                break;
            }
            
        }
        if (stop)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
        
    }
    
}
