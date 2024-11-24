#include<stdio.h>
int diff(int **ptr)
{
	**ptr = 24234;
}
int main()
{
	int n=13;
	int *ptr  = &n;
	int **ptr2 = &ptr;
	printf("%d\n",n);
	**ptr2 = 23433;
	printf("%d\n",n);
	diff(ptr2);
	printf("%d\n",n);


}