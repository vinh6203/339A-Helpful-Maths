#include<iostream>
#include<algorithm>
using namespace std;
 
int main()
{
    int t;
    string p, h;
    cin >> t;
    for (int w = 0; w < t; w++)
    {
        cin >> p;
        cin >> h;
        string ans = "NO";
        if (h.size() < p.size())
        {
            cout << ans << endl;
            continue;
        }
        sort(p.begin(), p.end());
        for (int i = 0; i < h.size() - p.size() + 1; i++)
        {
            string temp = h.substr(i, p.size());
            sort(temp.begin(), temp.end());
            if (temp == p)
            {
                ans = "YES";
                break;
            }
        }
        cout << ans << endl;
    }
    
}
