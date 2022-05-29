#include<iostream>
#include<map>
using namespace std;

int main()
{
    string s;
    map<char, int> table;
    getline(cin, s);
    if (s.length() == 2)
    {
        cout << 0;
        return 0;
    }
    for (auto ptr = s.begin()+1; ptr < s.end(); ptr += 3)
    {
        if (table.find(*ptr) == table.end())
        {
            table.insert(pair<char, int>(*ptr, 1));
        }
        
    }
    cout << table.size();
}
