#include<iostream>
#include<unordered_map>
using namespace std;

int main()
{
    unordered_map<int, int> table;
    string s;
    int temp, ans = 0;
    for (int i = 1; i <= 4; i++)
    {
        cin >> temp;
        table.insert(pair<int, int>(i, temp));
    }
    cin >> s;
    for (string::const_iterator ptr = s.begin(); ptr != s.end(); ptr++)
    {
        ans += (table.find(int(*ptr - '0')))->second;
    }
    cout << ans;
}
