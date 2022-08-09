#include<iostream>
#include<vector>
using namespace std;
 
int main()
{
    int t, n, l, r;
    cin >> t;
    for (int w = 0; w < t; w++)
    {
        cin >> n >> l >> r;
        vector<int> ans;
        for (int i = 1; i <= n; i++)
        {
            if (((l+r)/2) % i == 0)
            {
                ans.push_back((l+r)/2);
            }
            else
            {
                if ((l+r)/2 - (((l+r)/2) % i) >= l)
                {
                    ans.push_back((l+r)/2 - (((l+r)/2) % i));
                }
                else if ((l+r)/2 + i - (((l+r)/2) % i) <= r)
                {
                    ans.push_back((l+r)/2 + i - (((l+r)/2) % i));
                }
                else
                {
                    break;
                }
                
            }
            
        }
        if (ans.size() == n)
        {
            cout << "YES" << endl;
            for (int i = 0; i < ans.size(); i++)
            {
                cout << ans[i] << " ";
            }
            cout << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        
    }
    
}
