#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct Node {
    int data;
    struct Node *left, *right;
} *NodePtr;

NodePtr root = NULL;
NodePtr insert(NodePtr currentnode, int value);
int height(NodePtr temp);
int balanceFactor(NodePtr temp);
NodePtr llrotate(NodePtr temp);
NodePtr rrrotate(NodePtr temp);
NodePtr rlrotate(NodePtr temp);
NodePtr lrrotate(NodePtr temp);


NodePtr createNode(int value) {
    NodePtr newNode = (NodePtr)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->left = newNode->right = NULL;
    return newNode;
}



void inorderTraversal(NodePtr temp) {
    if (temp == NULL) return;
    inorderTraversal(temp->left);
    printf("%d ", temp->data);
    inorderTraversal(temp->right);
}
NodePtr insert(NodePtr currentnode,int value){
	if (currentnode == NULL) {
        currentnode=createNode(value);
        return currentnode;
    }else{
    if(value<currentnode->data)currentnode->left=insert(currentnode->left,value);
    
	else currentnode->right=insert(currentnode->right,value);	
	int bf=balanceFactor(currentnode);
	if(bf>1){
		if(value<currentnode->left->data)return llrotate(currentnode);
		else return lrrotate(currentnode);
	}
	if(bf<-1){
			if(value>currentnode->right->data)return rrrotate(currentnode);
		else return rlrotate(currentnode);
	}
	}
return currentnode;	}
int height(NodePtr temp) {
    if (temp == NULL) return 0;
    return 1 + fmax(height(temp->left), height(temp->right));
}

 int balanceFactor(NodePtr temp){
	return (height(temp->left)-height(temp->right));
}
NodePtr llrotate(NodePtr temp){
	NodePtr newroot=temp->left;
	temp->left=newroot->right;
	newroot->right=temp;
	return newroot;
}
NodePtr rrrotate(NodePtr temp){
	NodePtr newroot=temp->right;
	temp->right=newroot->left;
	newroot->left=temp;
	return newroot;
}
NodePtr rlrotate(NodePtr temp){
		NodePtr newroot=temp->right->left;
		temp->right->left=newroot->right;
		newroot->right=temp->right;
		newroot->left=temp;
		return newroot;
}
NodePtr lrrotate(NodePtr temp){
		NodePtr newroot=temp->left->right;
		temp->left->right=newroot->left;
		newroot->left=temp->left;
		newroot->right=temp;
		return newroot;
}
int main() {
    int n;
    scanf("%d", &n);
    int data[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &data[i]);  
        root=insert(root,data[i]);  
    }
    
    printf("Inorder Traversal: ");
    inorderTraversal(root);
    printf("\n");
    printf("Height= %d\n", height(root));
    return 0;
}
