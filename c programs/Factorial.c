#include <stdio.h>
int main()
{
    int x, y = 1;
    printf("enter the number\n");
    scanf("%d", &x);
    while (x > 0)
    {
        y *= x;
        x--;
    }

    printf("Factorial = %d\n", y);

    return 0;
}