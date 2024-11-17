#include <stdio.h>
int main()
{
    int j, i = 1, n;
    printf("enter f:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf(" %d\t",i*j);
        }
        printf("\n\n");
    }
   

}