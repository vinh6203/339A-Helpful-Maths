#include<iostream>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, first_3 = 0, last_3 = 0;
        cin >> n;
        for (int i = 0; i < 3; i++)
        {
            first_3 += n % 10;
            n /= 10;
        }
        for (int i = 0; i < 3; i++)
        {
            last_3 += n % 10;
            n /= 10;
        }
        if (first_3 == last_3)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        
    }
    
}
