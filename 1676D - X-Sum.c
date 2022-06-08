#include<stdio.h>

int main()
{
    int t = 1;
    int n, m;
    int a[200][200];
    scanf("%i", &t);
    for (int w = 0; w < t; w++)
    {
        int max = -1;
        scanf("%i %i", &n, &m);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                scanf("%i", &a[i][j]);
            }
            
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                int sum = a[i][j];
                for (int p = 1; i+p < n && j+p < m; p++) //(1, -1) direction (cartesian)
                {
                    sum += a[i+p][j+p];
                }
                for (int p = 1; i+p < n && j-p >= 0; p++)//(-1, -1) direction (cartesian)
                {
                    sum += a[i+p][j-p];
                }
                for (int p = 1; i-p >= 0 && j+p < m; p++)//(1, 1) direction (cartesian)
                {
                    sum += a[i-p][j+p];
                }
                for (int p = 1; i-p >= 0 && j-p >= 0; p++)//(-1, 1) direction (cartesian)
                {
                    sum += a[i-p][j-p];   
                }
                if (sum > max)
                {
                    max = sum;
                }
                
            }
            
        }
        printf("%i\n", max);
    }
    
}
