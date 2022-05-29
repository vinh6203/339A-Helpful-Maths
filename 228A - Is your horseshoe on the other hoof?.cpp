#include<iostream>
#include<map>
using namespace std;
 
int main()
{
    map<int, int> table;
    int temp, ans = 0;
    for (int i = 0; i < 4; i++)
    {
        cin >> temp;
        if (table.find(temp) == table.end())
        {
            table.insert(pair<int, int>(temp, 1));
        }
        else
        {
            ((table.find(temp))->second)++;
        }
        
        
    }
    
    for (auto p : table)
    {
        ans += p.second - 1;
    }
    cout << ans;
}
