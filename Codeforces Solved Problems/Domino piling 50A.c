#include<stdio.h>
int main()
{
	int m,n;
	scanf("%d %d",&m,&n);
	if(m<1 || m >16 || n<1 || n >16)
	return 0;
	printf("%d",m*n/2);
	return 0;
	}
