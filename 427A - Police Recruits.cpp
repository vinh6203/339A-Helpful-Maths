#include<iostream>
using namespace std;

int main()
{
    int n;
    int temp;
    int weight = 0, count = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        if (temp == -1)
        {
            if (weight < 1)
            {
                count++;
            }
            else
            {
                weight--;
            }
        }
        else
        {
            weight += temp;
        }
        
    }
    cout << count;
}
