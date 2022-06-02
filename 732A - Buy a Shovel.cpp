#include<iostream>
using namespace std;

int main()
{
    int k, r;
    cin >> k >> r;
    for (int i = 1; i <= 10; i++)
    {
        if ((i*k) % 10 == 0)
        {
            cout << i;
            break;
        }
        else if (((i*k)-r)%10 == 0)
        {
            cout << i;
            break;
        }
    }
    
}
