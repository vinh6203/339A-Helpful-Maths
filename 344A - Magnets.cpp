#include<iostream>
using namespace std;

int main()
{
    int n, count = 1;
    string current, prev;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> current;
        if (current == "10" && prev == "01" || current == "01" && prev == "10")
        {
            count++;
        }
        prev = current;
        
    }
    cout << count;
}
