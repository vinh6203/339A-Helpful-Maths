#include<iostream>
#include<map>
using namespace std;
 
int main()
{
    int t, p;
    cin >> t;
    for (int w = 0; w < t; w++)
    {
        string s;
        map<char, int> table;
        int price = 0;
        cin >> s;
        cin >> p;
        for (string::const_iterator ptr = s.begin(); ptr != s.end(); ptr++)
        {
            price += *ptr - 'a' + 1;
            if (table.find(*ptr) == table.end())
            {
                table.insert(pair<char, int>(*ptr, 1));
            }
            else
            {
                (table.find(*ptr))->second++;
            }
 
        }
        map<char, int>::reverse_iterator ptr = table.rbegin();
        while (price > p)
        {
            (ptr->second)--;
            price -= ptr->first - 'a' + 1;
            if (ptr->second == 0)
            {
                ptr++;
            }
            
        }
        for (string::const_iterator ptr = s.begin(); ptr != s.end(); ptr++)
        {
            if (table[*ptr] > 0)
            {
                cout << *ptr;
                (table.find(*ptr))->second--;
            }
            
        }
        cout << endl;
    }
    
}   
