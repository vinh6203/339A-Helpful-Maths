#include<iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int count = 0;
    
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            count++;
        }
        
    }
    if (count >= s.length() - count)
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
            {
                s[i] += 32;
            }
            cout << s[i];
        }
        
    }
    else
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
            {
                s[i] -= 32;
            }
            cout << s[i];
        }
    }
    
    
    
}
