#include <stdio.h>
void main()
{
    int n, m, a;
    scanf("%d %d %d", &n, &m, &a);
    if (n < 1 || m < 1 || a < 1 || a > 1000000000 || m > 1000000000 || n > 1000000000)
        return;
    if ((n%a ==0 && m%a ==0))
        printf("%lld", ((n * m) / (a * a)));
    else if ((((n%a !=0) && (m % a==0)) || (((n % a==0) && (m%a !=0))) ))
        printf("%lld", ((n * m) / (a * a))+1);
    else if (((n % a)!=0 && (m % a)!=0))
        printf("%lld", ((n * m) / (a * a))+2);
}