#include<iostream>
using namespace std;

int main()
{
    int n;
    int temp, min = 10001, max = -1, count = 0;
    cin >> n;
    cin >> temp;
    max = temp;
    min = temp;
    for (int i = 0; i < n-1; i++)
    {
        cin >> temp;
        if (max < temp)
        {
            max = temp;
            count++;
        }
        if (min > temp)
        {
            min = temp;
            count++;
        }
        
        
    }
    cout << count;
}
