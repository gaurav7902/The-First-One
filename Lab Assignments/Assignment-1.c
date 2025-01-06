




#include<stdio.h>
int swap(int *a , int *b)
{
	*a = *a + *b ;
	*b = *a - *b;
	*a = *a - *b;
}
int main()
{
	int n;
	scanf("%d",&n);
	int a[n][n];
		for(int i=0;i<n;i++)
	{
	
		for(int j=0;j<n;j++)
		scanf("%d", &a[i][j]);
	} 
	
	
	
	for(int i=0;i<n;i++)
	{
	
		for(int j=0;j<n;j++)
		{
		printf("%d\t", a[i][j]);
		}
		printf("\n");
	} 
	
	
	
	for(int i=0;i<n;i++)
	{
		if(i%2==1)
		{
			for(int j =0; j < n ; j++)
			{
				for (int k=j+1 ; k<n ;k++)
				if(a[i][j] > a[i][k])
				swap(&a[i][j] , &a[i][k]);
				 
			}
		}
		else                        
		{
			for(int j =0; j < n ; j++)
			{
				for (int k=j+1 ; k<n ;k++)
				if(a[i][j] < a[i][k])
				swap(&a[i][j] , &a[i][k]);
				 
			}
		}
		
	}
	
	printf("\n"); 
	
	for(int i=0;i<n;i++)
	{
	
		for(int j=0;j<n;j++)
		{
		printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
}
