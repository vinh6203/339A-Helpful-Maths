#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        if (i == n - 1 && n % 2 == 1)
        {
            cout << "I hate it";
            break;
        }
        else if (i == n - 1 && n % 2 == 0)
        {
            cout << "I love it";
            break;
        }
        if (i % 2 == 0)
        {
            cout << "I hate that ";
        }
        else
        {
            cout << "I love that ";
        }
        
    }
    
    
}
