#include<stdio.h>
#include<string.h>
int main()
{char s[100];
scanf("%s",s);
if(strstr(s, "1111111") || strstr(s, "0000000") )
printf("YES");
else
printf("NO");
}
