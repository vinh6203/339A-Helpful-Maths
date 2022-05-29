#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, m;
        cin >> n >> m;
        int diff = 26*m;
        vector<string> a;
        for (int j = 0; j < n; j++)
        {
            string temp;
            cin >> temp;
            a.push_back(temp);
        }
        sort(a.begin(), a.end());
        
        for (int j = 0; j < n-1; j++)
        {
            for (int k = j+1; k < n; k++)
            {
                int p = 0;
                for (int l = 0; l < m; l++)
                {
                    p += abs(a[j][l] - a[k][l]);
                }
                
                if (abs(p) < diff)
                {
                    diff = abs(p);
                }
            
            }
            
        }
        cout << diff << endl;
    }
    
}
