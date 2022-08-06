#include<iostream>
using namespace std;
 
int main()
{
    long long n, m;
    cin >> n >> m;
    long long a[100000];
    long long left_to_right[100000], right_to_left[100000];
    left_to_right[0] = 0;
    right_to_left[n-1] = 0; // n - 1
    for (long long i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (long long i = 1; i < n; i++)
    {
        left_to_right[i] = left_to_right[i-1] + (a[i] - a[i-1] < 0 ? -(a[i] - a[i-1]) : 0);
        right_to_left[n-1-i] = right_to_left[n-i] + (a[n-1-i] - a[n-i] < 0 ? -(a[n-1-i] - a[n-i]) : 0);
    }
    for (long long i = 0; i < m; i++)
    {
        long long a, b;
        cin >> a >> b;
        if (a <= b)
        {
            cout << left_to_right[b-1] - left_to_right[a-1] << endl;
        }
        else
        {
            cout << right_to_left[b-1] - right_to_left[a-1] << endl;
        }
        
    }
    
}
