#include<stdio.h>
int main(){

int n,i=-1,j=-1;
	printf("enter the size of the array\n");
scanf("%d",&n);
int a[n];
	printf("enter the elements in sorted order\n");

for(i=0;i<n;i++){
	scanf("%d",&a[i]);
}
int t,start=0,end=n-1,mid,temp;
printf("enter the target\n");
scanf("%d",&t);
i=0;
while(start<=end){
	mid=(start+end)/2;
	if(t==a[mid]){
		if(i==0)i=mid;
		 j=mid;
		 temp=mid;
		
		 while(temp-1>=0 && a[temp-1]==t){
		 	i=temp-1;
		 	temp--;
		 }
		 
		 temp=mid;
		  while(temp+1<n && a[temp+1]==t){
		 	j=temp+1;
		 	temp++;
		 }
		 
		break;
	}
	if(t<a[mid]){
		end=mid-1;
		
	}else{
		start=mid+1;
	}                
}if(i!=-1){
	printf("element found at %d \n",i);
	
	if(j!=-1) printf("element found at %d \n",j);
    else printf("element  not found \n");

	
}else printf("element  not found \n");


}
























