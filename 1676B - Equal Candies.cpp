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
        for (int j = 0; j < n; j++)
        {
            cin >> a[j];
        }
        int min = a[0], total = 0;
        for (int k = 0; k < n; k++)
        {
            if (a[k] < min)
            {
                min = a[k];
            }
            
        }
        for (int j = 0; j < n; j++)
        {
            total += a[j] - min;
        }
        cout << total << endl;  
        
        
    }
    
}
