#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int w = 0; w < t; w++)
    {
        int n, count = 0;
        int a[31];
        bool stop = false;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = n-2; i >= 0; i--)
        {
            if (a[i] >= a[i+1])
            {
                while (a[i] >= a[i+1] && a[i] > 0)
                {
                    a[i] /= 2;
                    count++;
                }
            }
        }
        for (int i = 1; i < n; i++)
        {
            if (a[i] == a[i-1])
            {
                stop = true;
                break;
            }
            
        }
        if (!stop)
        {
            cout << count << endl;
        }
        else
        {
            cout << -1 << endl;
        }
        
        
    }
    
}
