#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int w = 0; w < t; w++)
    {
        long long a[50], b[50];
        long long min_a = 10000000000, min_b = 10000000000, ans = 0;
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] < min_a)
            {
                min_a = a[i];
            }
            
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            if (b[i] < min_b)
            {
                min_b = b[i];
            }
            
        }
        for (int i = 0; i < n; i++)
        {
            ans += (a[i] - min_a > b[i] - min_b ? a[i] - min_a : b[i] - min_b);
        }
        cout << ans << endl;
    }

}
