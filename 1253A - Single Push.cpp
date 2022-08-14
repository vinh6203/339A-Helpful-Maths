#include<iostream>
using namespace std;
 
int main()
{
    int t, n;
    int a[100001], b[100001];
    cin >> t;
    for (int w = 0; w < t; w++)
    {
        int diff = -1;
        bool was = false;
        string ans = "YES";
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        for (int i = 0; i < n; i++)
        {   
            if (b[i] - a[i] < 0 || (b[i] - a[i] > 0 && was))
            {
                ans = "NO";
                break;
            }
            if (b[i] - a[i] > 0)
            {
                if (diff == -1)
                {
                    diff = b[i] - a[i];
                }
                if (b[i] - a[i] != diff)
                {
                    ans = "NO";
                    break;
                }
                
            }
            else if (diff != -1)
            {
                was = true;
            }
            
            
        }
        cout << ans << endl;
    }
    
}
