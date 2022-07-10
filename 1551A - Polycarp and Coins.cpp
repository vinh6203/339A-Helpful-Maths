#include<iostream>
using namespace std;

int main()
{
    int t;
    int n;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        cout << n/3 + (n % 3 == 1 ? 1 : 0) << " " << n/3 + (n % 3 == 2 ? 1 : 0) << endl;
    }
     
}
