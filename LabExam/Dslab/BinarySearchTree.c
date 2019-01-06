#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<ctype.h>
struct node{
    struct node *left;
    int data;
    struct node *right;
};
struct node *tree = NULL;
struct node *root = NULL;

struct node *createNode(int element){
    struct node *newNode;
    newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = element;
    newNode->left = NULL;
    newNode->right = NULL;
}
void createLeaf(struct node *root){
    int data;
    if(root == NULL){
        struct node *newNode;
        printf("\nEnter the value of the root element:\t");
        scanf("%d",&data);
        root = createNode(data);
        tree = root;
        return;
    }
    printf("\nEnter the data:\t");
    scanf("%d",&data);

    while(1){
        if(data>=root->data && root->right != NULL){
            root = root->right;
        }
        else if(data<root->data && root->left != NULL){
            root = root->left;
        }
        else{
            break;
        }
    }
    if(data>=root->data){
        root->right = createNode(data);
    }
    else{
        root->left = createNode(data);
    }
}
void inOrderTraversal(struct node *root){
    if(root != NULL){
        inOrderTraversal(root->left);
        printf("%d ",root->data);
        inOrderTraversal(root->right);
    }
}
void preOrderTraversal(struct node *root){
    if(root != NULL){
        printf("%d ",root->data);
        preOrderTraversal(root->left);
        preOrderTraversal(root->right);
    }
}
void postOrderTraversal(struct node *root){
    if(root != NULL){
        postOrderTraversal(root->left);
        postOrderTraversal(root->right);
        printf("%d ",root->data);
        
    }
}
void main(){
    while(1){
        int ch;
        printf("\n 1. Insert into the tree");
        printf("\n 2. InOrderTraversal");
        printf("\n 3. PreOrderTraversal");
        printf("\n 4. PostOrderTraversal");
        printf("\n 5. Exit!");

        printf("\nEnter your choice:\t");
        scanf("%d",&ch);

        switch(ch){
            case 1:
                    createLeaf(tree);
                    break;
            case 2:
                    printf("\nThe inorder traversal is:\t");
                    inOrderTraversal(tree);
                    break;
            case 3: 
                    printf("\nThe preorder traversal is:\t");
                    preOrderTraversal(tree);
                    break;
            case 4:
                    printf("\nThe postorder traversal is:\t");
                    postOrderTraversal(tree);
                    break;
            case 5:
                    exit(0);
            default: 
                    printf("\n Invalid choice");
        }
    }
}