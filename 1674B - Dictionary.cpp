#include<iostream>
using namespace std;

int main()
{
    int t;
    string s;
    cin >> t;
    for (int w = 0; w < t; w++)
    {
        cin >> s;
        cout << 26*(s[0] - 'a') + s[1] - s[0] + (s[1] - s[0] < 0 ? 1 : 0) << endl;
    }
    
}
