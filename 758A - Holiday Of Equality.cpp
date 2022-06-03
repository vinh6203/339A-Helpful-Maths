#include<iostream>
using namespace std;

int main()
{
    int n;
    int max = -1, count = 0;
    int a[101];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] > max)
        {
            max = a[i];
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        count += max - a[i];
    }
    cout << count;
}
