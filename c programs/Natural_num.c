#include<stdio.h>
int main()
{
    int x,i=1;
    printf("Enter the num\n");
    scanf("%d",&x);
    x = x-1;
    while(1){
        while(i>0 && i<=x){
            printf("%d \n",x);
            x--;
        }
        i--;
    }
}
