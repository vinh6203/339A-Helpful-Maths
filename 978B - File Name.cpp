#include<iostream>
using namespace std;
 
int main()
{
    int n, count = 0;
    cin >> n;
    string s;
    cin >> s;
 
    for (int i = 0; i < s.length() - 2; i++)
    {
 
        if (s[i] == 'x' && s[i+1] == 'x' && s[i+2] == 'x')
        {
            count++;
        }
        
        
    }
    
    cout << count;
}
