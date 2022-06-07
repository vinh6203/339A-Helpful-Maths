#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        bool stop = false, check = false;
        string s;
        cin >> n;
        cin >> s;
        for (string::const_iterator ptr1 = s.begin(); ptr1 != s.end()-1; ptr1++)
        {
            if (*ptr1 != *(ptr1+1))
            {
                for (string::const_iterator ptr2 = ptr1+1; ptr2 != s.end(); ptr2++)
                {

                    if (*ptr2 != *ptr1)
                    {
                        check = true;
                    }
                    else if (*ptr2 == *ptr1 && ptr2 - ptr1 > 1 && check == true)
                    {
                        cout << "NO" << endl;
                        stop = true;
                        ptr1 = s.end()-2;
                        break;
                    }

                }
            }
        }
        if (!stop)
        {
            cout << "YES" << endl;
        }
        
    }
    
}
