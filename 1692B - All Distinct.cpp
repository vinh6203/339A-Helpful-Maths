#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    for (int w = 0; w < t; w++)
    {
        unordered_map<int, int> a;
        int n, temp;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            if (a.find(temp) == a.end())
            {
                a.insert(pair<int, int>(temp, 1));
            }
            
        }
        cout << a.size() + ((n-a.size()) % 2 > 0 ? -1 : 0) << endl;
 
    }
    
}
