#include<iostream>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    for (int w = 0; w < t; w++)
    {
        string s;
        cin >> s;
        cout << ((s.length()*(s.length()+1))/2) + (int(s[0]-48)-1)*10 << endl;
    }
    
}
