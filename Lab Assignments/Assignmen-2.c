
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int m,n,p;
	scanf("%d %d",&m,&n);
	if(n > 20)
		p = rand() % (n/20);	
	else
		p = rand() % n;	
	
	float a[m][n] , b[m][n];
		
	printf("%d\n",p);
	
	int p_rand[p];
	for(int i=0;i<p;i++){
		p_rand[i] = rand() % n ;
	}
	
	for(int i =0; i<m;i++)
	{
		for(int j=0;j<p;j++)
		a[i][p_rand[j]] = rand()%5 + 1;
	}
	
	for(int i =0; i<m;i++)
	{
		for(int j=0;j<p;j++)
		b[i][p_rand[j]] = rand()%5 + 1;
	}
	
	//printing
	printf("mtrix a\n");
	for(int i =0; i<m;i++)
	{
		for(int j=0;j<n;j++)
		printf("%.0f\t",a[i][j]);
		printf("\n");
	}
	
	printf("mtrix b\n");
	for(int i =0; i<m;i++)
	{
		for(int j=0;j<n;j++)
		printf("%.0f\t",b[i][j]);
		printf("\n");
	}
	
	clock_t start_time = clock();
	  
	  
	printf("Avg matrix\n");
	for(int i =0; i<m;i++)
	{
		for(int j=0;j<n;j++)
		printf("%.1f\t",(a[i][j]+b[i][j])/2);
		printf("\n");
	}
	clock_t end_time = clock();
    double time_taken = (double)(end_time - start_time) / CLOCKS_PER_SEC;

    printf("Time taken for the operation: %f seconds\n", time_taken);
	
}
