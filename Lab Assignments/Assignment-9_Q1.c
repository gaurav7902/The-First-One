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
	int arr[10]= {50,10,20,30,40,56,57,58,59,55};
	int i=0;
    for(;i<10;i++)
	root = insert(root, arr[i]);
	
	inorder(root);
	printf("\n");

 	if(isBST(root, INT_MIN , INT_MAX))
 	printf("it is a bst\n");
 	else
 	printf("not a bst\n");
 	
 	node *temp = root->left;
	root->left = root->right;
	root->right = temp;
 	
 	
 	if(isBST(root,INT_MIN,INT_MAX))
 	printf("it is a bst\n");
 	else
 	printf("not a bst\n");

}
