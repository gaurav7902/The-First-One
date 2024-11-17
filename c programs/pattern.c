#include <stdio.h>
int main()
{
    int j, i = 0, n = 100;
    while (i <= n)
    {
        j=1;
        while (j <= n-i)
        {
            printf("* ");
            j++;
        }
        i++;
        printf("\n");
    }
}
