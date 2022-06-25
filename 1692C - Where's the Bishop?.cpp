#include<iostream>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    for (int w = 0; w < t; w++)
    {
        char a[9][9];
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                cin >> a[i][j];
            }
            
        }
        for (int i = 1; i < 7; i++)
        {
            for (int j = 1; j < 7; j++)
            {
                if (a[i][j] == '#' && a[i-1][j-1] == '#' && a[i+1][j+1] == '#'
                &&  a[i-1][j+1] == '#' && a[i+1][j-1] == '#')
                {
                    cout << i + 1 << " " << j + 1 << endl;
                    i = 7;
                    break;
                }
                
            }
            
        }
    }
    
}
