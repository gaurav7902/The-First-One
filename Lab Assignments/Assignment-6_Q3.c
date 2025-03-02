#include <stdio.h>
#include <stdlib.h>

struct node {
	struct node* prev;
    int num;
    struct node* next;
};

typedef struct node node;
void insert(int x, node** head) {
    node* newnode = (node*)malloc(sizeof(node));
    newnode->num = x;
    newnode->next = NULL;
    newnode->prev = NULL;

    if (*head == NULL) {
        *head = newnode;
    } else {
        node* temp = *head;
        for (; temp->next != NULL ;) {
            temp = temp->next;
        }
        newnode->prev = temp;
        temp->next = newnode;
    }

    printf("Inserted: %d in linked list\n",x);
}
void deleted(int n, int m,node** head)
{
		node *temp1 = *head;
	int k=0;
	for( ;temp1->next !=NULL && k<m;k++ )
	{
		temp1 = temp1->next;
	}
	k=0;
	node *temp2 = temp1;
	temp1 = temp1->next;
 	for( k=0 ;temp1->next !=NULL && k<n ;k++ )
 	{
	if(k==m-1)
	{ if (temp1->next != NULL) {
                temp2->next = temp1->next;
                temp1->next->prev = temp2;
            } else {
                temp2->next = NULL;
            }	 }
	
 	free(temp1);
 }
	printf("Deleted %d nodes after %d nodes \n", m,n);
 }
 
void show(node* head)
{
	node *temp1 = head;
	printf("lisst elemets\n");
	for( ;temp1!=NULL; )
	{
		printf("%d\t",temp1->num);
		temp1 = temp1->next;
	}
	printf("\n");
}



 void swap(node** a, node **b)
 {
 	node* temp =*a;
 	*a = *b;
 	*b = temp;
 }
 



void reverse(node** head) {
    node* temp1 = *head;

    if (temp1 == NULL) return;

    while (temp1->prev != NULL) {
        swap(&temp1->prev, &temp1->next);
        temp1 = temp1->prev;
    }

    *head = temp1;

    printf("Reversed linked list\n");
}

int main() {
    node* head=NULL;
    int i=0;
	for(;i<10;i++)
	insert(i,&head);
	show(head);
	show(head);
	deleted(1,1,&head);
	show(head);
	reverse(&head);
	show(head);

    return 0;
}
