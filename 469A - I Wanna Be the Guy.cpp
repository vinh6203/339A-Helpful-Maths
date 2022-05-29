#include<iostream>
#include<map>
using namespace std;
 
int main()
{
    int n;
    int p, q, count = 1;
    map<int, int> table;
    cin >> n;
    cin >> p;
    for (int i = 0; i < p; i++)
    {
        int temp;
        cin >> temp;
        if (table.find(temp) == table.end())
        {
            table.insert(pair<int, int>(temp, 1));
        }
        
    }
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int temp;
        cin >> temp;
        if (table.find(temp) == table.end())
        {
            table.insert(pair<int, int>(temp, 1));
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (table.find(count) == table.end())
        {
            cout << "Oh, my keyboard!";
            return 0;
        }
        count++;
        
    }
    cout << "I become the guy.";
    
}
