#include<stdio.h>
int main()
{ 
int a=1 , b=2 , c=30 , d=4;
int maximum = a>b && a>b && a>c ? a : ( b>c && b>d ? b : ( c>d ? c:d)) ;
printf("maximum number is %d\n", maximum);
return 99;
}

