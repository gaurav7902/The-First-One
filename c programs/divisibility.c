#include<stdio.h>
int main()
{
	printf("enter number to check divsibility by any number\n");
	printf("num1: ");
	int x,y;
	scanf("%d",&x);
	printf("num2: ");
	scanf("%d",&y);
	if(x%y==0 && y!=0){
		printf("num %d is div by %d",x,y);
	}
	else if(y!=0) {
		printf("num %d is not div by %d",x,y);
	}
	else if(y==0){
				printf("num2 cant be zero");
	}
}
