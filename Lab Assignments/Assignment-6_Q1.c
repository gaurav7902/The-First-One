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
void swap(node *next, node *prev)
{
    node *temp = next;
    next = prev;
    prev = temp;
}
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
void reverse()
{
    ;

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
    else if (temp == head)
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
    for (int i = 0; i < 4; i++)
    insert(i);
    peek();
    reverse();
    // deletion(19);
    peek();
    return 0;
}
// If we try to access the null pointer then it will show segmentation fault
