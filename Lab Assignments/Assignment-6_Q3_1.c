
#include <stdio.h>
#include <stdlib.h>

struct node {

    int num;
    struct node* next;
};
typedef struct node node;
typedef struct queue{
	node* front;
	node* rear;
}qq;


void enqueue( qq* q , int x) {
    node* newnode = (node*)malloc(sizeof(node));
    newnode->num = x;
    newnode->next = NULL;
     if (q->rear == NULL) {
        q->front = q->rear = newnode;
        return;
    }
    
     q->rear->next = newnode;
    q->rear = newnode;
}

qq* createqq(){
	qq* newq = (qq*)malloc(sizeof(qq*));
	newq->front = newq->rear = NULL;
	return newq;
}
int isempty(qq* q){
	return q->front == NULL;
}
int peek(qq* q){
	if (isempty(q))
        return -1;

  printf("%d\n", q->front->num);

}


void printQueue(qq* q)
{
 
    node* temp = q->front;
    while (temp != NULL) {
        printf("%d -> ", temp->num);
        temp = temp->next;
    }
    printf("NULL\n");
}
 



int main() {
	  qq* q = createqq();
   
enqueue(q, 10);
    enqueue(q, 20);
    enqueue(q, 30);
    enqueue(q, 40);
    enqueue(q, 50);
    peek(q);
printQueue(q);

    return 0;
}
