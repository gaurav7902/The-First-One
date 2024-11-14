#include<stdio.h>
int main()
{
    int x,y,r,i=0;
    printf("enter number\n");
    scanf("%d",&x);
    r=x;
    while(x>0){
        y = x%10;
        i += y*y*y;
        x /=10;
        }

    if(!(i!=r)){
        printf("yes\n");
    }
    else{printf("no\n");}


    // switch(i==x){
    //     case 1: printf("yes this is an armstrong number");
    //     case 0: printf("no not an armstrong number");
    // }
    // return 0;

}