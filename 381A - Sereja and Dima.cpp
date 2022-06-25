#include<iostream>
using namespace std;

int main()
{
    int a[1000];
    int n;
    int temp;
    int first = 0, second = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int left = 0, right = n-1;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            if (a[left] >= a[right])
            {
                first += a[left];
                left++;
            }
            else
            {
                first += a[right];
                right--;
            }
            
        }
        else
        {
            if (a[left] >= a[right])
            {
                second += a[left];
                left++;
            }
            else
            {
                second += a[right];
                right--;
            }  
        }
        
    }
    cout << first << " " << second;
}
