#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

int main()
{
    int t, n;
    cin >> t;
    for (int w = 0; w < t; w++)
    {
        int n;
        cin >> n;
        unordered_map<string, int> table;
        vector<string> a;
        string temp, ans = "";
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            a.push_back(temp);
            table.insert(pair<string, int>(temp, 1));
        }
        for (int i = 0; i < n; i++)
        {
            string check1 = "";
            bool stop = false;
            for (int j = 0; j < a[i].size(); j++)
            {
                check1 += a[i][j];
                string check2 = "";
                for (int k = j+1; k < a[i].size(); k++)
                {
                    check2 += a[i][k];
                }
                if (table.find(check1) != table.end() && table.find(check2) != table.end())
                {
                    ans += "1";
                    stop = true;
                    break;
                }
                
            }
            if (!stop) 
            {
                ans += "0";
            }
        }
        cout << ans << endl;
    }
    
}
