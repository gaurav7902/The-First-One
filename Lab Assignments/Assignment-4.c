#include <stdio.h>
#include <stdlib.h>

struct node {
    int num;
    struct node* ptr;
};

typedef struct node node;

void insert(int i, int j, int x, node* head[]) {
    node* newnode = (node*)malloc(sizeof(node));
    newnode->num = x;
    newnode->ptr = NULL;

    if (head[i - 1] == NULL) {
        head[i - 1] = newnode;
    } else {
        node* temp = head[i - 1];
        for (int k = 0; temp != NULL && k < j - 1; k++) {
            temp = temp->ptr;
        }

//        if (temp == NULL && j != 1) {
//            printf("Position out of bounds!\n");
//            free(newnode);
//            return;
//        }

        newnode->ptr = temp->ptr;
        temp->ptr = newnode;
    }

    printf("Inserted: %d in linked list number %d\n", x, i);
}
void deleted(int i,int j,node* head[])
{
		node *temp1 = head[i-1];

	
	for(int k=0 ;temp1!=NULL && k< j-1;k++ )
	{
		temp1 = temp1->ptr;
	}
 
	node *temp2 = temp1->ptr;
	temp1->ptr = temp2->ptr;
	free(temp2);
	printf("Deleted node at position %d\n", j);
 }
 
 
	void find(int i, int x, node* head[]) {
    node* temp1 = head[i - 1];
    int j = 1;
    while (temp1 != NULL) {
        if (temp1->num == x) {
            printf("Found at position: %d\n", j);
            return;
        }
        temp1 = temp1->ptr;
        j++;
    }
    printf("Not found\n");
}
void show(int i,node* head[])
{
	node *temp1 = head[i-1];
	printf("lisst %d elemets\n",i);
	for( ;temp1->ptr !=NULL; )
	{
		printf("%d\n",temp1->num);
		temp1 = temp1->ptr;
	}
}




void reverse(int i, node* head[]) {
    node* prev = NULL;
    node* current = head[i - 1];
    node* next = NULL;

    while (current != NULL) {
    next = current->ptr;  
    current->ptr = prev; 
    prev = current;    
    current = next;    
    }
    head[i - 1] = prev;

    printf("reversed link list number %d\n",i);
}




void merge(int i,int j,node *head[])
{
	node *temp1 = head[i-1];
	for( ;temp1->ptr !=NULL; )
	{
		temp1 = temp1->ptr;
	}
	temp1->ptr = head[j-1];
	printf("merged list %d , %d",i,j);
	show(i,head);
}
int main() {
    int n;
    	printf("enter num of liss to be created\n");
    scanf("%d", &n);

    node* head[n];
    for (int i = 0; i < n; i++) {
        head[i] = NULL;
    }

    insert(1, 1, 10, head);
	deleted(1,1,head);
	for(int i=0;i<10;i++)
	insert(1, i, i, head);
	for(int i=0;i<10;i++)
	insert(2, i, i, head);
	
	
	find(1,10,head);
	find(1,0,head);
	reverse(1,head);
	show(1,head);
	merge(1,2,head);
	
	
	
    return 0;
}
