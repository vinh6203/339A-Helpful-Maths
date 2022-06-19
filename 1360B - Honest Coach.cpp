#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int t, n;
	cin >> t;
	for (int w = 0; w < t; w++)
	{
		int a[51], diff = 1001;
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		sort(a, a+n);
		for (int i = 1; i < n; i++)
		{
			if (a[i] - a[i-1] < diff)
			{
				diff = a[i] - a[i-1];
			}
			
		}
		cout << diff << endl;
	}
	   
}
