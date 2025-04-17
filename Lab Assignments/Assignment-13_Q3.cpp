#include<stdio.h>
int main(){

int n,i,j=0;
	printf("enter the size of the array\n");
scanf("%d",&n);
int a[n];
	printf("enter the elements in sorted order\n");

for(i=0;i<n;i++){
	scanf("%d",&a[i]);
}
int t,start=0,end=n-1,mid=(start+end)/2;
printf("enter the target\n");
scanf("%d",&t);
while(start<=end){

	if(t==a[mid]){
			j++;
		printf("Element found\n no of comparisions =%d",j);
	return 0;
	}
	if(t<a[mid]){
			j++;
		end=mid-1;
		mid=(start+end)/2;
		
	}else{	j++;
		start=mid+1;
		mid=(start+end)/2;
	}
}	printf("Element not found\n no of comparisions =%d",j);

}
