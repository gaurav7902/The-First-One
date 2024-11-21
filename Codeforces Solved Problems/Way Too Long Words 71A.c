
#include<stdio.h>
#include<string.h>
 
int main()
{
int t,i;
again:
scanf("%d",&t);
if(t < 1 || t > 100 )
goto again;
while(i<t)
{
char str[100];
scanf("%s",str);
if(strlen(str) <= 10)
printf("%s\n",str);
else{
printf("%c%d%c\n",str[0],strlen(str) - 2,str[strlen(str)-1]);
}
i++;
}
}
