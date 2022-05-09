#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, total = 0, one = 0;
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            int temp;
            cin >> temp;
            if (temp == 1)
            {
                one++;
                total += 1;
            }
            else
            {
                total += 2;
            }
            
        }
        if (total % 2 != 0)
        {
            cout << "no" << endl;
            continue;
        }
        if ((total/2)%2 == 0 || one > 0)
        {
            cout << "yes" << endl;
            
        }
        else
        {
            cout << "no" << endl;
        }
        
        
    }
    
}
