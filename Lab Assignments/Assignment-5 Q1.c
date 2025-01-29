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
    return 0;
}



int main() {
    lk *h1 = NULL , *h2 = NULL;
    int m = 0;
    for (m = 0; m < 10; m++) {
        create(&h1, m);
    }
    for (m = 8; m < 10; m++) {
        create(&h2, m);
    }
    

    lk* temp = h1;
    while (temp != NULL) {
        lk* temp2 = h2;
        while (temp2 != NULL) {
            if (temp->num == temp2->num) {
                printf("Found Intersection at %d\n", temp->num);
                break;
            }
            temp2 = temp2->ptr;
        }
        temp = temp->ptr;
    }
  temp = h2;
    printf("%s link list is\t", "first");
    while (temp != NULL) {
        printf("%d\t", temp->num);
        temp = temp->ptr;
    }
    printf("\n");
    temp = h1;
    printf("%s link list is\t", "first");
    while (temp != NULL) {
        printf("%d\t", temp->num);
        temp = temp->ptr;
    }
    printf("\n");
    

    return 0;
}
