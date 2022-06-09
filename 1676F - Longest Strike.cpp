#include<iostream>
#include<vector>
#include<map>
using namespace std;
 
int main()
{
    int t;
    int n, k;
    cin >> t;
    for (int w = 0; w < t; w++)
    {
        map<int, int> table;
        vector<int> a;
        int temp;
        int l, r;
        cin >> n >> k;
        for (int i = 0; i < n; i++)
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
        for (map<int, int>::const_iterator ptr = table.begin(); ptr != table.end(); ptr++)
        {
            if (ptr->second >= k)
            {
                a.push_back(ptr->first);
            }  
        }
        if (a.size() == 0)
        {
            cout << -1 << endl;
            continue;
        }
        a.push_back(-1);
        int left = *(a.begin()), len = -1;
        for (vector<int>::const_iterator ptr = a.begin(); ptr != a.end(); ptr++)
        {
            if (*ptr == -1)
            {
                if (*(ptr-1) - left >= len)
                {
                    r = *(ptr-1);
                    l = left;
                }
                break;
            }
            if ((*ptr) + 1 < *(ptr+1))
            {
                if (*ptr - left >= len)
                {
                    len = *ptr - left;
                    l = left;
                    r = *ptr;
                }
                left = *(ptr+1);
            }
            
        }
        cout << l << " " << r << endl;
    }
    
}
