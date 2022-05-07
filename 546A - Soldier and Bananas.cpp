#include<iostream>
using namespace std;

int main()
{
    int k, n, w;
    cin >> k >> n >> w;
    if (n > k*(w*(w+1)/2))
    {
        cout << 0;
        return 0;
    }
    cout << k*(w*(w+1)/2) - n;
    
}
