#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int main()
{
    int n;
    vector<int> one_index;
    vector<int> two_index;
    vector<int> three_index;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int temp;
        cin >> temp;
        if (temp == 1)
        {
            one_index.push_back(i);
        }
        else if (temp == 2)
        {
            two_index.push_back(i);
        }
        else
        {
            three_index.push_back(i);
        }
        
    }
    int count = min(one_index.size(), min(two_index.size(), three_index.size()));
    cout << count << endl;
    for (int i = 0; i < count; i++)
    {
        cout << one_index[i] << " " << two_index[i] << " " << three_index[i] << endl;
    }
}
