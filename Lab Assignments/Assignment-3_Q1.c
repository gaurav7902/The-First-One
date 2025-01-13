#include<stdio.h>
#include<stdlib.h>
//using namespace std;


 struct Stack {
		int top;
		unsigned cap;
		int *array;
	};
	
	struct Stack* create(unsigned cap)
	{
	struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));
		stack->cap = cap;
		stack->top = -1;
		stack->array = (int*)malloc(stack->cap * sizeof(int));
		return stack;
	}
	
	
	int isFull(struct Stack* stack)
	{
		return stack->top == stack->cap;
		
	}
	int isEmpty(struct Stack* stack)
	{
		return stack->top == -1;
		
	}
	int push(struct Stack *stack , int item)
	{
		if(isFull(stack))
		return 1;
		stack->array[++stack->top] = item;
		printf("%d pushed to stack\n", item); 
	}
	
	int pop(struct Stack *stack){
		if (isEmpty(stack)) 
        return 2; 
   		return stack->array[stack->top]; 
		
	}
	int peek(struct Stack* stack)
	{
		if (isEmpty(stack)) 
        return 2;
        return stack->array[stack->top]  ;
	}
	
	
	
	
	
int main()
{	
struct Stack* stack = create(6);
push(stack , 1);
pop(stack);

 int choice, item;
    while (1) {
        printf("\nSelect an operation:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Check if Stack is Full\n");
        printf("5. Check if Stack is Empty\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

  
        switch (choice) {
            case 1:
            	if(isFull(stack)!=1){
            printf("Enter the value to push: ");
            scanf("%d", &item);
            push(stack, item);}
            else
             printf("Stack is full\n");
            break;
            
            
            case 2:
            item = pop(stack);
    		if (item != 2) {
                    printf("%d popped from stack\n", item);
                }
            else
            printf("Stack is empty");
            break;
            
            
            
            
            case 3:      	
				item = peek(stack);
                if (item != 2) {
                    printf("Top item %d\n", item);
                }
                else
            	printf("Stack is empty");
                break;
                
                
            case 4:
                if (isFull(stack)) 
                    printf("Stack is full.\n"); 
					else 
                    printf("Stack is not full.\n");
                
                break;
            case 5:
                if (isEmpty(stack)) {
                    printf("Stack is empty.\n");
                } else {
                    printf("Stack is not empty.\n");
                }
                break;
            case 6:
                printf("Exiting...\n");
				return 0;
				default:
					printf("Invalid Choice\n");
			}
			
		}
}
