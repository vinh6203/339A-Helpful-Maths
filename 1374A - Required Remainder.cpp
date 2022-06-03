#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int w = 0; w < t; w++)
    {
        int x, y, n;
        cin >> x >> y >> n;
        if (n - (n % x) + y > n)
        {
            cout << n - (n % x) + y - x << endl;
        }
        else
        {
            cout << n - (n % x) + y << endl;
        }
    }
    
}
