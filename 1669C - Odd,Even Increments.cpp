#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int a[n];
        bool stop = false;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 2; i < n; i++)
        {
            if ((a[i] % 2 == 0 && a[0] % 2 == 1 && i % 2 == 0) || (a[i] % 2 == 1 && a[0] % 2 == 0 && i % 2 == 0))
            {
                cout << "no" << endl;
                stop = true;
                break;
            }
            else if ((a[i] % 2 == 1 && a[1] % 2 == 0 && i % 2 == 1) || (a[i] % 2 == 0 && a[1] % 2 == 1 && i % 2 == 1))
            {
                cout << "no" << endl;
                stop = true;
                break;
            }
            
        }
        if (stop == false)
        {
            cout << "yes" << endl;
        }
        
        
    }
    
}
