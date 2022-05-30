#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    int count = 0;
    cin >> n;
    vector<pair<int, int>> table;
    pair<int, int> temp;
    for (int i = 0; i < n; i++)
    {
        cin >> temp.first >> temp.second;
        table.push_back(temp);
    }
    for (vector<pair<int, int>>::iterator ptr1 = table.begin(); ptr1 != table.end(); ptr1++)
    {
        for (vector<pair<int, int>>::iterator ptr2 = table.begin(); ptr2 != table.end(); ptr2++)
        {
            if (ptr1 == ptr2)
            {
                continue;
            }
            if (ptr1->first == ptr2->second)
            {
                count++;
            }
        }
    }
    cout << count;
}
