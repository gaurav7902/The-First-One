#include <stdio.h>
#include <stdlib.h>

// Comparison function for integers
int compare(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int main()
{
    int n;
    scanf("%d", &n);
    if (n < 1 || n > 100)
        return 0;
    int a[100];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    // Sort the aay
    qsort(a, n, sizeof(int), compare);

    // Print sorted aay2
    int sume = 0, sumi = 0,i,l;
    for ( i = 0; !(sume > sumi); i++)
    {
        sume = 0, sumi = 0;
        for(int k=0;k<=i;k++)
        sumi+=a[k];
        for(l=n-1;l>i;l--)
        sume+=a[l];
    }

    printf("%d",l);
    return 0;
}
