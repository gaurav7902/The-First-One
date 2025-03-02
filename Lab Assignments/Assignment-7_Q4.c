#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
typedef struct node node;
node *head = NULL;
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

void deletion(int x)
{
    node *temp = head, *TEMP1 = NULL;
    while (temp != NULL)
    {
        if (temp->data != x)
        {
            TEMP1 = temp;
            temp = temp->next;
        }
        else
            break;
    }
    if (temp == NULL)
        printf("element not in the list\n");
    else if(temp == head)
    {
        head = temp->next; 
        free(temp);
        printf("deleted %d \n", x);
    }
    else
    {
        TEMP1->next = temp->next;
        free(temp);
        printf("deleted %d \n", x);
    }
}



int main()
{
	int i = 0;
    for (; i < 20; i++)
        insert(i);
    peek();
    int k;
    i=0;
    scanf("%d",&k);
    node *temp = head;
    while (temp != NULL && i< k)
    {
      	i++;
        temp = temp->next;
    }
    printf("\n");
    deletion(temp->data);
    peek();
    return 0;
}
