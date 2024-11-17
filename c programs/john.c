#include <stdio.h>
int main(){
	
	int i,j,k=1,a=1,b=1;
    printf("num \n");
	scanf("%d\n%d",&i,&j);
	while(a>1){
        k=1;
        a = i/k;
        while(a!=b && b>1){
            b = j/k;
            k++;
        }
        if (a=b){
            printf("%d",a);
        }
        k++;
    }
		
	
	printf("%d",k);

}