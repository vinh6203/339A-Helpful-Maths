#include<iostream>
#include<map>
using namespace std;

int main()
{
    int n, k;
    int count = 0;
    map<int, int> table;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        if (table.find(temp) == table.end())
        {
            table.insert(pair<int, int>(temp, 1));
        }
        else
        {
            (table.find(temp))->second++;
        }
        
    }
    for (auto p : table)
    {
        if (p.first <= 5 - k)
        {
            count += p.second;
        }
        
    }
    cout << count/3;
}
