#include<stdio.h>
#include<stdlib.h> 

#include<math.h>
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

int maxsum(struct Node* root, int sum) {
    if (root == NULL)
	return sum;
    sum += root->data;
    if (root->left == NULL && root->right == NULL) 
    return sum;
    return fmax(maxsum(root->left, sum), maxsum(root->right, sum));
}


int main() {
    struct Node* root = NULL;
	int arr[10]= {50,10,20,30,40,56,57,58,59,55};
	int i=0;
    for(;i<10;i++)
	root = insert(root, arr[i]);
	
	inorder(root);
	printf("\n");
	printf("%d is maximum sum path",maxsum(root,0));
	

}
