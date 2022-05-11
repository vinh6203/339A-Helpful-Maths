#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int temp;
        cin >> temp;
        if (temp % 7 == 0)
        {
            cout << temp << endl;
            continue;
        }
        else
        {
            if (temp % 10 + 7 - temp % 7 < 10)
            {
                temp += 7 - temp%7;
            }
            else
            {
                temp -= temp%7;
            }
            
        }
        cout << temp << endl;
        
        
        
    }
    
}
