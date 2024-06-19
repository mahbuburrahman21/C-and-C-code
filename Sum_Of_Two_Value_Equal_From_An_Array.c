#include <stdio.h>
int main()
{
    int n, num;
    
    scanf("%d %d", &n, &num);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }


    int flag = 0;    
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (ar[i]+ar[j] == num)
            {
                flag = 1;
                printf("%d + %d = %d", ar[i], ar[j], ar[i]+ar[j]);
            }
            
        }
        
    }
    if (flag == 0)
    {
        printf("Not possible");
    }
    return 0; 
}
