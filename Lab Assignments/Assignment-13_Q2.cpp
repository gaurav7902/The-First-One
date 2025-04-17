#include<stdio.h>
int main(){
int t,start=0,end,mid,k=0;
printf("enter the target\n");
scanf("%d",&t);
end=t;
while(start<=end){ k=mid*mid;
	mid=(start+end)/2;
	if(t==k){
	
		printf("the sq root of %d is %d",t,mid);
		break;
	}
	
	if(t<k){
		end=mid;
	}else{
		start=mid;
	}                
}}


























