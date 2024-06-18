#include <stdio.h>
int main()
{
    int n, p;
    scanf("%d %d", &n, &p);
    int a[n], b[p]; 
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    
    for (int i = 0; i < p; i++)
    {
        scanf("%d", &b[i]);
    }

    int new[n+p];
    for (int i = 0; i < n; i++)
    {
        new[i] = a[i];
    }

    int j=0;
    for (int i = n; i < n+p; i++)
    {
        new[i] = b[j];
        j++;
    }

    for (int i = 0; i < n+p; i++)
    {
        printf("%d ", new[i]);
    }
        
    return 0; 
}
