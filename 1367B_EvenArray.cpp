#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int w = 0; w < t; w++)
    {
        int n, a[41], left = 0, right = 0; //can do without using array! (space complexity O(1))
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0 && a[i] % 2 == 1)
            {
                left++;
            }
            else if (i % 2 == 1 && a[i] % 2 == 0)
            {
                right++;
            }
            
            
        }
        if (left == right)
        {
            cout << left << endl;
        }
        else
        {
            cout << -1 << endl;
        }
        
        
    }
    
    
}