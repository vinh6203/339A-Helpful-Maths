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
        bool stop = false;
        if (s[0] == '?')
        {
            s[0] = 'a';
            if (s.length() > 1 && s[0] == s[1])
            {
                s[0] = 'b';
            }
        }
        for (int i = 1; i < s.size() - 1; i++)
        {
            if (s[i] == '?')
            {
                s[i] = 'a';
                for (int j = 1; (s[i] == s[i-1] || s[i] == s[i+1]) && j <= 2; j++)
                {
                    s[i] += 1;
                }
                
            }
            else if (s[i] == s[i-1] || s[i] == s[i+1])
            {
                stop = true;
                break;
            }
            
        }
        if (stop)
        {
            cout << -1 << endl;
        }
        else
        {
            if (s[s.length() - 1] == '?')
            {
                s[s.length() - 1] = 'a';
                if (s.length() > 1 && s[s.length() - 1] == s[s.length() - 2])
                {
                    s[s.length() - 1] = 'b';
                }
 
            }
            cout << s << endl;
        }
    }
    
}
