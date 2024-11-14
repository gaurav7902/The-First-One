#include<stdio.h>
int main (){
    int i;
    char greet[] = "Hello world" ;

    for (i=0 ; i<20 ; i++)
    {printf("%s \n",greet);}
    
    for (i=0 ; i<20 ; i++)
    {printf("%c\n",greet[i]);}
}