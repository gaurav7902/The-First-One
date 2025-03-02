#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
typedef struct node node;
node *head = NULL;

void insert(int x)
{
    node *newnode = (node *)malloc(sizeof(node));
    newnode->data = x;
    newnode->next = newnode->prev = NULL;
    if (head == NULL)
    {
        head = newnode;
    }
    else
    {
        node *temp = head;
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = newnode;
        newnode->prev = temp;
    }
}
void display()
{
    node *temp = head;
    while (temp != NULL)
    {
        printf("%d\t", temp->data);
        temp = temp->next;
    }
    printf("\n");
}
void reverse()
{
	node* temp = head, *current = NULL;;
    do{  current = temp->prev;
    temp->prev = temp->next;
    temp->next = current;
		  temp = temp->prev;
		}while(temp != NULL);
		if (current != NULL) {
        head = current->prev;
    }
}
void kreverse(int k, int n) {
    if (k <= 1 || n <= 1) return;

    node *current = head;
    node *prev_tail = NULL;
    node *next_node = NULL;
    node *tail = NULL;
	int i = 0;
    for (; current != NULL && i < n / k; i++) {
        tail = current;
        int j = 0;
        for (; current != NULL && j < k; j++) {
            next_node = current->next;
            current->next = current->prev;
            current->prev = next_node;
            current = next_node;
        }

        if (prev_tail != NULL) {
            prev_tail->next = tail;
        }

        if (current != NULL) {
            current->prev = tail;
        }

        if (i == 0) {
            head = tail;
        }

        prev_tail = tail;
    }
}


//void kreverse(int k,int n)
//{
//	node* temp = head, *current = NULL;
//	int i=0;
//    for(;temp != NULL && i < (int) n/k;i++){
//    	int j=0;
//    	for(;j<k;j++)
//	{  current = temp->prev;
//    temp->prev = temp->next;
//    temp->next = current;
//		  temp = temp->prev;
//		}
//		temp = temp->next;
//	}
//	node *temp1 = head;
//    while (temp1->prev != NULL)
//    {
//        temp1 = temp1->prev;
//    }
//    head = temp1;
//}
int main()
{int i = 0,n=15;
    for (; i < n; i++)
    insert(i);
    display();
    reverse();
    display();
    int k=0;
    scanf("%d",&k);
    display();
    kreverse(k,n);
    display();
    return 0;
}
// If we try to acess the null pointer then it will show segmentation fault
