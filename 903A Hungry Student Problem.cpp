#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        
        if (a % 3 == 0 || a % 7 == 0)
        {
            cout << "YES" << endl;
            continue;
        }
        int temp;
        for (int j = 0; j < 34; j++)
        {
            temp = a - j*3;
            if (temp % 7 == 0 && temp > 0)
            {
                cout << "YES" << endl;
                temp = 1;
                break;
            }
            
        }
        if (temp < 0)
        {
            cout << "NO" << endl;
        } 
        
        
    }
  
}
