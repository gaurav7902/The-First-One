#include<stdio.h>
int main()
{
    int n,count=0,j,yes=0,no=0,k=0;
    again:
    scanf("%d",&n);
    if(n<2 || n > 100000)
    goto again;
    int y[100000],x[100000];
    for(k=0;k<n;k++){
       scanf("%d %d",&x[k],&y[k]);
}
for(j=0;j<n;j++)
{
    if(x[j] < 0){
    // printf("%d",x[j]);
    yes++;}
    else
    no++;
}
if (no < 2 || yes < 2)  
printf("YES");
else
printf("NO");
}