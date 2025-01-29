#include<stdio.h>
#include<stdlib.h>

struct lkl {
    int num;
    struct lkl* ptr;
};

typedef struct lkl lk;

int create(lk **h1 , int i) {
    lk* newnode = (lk*)malloc(sizeof(lk));
    newnode->ptr = NULL;
    if (*h1 == NULL) {
        *h1 = newnode;
        newnode->num = i;
    } else {
        lk* temp = *h1;
        while (temp->ptr != NULL) {
            temp = temp->ptr;
        }
        newnode->num = i;
        temp->ptr = newnode;
    }
}
int is_prime(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0; 
    }
    return 1; 
}
int main(){
lk *h1 = NULL;
    int i = 500,m;
    for (m = 1; m < 6; m++) {
    	scanf("%d",&i);
        create(&h1, i);
    }
    
    // to show
    lk* temp = h1;
    printf("%s link list is\t", "first");
    while (temp != NULL) {
        printf("%d\t", temp->num);
        temp = temp->ptr;
    }
    printf("\n");
    temp = h1;
    int sum=0;
    
     while (temp != NULL) {
        if (is_prime(temp->num)) {  
            sum += temp->num;
        }
        temp = temp->ptr; 
    }
    printf("sum is : %d\n",sum);
    
    
}
