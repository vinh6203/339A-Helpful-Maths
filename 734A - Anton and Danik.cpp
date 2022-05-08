#include<iostream>
using namespace std;

int main()
{
    int n, d = 0, a = 0;
    string s;
    cin >> n >> s;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'A')
        {
            a++;
        }
        else
        {
            d++;
        }
        
        
    }
    if (a == d)
    {
        cout << "Friendship";
    }
    else if (a > d)
    {
        cout << "Anton";
    }
    else
    {
        cout << "Danik";
    }
    
    
}
