#include<iostream>
using namespace std;

int main()
{
    int n, k, sum = 0, count = 0;
    cin >> n >> k;
    
    for (int i = 1; i <= n; i++)
    {
        sum += 5*i;
        if (sum > 240 - k)
        {
            break;
        }
        count += 1;
    }
    cout << count;
}
