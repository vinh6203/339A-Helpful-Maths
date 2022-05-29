#include<iostream>
#include<map>
using namespace std;

int main()
{
    int k, l, m, n, d;
    map<int, int> index;
    cin >> k;
    cin >> l;
    cin >> m;
    cin >> n;
    cin >> d;
    for (int i = 1; i <= d; i++)
    {
        if (k*i <= d && index.find(k*i) == index.end())
        {
            index.insert(pair<int, int>(k*i, 1));
        }
        if (l*i <= d && index.find(l*i) == index.end())
        {
            index.insert(pair<int, int>(l*i, 1));
        }
        if (m*i <= d && index.find(m*i) == index.end())
        {
            index.insert(pair<int, int>(m*i, 1));
        }
        if (n*i <= d && index.find(n*i) == index.end())
        {
            index.insert(pair<int, int>(n*i, 1));
        }
        
    }
    cout << index.size();
}
