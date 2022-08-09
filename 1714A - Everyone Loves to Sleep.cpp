#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
 
bool compare(pair<int, int>& a, pair<int, int>& b)
{
    if (a.first != b.first)
    {
        return a.first < b.first;
    }
    return a.second < b.second;
}
 
int main()
{
    int t, n, h, m;
    cin >> t;
    for (int w = 0; w < t; w++)
    {
        cin >> n >> h >> m;
        vector<pair<int, int>> a;
        a.push_back(pair<int, int>(h, m));
        for (int i = 0; i < n; i++)
        {
            pair<int, int> temp;
            cin >> temp.first >> temp.second;
            a.push_back(temp);
        }
        sort(a.begin(), a.end(), compare);
        for (vector<pair<int, int>>::const_iterator ptr = a.begin(); ptr != a.end(); ptr++)
        {
            if (ptr->first == h && ptr->second == m)
            {
                int ans_h = 0, ans_m = 0;
                if (ptr + 1 == a.end())
                {
                    ans_m = (60 - ptr->second) + a.begin()->second;
                    ans_h = (24 - ptr->first) + a.begin()->first - 1;
                    if (ans_m >= 60)
                    {
                        ans_m %= 60;
                        ans_h += 1;
                    }
                    
                }
                else
                {
                    ans_m = (ptr+1)->second - ptr->second;
                    ans_h = (ptr+1)->first - ptr->first;
                    if (ans_m < 0)
                    {
                        ans_m += 60;
                        ans_h -= 1;
                    }
                    
                }
                cout << ans_h << " " << ans_m << endl;
                break;
            }
        }
    }
    
}
