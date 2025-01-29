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
int is_duplicate(lk* h, int num) {
    lk* temp = h;
    while (temp != NULL) {
        if (temp->num == num) {
            return 1;
        }
        temp = temp->ptr;
    }
    return 0;
}
int main(){
lk *h1 = NULL;
    int i = 500,m;
    for (m = 1; m < 10; m++) {
    	scanf("%d",&i);
        create(&h1, i);
    }
    
    // to show
    lk* temp = h1;
    printf(" link list is\t");
    while (temp != NULL) {
        printf("%d\t", temp->num);
        temp = temp->ptr;
    }
    printf("\n");
    
    int sum=0;
    lk *temp1 = h1;
     while (temp1 != NULL) {
        if (!is_duplicate(temp1->ptr, temp1->num)) {
            sum += temp1->num;
        }
        temp1 = temp1->ptr;
    }
    
    printf("sum of non repeted elements is : %d\n",sum);
    
    
}
