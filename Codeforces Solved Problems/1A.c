#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a<1 || a > 1000000000 || c<1 || c> 1000000000 || b<1 || b > 1000000000)
    return 0;
    int x=(a+c-1)/c,y=(b+c-1)/c;
    printf("%lld",(long long) x*y);
}
