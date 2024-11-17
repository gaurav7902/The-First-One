#include<stdio.h>
int main()
{
    int x,y;
    printf("enter num \n");
    scanf("%d",&x);
    while(x>0){
        y=1;
        while(y<=x){
        printf("* ");
        y++;
        }
        printf("\n");
        x--;
    }
    
}