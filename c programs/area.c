#include<stdio.h>
int main()
{ float n , l , r ;
printf("Enter n , l ,r respectively (press enter after writing each number)\n");
scanf("%f\n %f\n %f" , &n ,&l ,&r );
float a = n*l*r/2 ;
printf("Area of the the polygon with given dimensions is = %f",a);
return 99;
}
