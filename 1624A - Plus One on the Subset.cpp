#include<iostream>
using namespace std;
 
int main()
{
    long long t, n, temp;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		long long min = 1000000001, max = -1;
		cin >> n;
		for (int j = 0; j < n; j++)
		{
			cin >> temp;
			if (temp > max)
			{
				max = temp;
			}
			if (temp < min)
			{
				min = temp;
			}
		}
		cout << max - min << endl;
	}
	   
}
