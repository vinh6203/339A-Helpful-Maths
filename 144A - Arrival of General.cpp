#include<iostream>
using namespace std;

int main()
{
    int n;
    int a[100];
    int max = -1, min = 101;
    int max_index, min_index;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++)
    {
        if (a[i-1] > max)
        {
            max = a[i-1]; 
            max_index = i;
        }
        if (a[i-1] <= min)
        {
            min = a[i-1];
            min_index = i;
        }
        
    }
    if (a[0] == max && a[n-1] == min)
    {
        cout << 0;
    }
    else if (max_index < min_index)
    {
        cout << max_index - 1 + (n - min_index);
    }
    else
    {
        cout << max_index - 1 + (n - min_index) - 1;
    }
}
