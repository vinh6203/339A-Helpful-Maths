#include<iostream>
using namespace std;

int main()
{
    int n, a[100];
    cin >> n;
    for (int i = 1; i < n+1; i++)
    {
        int temp;
        cin >> temp;
        a[temp] = i;
    }
    for (int i = 1; i < n+1; i++)
    {
        cout << a[i] << " ";
    }
    
}
