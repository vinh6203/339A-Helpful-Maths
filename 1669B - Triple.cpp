#include<iostream>
#include<unordered_map>
using namespace std
int main()
{
    int t;
    cin >> t;
    
    for (int w = 0; w < t; w++)
    {
        int n;
        unordered_map<int, int> table;
        cin >> n;
        int a[n];
        bool stop = false;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (table.find(a[i]) == table.end())
            {
                table.insert(pair<int, int>(a[i], 1));
                continue;
            }
            table[a[i]]++;
            if (table[a[i]] == 3)
            {
                cout << a[i] << endl;
                stop = true;
                break;
            }
            
            
        }
        if (stop == false)
        {
            cout << -1 << endl;
        }
        
    }
    
}
