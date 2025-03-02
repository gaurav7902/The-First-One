#include <stdio.h>
#include <stdlib.h>
#include <math.h>
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

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
    return root;
}

void inorderTraversal(struct Node* root) {
    if (root != NULL) {
        inorderTraversal(root->left);
        printf("%d,", root->data);
        inorderTraversal(root->right);
    }
}


int main() {
    struct Node* root = NULL;
	int arr[10]= {20,30,40,50,60,70,80,79,54,55};
	int i=0;
    for(;i<10;i++)
	root = insert(root, arr[i]);
   

    printf("In-order Traversal: ");
    inorderTraversal(root);
    double height = (double)log(10)/log(2);
 printf("\n Height of the tree is %d\n",(int)height);

    return 0;
}
