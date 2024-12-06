#include <stdio.h>
void main()
{
    int a = 10;
    int *p,*q;
    p = &a;              
    *p = 20;//changed
    q =p; //esa bhi hta h 
    printf("%d\n",a);
    printf("%x\n",p);
    printf("%x\n",q);
    printf("%p\n",&a);
    *q = *p;//if q was not previously initialised then this won't be allowed
    printf("%x\n",q);
    printf("%d\n",*q);
    int m = &a; //it alaso works but depend on the compiler
    printf("%x %d \n",m,m);
    int *c ;
    *c = *p ;
    printf("%d",*c); //doesn't works
    


}