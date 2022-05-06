#include<iostream>
#include<map>
using namespace std;

int main()
{
    string s;
    cin >> s;
    map<char, int> table;

    for (int i = 0; i < s.length(); i++)
    {
        if (table.find(s[i]) == table.end())
        {
            table.insert(pair<char, int>(s[i], 1));
        }
        
    }
    if (table.size() % 2 == 1)
    {
        cout << "IGNORE HIM!";
    }
    else
    {
        cout << "CHAT WITH HER!";
    }
    
    
}
