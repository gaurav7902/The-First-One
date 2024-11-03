#include <stdio.h>
int main()
{
    int n, i, x;
agin:
    scanf("%d", &n);
    if (n < 0 || n > 1000000000)
        goto agin;
    for (; !(n <= 0);)
    {
        i = n % 10;
        if (i >= 5)
        {
            printf("-0|");
        }
        else
            printf("0-|");

        int j = 1;
        if (i - 5 >= 0)
        {
            x = i - 5;
            for (; j <= x; j++)
            {
                printf("%d", 0);
            }
            printf("-", 0);
            for (; j < 5; j++)
            {
                printf("%d", 0);
            }
        }
        else
        {
            x = 5 - i;
            for (; j <= 5 - x; j++)
            {
                printf("%d", 0);
            }
            printf("-", 0);
            for (; j < 5; j++)
            {
                printf("%d", 0);
            }
        }
        printf("\n");
        n /= 10;
    }
}