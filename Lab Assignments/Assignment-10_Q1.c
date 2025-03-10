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

int isdeadend(node* root,int lower,int higher){
	if(root==NULL)
	return 0;
	if(lower==higher)
	return 1;
	return isdeadend(root->left,lower,root->data-1) || isdeadend(root->right , root->data +1 , higher);
}

int main() {
    struct Node* root = NULL;
	int arr[10]= {50,10,20,30,40,56,57,58,59,55};
	int i=0;
    for(;i<10;i++)
	root = insert(root, arr[i]);
	
	inorder(root);
	printf("\n");
	
	
		if(isdeadend(root,1,INT_MAX))
		printf("YES dead end\n");
		else
		printf("Not a dead enndd\n");
	
		
//
//	root = insert(root,1);
//	root = insert(root,2);
//	root = insert(root,3);
//	
	

	root = insert(root,3);
	root = insert(root,2);
	root = insert(root,1);
		
		
	
		if(isdeadend(root,1,INT_MAX))
		printf("YES dead end\n");
		else
		printf("Not a dead enndd\n");
	
}
