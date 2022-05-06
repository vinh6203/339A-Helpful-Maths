#include<iostream>
using namespace std;

int main()
{
    int a, b, count = 0;
    cin >> a >> b;
    while (a <= b && count < 1000)
    {
        a = a*3;
        b = b*2;
        count++;
    }
    cout << count;
}
