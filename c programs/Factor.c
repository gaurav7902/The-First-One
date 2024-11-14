#include <stdio.h>
int main()
{
    float i = 1;
    int x, c = 1;
    printf("enter number \n");
    scanf("%d", &x);
    while (i >= 1)
    {
        i = (float)x / c;
int a = i;

        if (i == a)
        {
            printf("%d \n", a);
        }
        c++;
    }
}