#include<stdio.h>
#include<stdlib.h> 
#include<limits.h>
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};
typedef struct Node node;



struct Node* newNode(int value) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = value;
    node->left = node->right = NULL;
    return node;
}



struct Node* insertrandom(struct Node* root, int value) {
    if (root == NULL) {
        return newNode(value);
    }
	root->right = insertrandom(root->right, value);
}

struct Node* insert(struct Node* root, int value) {
    if (root == NULL) {
        return newNode(value);
    }

    if (value < root->data) {
        root->left = insert(root->left, value);
    } else {
        root->right = insert(root->right, value);
    }
}
void inorder(struct Node* root) {
    if (root != NULL) {
        inorder(root->left);
        printf("%d,", root->data);
        inorder(root->right);
    }
}


void toarray(struct Node* root,int arr[],int* k) {
    if (root != NULL) {
        toarray(root->left,arr,k);
        arr[(*k)++] = root->data;
        toarray(root->right,arr,k);
    }
    return;
}


int main() {
    struct Node* root = NULL;
	int i=10;
    for(;i>0;i--)
	root = insertrandom(root, rand()%15);
	
	inorder(root);
	printf("\n");

 	
	
	int arr[10] , k=0;
	toarray(root,arr,&k);
	int count=0,j=0;
	printf("Pairs not following bst are:\n");
	for(i=0;i<10;i++){
		for(j=i+1;j<10;j++){
			if(arr[i] >= arr[j]){
			printf("(%d,%d)\n",arr[i],arr[j]);
			count++;
		}
		}
	}
	printf("number off Pairs not following bst are:%d",count);
}
