#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
typedef struct node node;
node *head = NULL;
node *head1 = NULL;
void insert(int x)
{
    node *newnode = (node *)malloc(sizeof(node));
    newnode->data = x;
    newnode->next = NULL;
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
    }
}

void peek()
{
    node *temp = head;
    while (temp != NULL)
    {
        printf("%d\t", temp->data);
        temp = temp->next;
    }
    printf("\n");
}
long long int numtool(node *hum) {
    node *temp = hum;
    long long int num = 0;
    
    while (temp != NULL) {
        num = num * 10 + temp->data;
        temp = temp->next;
    }
    
    return num;
}

int main()
{
	int i = 0;
    for (; i < 8; i++)
    insert(i);
    peek();
    head1 = head;
    long long int pro= numtool(head1)*numtool(head)  ;
    printf("%lld",pro);
    return 0;
}
