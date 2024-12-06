#include<stdio.h>
int main()
{
    int a=19;
    int *p = &a; //yha p ka datatype int* hai
    int* *q =&p; // int* *q esa likha h indirectly
    printf("%d %p %d %x \n",a,p,*p,*q);//q k andr p ka addrs h
    *q = &a;
    printf("%p %d",*q,**q);
}