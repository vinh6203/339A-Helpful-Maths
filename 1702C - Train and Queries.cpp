#include<iostream>
#include<vector>
#include<map>
using namespace std;

int main()
{
    int t, n, k, temp;
    cin >> t;
    for (int w = 0; w < t; w++)
    {
        cin >> n >> k;
        map<int, vector<int>> table;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            table[temp].push_back(i);
        }
        for (int i = 0; i < k; i++)
        {
            int a, b;
            cin >> a >> b;
            if (table[a].empty() == true || table[b].empty() == true)
            {
                cout << "NO" << endl;
                continue;
            }
            cout << (table[a].front() < table[b].back() ? "YES" : "NO") << endl;
            
        }
        
    }
    
}
