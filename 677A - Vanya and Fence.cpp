#include<iostream>
using namespace std;

int main()
{
    int n, h;
    int a[1000];
    cin >> n >> h;
    int temp = n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] > h)
        {
            temp++;
        }
        
    }
    
    cout << temp;
} 
