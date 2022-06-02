#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    cout << abs((a > b ? b : a)) << " " << abs((a-b)/2);
}
