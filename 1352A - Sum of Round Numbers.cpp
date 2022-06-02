#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int t;
    int temp;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int index = 1, count = 0;
        vector<int> a;
        cin >> temp;
        while (temp != 0)
        {
            if (temp % 10 != 0)
            {
                a.push_back((temp%10)*index);
                count++;
            }
            temp /= 10;
            index *= 10;
        }
        cout << count << endl;
        for (int p : a)
        {
            cout << p << " ";
        }
        cout << endl;
    }
    

}
