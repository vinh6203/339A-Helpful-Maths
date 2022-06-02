#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int w = 0; w < t; w++)
    {
        int n;
        int a[51];
        bool stop = false;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        for (int i = 0; i < n-1; i++)
        {
            if (a[i+1]-a[i] > 1)
            {
                stop = true;
                cout << "NO" << endl;
                break;
            }
        }
        if (stop == false)
        {
            cout << "YES" << endl;
        }
        
    }
    
}
