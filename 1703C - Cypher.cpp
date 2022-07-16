#include<iostream>
using namespace std;

int main()
{
    int t, n, k, a[100];
    cin >> t;
    for (int w = 0; w < t; w++)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> k;
            cin >> s;
            for (int j = 0; j < k; j++)
            {
                if (s[j] == 'D')
                {
                    a[i]++;
                }
                else
                {
                    a[i]--;
                }
                if (a[i] < 0)
                {
                    a[i] = 9;
                }
                if (a[i] > 9)
                {
                    a[i] = 0;
                }
                
            }
            
        }
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        
    }
    
}
