#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
     if(t<1 || t>1000)
        return 0;
	while(t--){
		int n;
		scanf("%d",&n);
         if(n<1 || n>50)
        return 0;
		char a[50];
		scanf("%s",&a);
		int i,j=0,k;
		for(i=0;a[i]!='\0';i++){
			if(a[i]=='@'){
				j++;
			}
            if(a[i]=='*' && a[i+1]=='*'){
			break;}
			
		}
		printf("%d\n",j);
	}
}
