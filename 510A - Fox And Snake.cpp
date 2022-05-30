#include<iostream>
using namespace std;

int main()
{
    int n, m;
    bool first = false;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i % 2 == 0)
            {
                cout << "#";
            }
            else
            {
                if (first == false)
                {
                    if (j < m-1)
                    {
                        cout << ".";
                    }
                    else if (j == m-1)
                    {
                        cout << "#";
                    }
                }
                else
                {
                    if (j == 0)
                    {
                        cout << "#";
                    }
                    else
                    {
                        cout << ".";
                    }
                }
                
            }
            
        }
        if (first == false && i % 2 == 1)
        {
            first = true;
        }
        else if (i % 2 == 1)
        {
            first = false;
        }
        
        cout << endl;
    }
    
}
