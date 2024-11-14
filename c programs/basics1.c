#include<stdio.h>
int main()

{
	
	// i am intialising variables
	int a;
	int b;
	float k;
	char r = 'A';
	

	
	
	// checking size 
int s1 = sizeof(a) , s2= sizeof(k) , s3 = sizeof(r);

printf("size1 = %d , size2 = %d , size3 = %d \n" , s1 , s2 , s3);


	// i am declaring/assigning variables
 a=10,b=4;
 
 
 // using modulus operator
int f = (a%b);
printf("f=%d\n" ,f);


//using increment decreament
int c=++a ;
int d = b++ , m=b--;
 printf("a=%d and c= %d and d=%d and b=%d and m=%d \n" ,a,c,d,b,m); 
 
 
 //using equal to 
 int j=11;
int v = (j==a); 
 printf("v=%d\n" , v);
 
 //not equal to
 int e= (a!=b);
 printf("e = %d\n",e);
 
 // logical and and or and not
 
 int g = ( a > b && b == 3);
 int h = ( a> b || b==3);
 int i=  !( a> b || b==3);
 printf("g=%d\nh=%d\ni= %d \n", g,h,i);
 
 // using bitwise or and not xor(alg h to shi vrna 0)
 float q = a&b ;
 int l=a|b , n=a^b , o=~b , p=~a;
 printf("q = %f , l = %d , n=%d , o = %d ,p=%d \n" ,q,l,n,o,p);
 
 // left(dont remove the fisrt bit)  right( must remove the last bit) shift
 
 int s = a << 1 ;
 int t= a>>1 ;
printf(" a = %d\n" , a);
 printf("now left shift of a of 1 bit is = %d \n" , s); 
 printf("now right shift of a of 1 bit is = %d \n" , t);
 
 // add sub and assign
 a += 5 ; // a = 11
 printf("now a = %d \n", a);  // a = 16
 a -= b;  // this  means a = a-b
 printf("again a changed to a  = %d \n", a); // a = 12
 
 
 // modulus and assign
 a%=b; // this means a = remainder of a/b
 printf("again a changed to a  = %d \n", a);
 
 //conditional operator
 
 int maximum = ( a > b ) ? a : b ; //? a : b mtlb shi h to a vrna b
 printf(" max = %d \n" , maximum);

 int minimum =  7 < 8  ? 7 : 8 ; // also bracket is not imp
 printf(" min = %d \n" , minimum); 
 
 // operator precedence
 a+=2;
 a *= 5+3*8  ;  // multi assign worked after the expression ( learn the table)
  printf("again a changed to a  = %d \n", a);
  
  
  // asssociativity

a += (a=6); // now a became 6
printf("again a changed to a  = %d \n", a); // now a became 12
// can use condtional operator in itself
int result = ( g < f ) ? ( 7 > 8  ? 7 : 8 ) : ( ( 7 < 8 ) ? 7 : 8) ;
printf("true so result will be ------> %d \n" , result );

// implicit casting
printf("%d \n" , a );

float x = a ;
printf(" x is %f  \n" , x);


// explicit casting 
x = 12.998999 ;
printf("now x is %f \n" , x);
  int y = x ;
 printf(" now y is %d \n " , y);

b=56 ;
float z = (float) a/b; // integers are ivolved so we have to convert it to float first
printf("%f \n" , z); 

char ch = 'B';
int w = (int) ch ;
printf("w= %d \n" , w);











 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 return 0;
 
}


