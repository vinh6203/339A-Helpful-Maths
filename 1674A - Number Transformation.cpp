#include<iostream>
#include<cmath>
using namespace std;
 
int main()
{
    int t;
    int x, y;
    cin >> t;
    for (int w = 0; w < t; w++)
    {
        cin >> x >> y;
        if (y % x != 0)
        {
            cout << 0 << " " << 0 << endl;
            continue;
        }
        if (x == y)
        {
            cout << 1 << " " << 1 << endl;
            continue;
        }
        for (int i = 1; i < y; i++)
        {
            if (pow(double(y)/double(x), double(1)/double(i)) == int(pow(double(y)/double(x), double(1)/double(i))))
            {
                cout << i << " " << pow(double(y)/double(x), double(1)/double(i)) << endl;
                break;
            }
            
        }
        
    }
    
}
