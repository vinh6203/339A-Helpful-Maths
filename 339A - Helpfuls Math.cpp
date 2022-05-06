#include<iostream>
using namespace std;

int main()
{
    string s;
    int one = 0, two = 0, three = 0;
    cin >> s;
    if (s.length() == 1)
    {
        cout << s;
        return 0;
    }
    for (int i = 0; i < s.length(); i += 2)
    {
        if (s[i] == '1')
        {
            one++;
        }
        else if (s[i] == '2')
        {
            two++;
        }
        else
        {
            three++;
        }
        
    }
    for (int i = 0; i < s.length()-1; i++)
    {
        if (i % 2 == 0)
        {
            if (one > 0)
            {
                cout << "1+";
                one--;
            }
            else if (two > 0)
            {
                cout << "2+";
                two--;
            }
            else
            {
                cout << "3+";
                three--;
            }
            
            
        }
        
    }
    if (one > 0)
    {
        cout << "1";
    }
    else if (two > 0)
    {
        cout << "2";
    }
    else
    {
        cout << "3";
    }
    
}
