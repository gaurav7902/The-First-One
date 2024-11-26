#include<stdio.h>
int main()
{
    int x=1,y,n;
    printf("enter num \n");
    scanf("%d",&n);
    while(x>0 && x<=n){
        y=1;
        while(y<=x){
        printf("* ");
        y++;
        }
        printf("\n");
        x++;
    }
    
}   