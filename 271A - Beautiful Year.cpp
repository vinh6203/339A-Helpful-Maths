#include<iostream>
#include<unordered_map>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = n+1; i < 9999; i++)
    {
        int temp = i;
        bool stop = false;
        unordered_map<int, int> a;
        while (temp != 0)
        {
            if (a.find(temp%10) == a.end())
            {
                a.insert(pair<int, int> (temp%10, 1));
            }
            else
            {
                stop = true;
                temp = 0;
            }
            temp /= 10;
        }
        if (stop == false)
        {
            cout << i;
            break;
        }
        
        
    }
    
}
