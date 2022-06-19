#include<iostream>
using namespace std;
 
int main()
{
	int a[1001];
	for (int i = 0, j = 0; i <= 1666; i++, j++)
	{
		if (i % 10 != 3 && i % 3 != 0)
		{
			a[j] = i;
		}
		else
		{
			j--;
		}
		
	}
	
    int t, k;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> k;
		cout << a[k-1] << endl;
	}
	   
}
