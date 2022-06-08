#include<iostream>
#include<algorithm>
using namespace std;

bool compare(const int &a, const int &b)
{
    return a > b;
}

int main()
{
    int t = 1;
    int n, q;
    cin >> t;
    for (int w = 0; w < t; w++)
    {
        int a[150000];
        int prefix[150000]; //use prefix sum
        cin >> n >> q;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n, compare);
        prefix[0] = a[0];
        for (int i = 1; i < n; i++)
        {
            prefix[i] = a[i] + prefix[i-1];
        }
        for (int i = 0; i < q; i++)
        {
            int amount;
            cin >> amount;
            if (amount > prefix[n-1])
            {
                cout << -1 << endl;
            }
            else
            {
                int left = 0, right = n-1, pos = -1;
                while (right >= left)
                {
                    int mid = left + (right - left)/2;
                    if (prefix[mid] >= amount)
                    {
                        right = mid-1;
                        pos = mid+1;
                    }
                    else
                    {
                        left = mid+1;
                    }

                }
                cout << pos << endl;
            }
            
        }
        
    }
    
}
