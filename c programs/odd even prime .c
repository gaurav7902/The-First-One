#include<stdio.h>
int main()
{
    
    int n,c=1,m,d=0;
    float i=1;
    // printf("enter the number :\n");
    again:
    scanf("%d",&n);
    if(n > 100 || n < 1)
    goto again;
    for(;i>=1;c++){
        i = (float) n/c;
        m = i;
        if (m==i){d++;}
    }
    if (d>2){
    if(n%2==0)
    printf("YES");
    else
    printf("NO");
}
else
    printf("NO");
}