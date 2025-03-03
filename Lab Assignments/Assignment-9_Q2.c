
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




int isBST(struct Node* root, int min, int max) {
    if (root == NULL) 
        return 1;
    if (root->data <= min || root->data >= max) 
        return 0;  
    return isBST(root->left, min, root->data) &&
           isBST(root->right, root->data, max);
}

int main() {
    struct Node* root = NULL;
	int i=10;
    for(;i>0;i--)
	root = insertrandom(root, i);
	
	inorder(root);
	printf("\n");

 	if(isBST(root, INT_MIN , INT_MAX))
 	printf("it is a bst\n");
 	else
 	printf("not a bst\n");
 	
	
	int arr[10] , k=0;
	toarray(root,arr,&k);
	node* root2 = NULL;
	i=0;
	for(;i<10;i++)
	printf("%d ",arr[i]);
	for(;i<10;i++)
	root2 = insert(root, arr[i]);
 	
 	
 	if(isBST(root2,INT_MIN,INT_MAX))
 	printf("it is a bst\n");
 	else
 	printf("not a bst\n");

}
