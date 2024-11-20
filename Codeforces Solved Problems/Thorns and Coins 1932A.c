#include<stdio.h>
 
int main()
{
    int t,i=0,count=0;
    scanf("%d",&t);
    if(t<1 || t>1000)
        return 0;
    while(t--)
    {
        int n;
        scanf("%d",&n);
        if(n<1 || n>50)
        return 0;
        char s[51];
        scanf("%s",&s);
        count =0;
        for(i=0;i<n-1;i++)
        {
            if(!((s[i]=='*' && s[i+1]=='*') || s[i]=='\0'))
            {
            if (s[i] == '@')
            count++;
            }
            else
            break;
        }
        if(s[n-1]=='@'&& i == n-1)
        count++;
 
        printf("%d\n",count);
    }
    return 0;
}
