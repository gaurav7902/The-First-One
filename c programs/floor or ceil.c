#include<stdio.h>
int main()
{	float g , d;
printf("enter a number \n");
scanf("%f",&g);
int r = g ;
int m = g>r? r+1 : r ;
 printf("ceil(%f) = %d \n\n",g,m);
 printf("floor(%f) = %d" ,g,r);
 return 99;
}
