#include <stdio.h>
void main()
{
    int a = 10;
    int *ptr;
    ptr = &a;              //& is add of operator and * is dereferencing or direction operator
    float b = 10, *p = &b; // this is fine
    printf("%d\n", &a);//add in integer form
    printf("%d\n", *ptr); //* means value at the addrs saved by ptr
    printf("%p\n", ptr);  // no need of asterisk to print add
    printf("%p\n", &a);   // same as %p for ptr
    printf("%x\n", &a);   //also prints addrs
    //%x is used to print an integer in hexadecimal
    printf("%p\n", *ptr); // something random as it is same as %p of a or 10
    ptr = &b;             // not allowed as of diff data types
    printf("%p\n", ptr);
    int c = 10;
    ptr = &a, &c;//c ka nhi a ka hi add jayga comma operator
    printf("%p\n", ptr);
    ptr = (&a,&c);//c ka add jayga not a ka
    printf("%p\n", ptr);

} 