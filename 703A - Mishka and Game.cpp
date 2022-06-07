#include<iostream>
using namespace std;

int main()
{
    int n;
    int count = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int m, c;
        cin >> m >> c;
        if (m < c)
        {
            count++;
        }
        else if (m > c)
        {
            count--;
        }
        
    }
    if (count > 0)
    {
        cout << "Chris";
    }
    else if (count == 0)
    {
        cout << "Friendship is magic!^^";
    }
    else
    {
        cout << "Mishka";
    }
    
    
}
