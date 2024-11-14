#include<stdio.h>
int main()
{
    char str1[23],str2[23] ; 
    printf("eneter num\n");
    scanf("%s",str1);
    printf("%s\n",str1);
    gets(str2);
    // gets(str);
    printf("%s" ,str2 );
    // on getting enter the gets stop taing the input thats why 
    // we need to use two gets statements
}