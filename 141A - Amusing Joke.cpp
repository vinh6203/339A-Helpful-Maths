#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    string s1, s2, s3, s12;
    getline(cin, s1);
    getline(cin, s2);
    getline(cin, s3);
    s12 = s1+s2;
    sort(s12.begin(), s12.end());
    sort(s3.begin(), s3.end());
    if (s3 == s12)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    
}
