#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int w = 0; w < t; w++)
    {
        int a, b, c, x, y;
        cin >> a >> b >> c >> x >> y;
        if (c + (b-y < 0 ? (b-y) : 0) + (a-x < 0 ? (a-x) : 0) >= 0)
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }
        
    }
    
}
