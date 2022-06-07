#include<iostream>
#include<algorithm>
#include<numeric>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int w = 0; w < t; w++)
    {
        int n, k;
        int a[31], b[31];
        cin >> n >> k;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        for (int i = 0; i < k; i++)
        {
            int *min_a = min_element(a, a+n);
            int *max_b = max_element(b, b+n);
            if (*min_a < *max_b) 
            {
                int temp = *min_a;
                *min_a = *max_b;
                *max_b = temp;
            }
            
        }
        int sum = 0;
        sum = accumulate(a, a+n, sum);
        cout << sum << endl;
    }
    
}
