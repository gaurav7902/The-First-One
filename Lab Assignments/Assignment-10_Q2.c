#include<stdio.h>
#include<stdlib.h> 
#include<limits.h>
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

struct Node* insert(struct Node* root, int value,char ch='n') {
    if (root == NULL) {
        return newNode(value);
    }

   if(ch=='n'){
   	 if (value < root->data) {
        root->left = insert(root->left, value);
    } else {
        root->right = insert(root->right, value);
    }
   }
   else
   {
   	 if (value > root->data) {
        root->left = insert(root->left, value);
    } else {
        root->right = insert(root->right, value);
    }
   }
}
void inorder(struct Node* root) {
    if (root != NULL) {
        inorder(root->left);
        printf("%d,", abs(root->data));
        inorder(root->right);
    }
}


void inorderchng(struct Node* root,int arr[],int *k) {
    if (root != NULL) {
        inorderchng(root->left,arr,k);
        root->data = arr[*(k)++];
        inorderchng(root->right,arr,k);
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
    struct Node* root = NULL,*root2 = NULL;
	int brr[10]= {50,10,20,30,40,56,57,58,59,55};
	int i=0;
    for(;i<10;i++)
	root = insert(root, brr[i]);
	
	printf("Inorder traversel is :");
	inorder(root);
	printf("\n");
	
	int arr[10],index=0;
	toarray(root,arr,&index);
//	for(i=0;i<10;i++)
//	printf("%d ",arr[i]);
//	printf("\n");
	for(i=0;i<10;i++){
		arr[i]=0;
		int j=i+1;
		for(;j<10;j++)
		arr[i]+=arr[j];
	}
	printf("array is :");
	for(i=0;i<10;i++)
	printf("%d ",arr[i]);
	printf("\n");
	
	
	index=0;
	inorderchng(root,arr,&index);
	
	printf("Inorder traversel is :");
	inorder(root);
	printf("\n");
	

	i=0;
    for(;i<10;i++)
	root2 = insert(root2, -arr[i]);
	
	printf("Inorder traversel of 2 is :");
	inorder(root2);
	printf("\n");
	
	
	
	
}
