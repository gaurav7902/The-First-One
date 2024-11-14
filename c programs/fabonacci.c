#include<stdio.h>
int main()
{
	int i=1,j=1,n,x=0,temp;
	printf("the number upto or less than that fabonaaci shoud go\n");
	scanf("%d",&n);
	while(i<=n && j<=n){
		x++;
		if(x%2!=0){
			printf("%d\n",i);
			temp=i;
			j+=temp;
		}
		else{
			printf("%d\n",j);
			temp=j;
			i+=temp;
		}
	}
	
}
