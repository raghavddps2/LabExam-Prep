#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<ctype.h>
struct node{
    struct node *prev;
    int data;
    struct node *next;
};
struct node *prePtr = NULL;
struct node *ptr = NULL;
struct node *head = NULL;
struct node *tail = NULL;
struct node *newNode = NULL;

void createNode(int data){
    newNode = (struct node *)malloc(sizeof(struct node));
    newNode->next = NULL;
    newNode->prev = NULL;
    newNode->data  = data;
}
void insert_data(int data){
    if(head == NULL){
        createNode(data);
        head = newNode;
        tail = newNode;
    }
    else if(head->data >= data){
        createNode(data);
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
    else if(tail->data <=data){
        createNode(data);
        newNode->prev = tail;
        tail->next = newNode;
        tail = newNode;
    }
    else{
        createNode(data);
        ptr = head;
        while(ptr->data < data){
            prePtr = ptr;
            ptr = ptr->next;
        }
        newNode->prev = prePtr;
        newNode->next = ptr;
        prePtr->next = newNode;
        ptr->prev = newNode;
    }
}
void display(){
    if(head == NULL){
        printf("\nThe linked list is empty");
    }
    else{
        printf("\nThe elements of the linked list are:\t");
        ptr = head;
        while(ptr != NULL){
            printf("%d ",ptr->data);
            ptr = ptr->next;
        }
    }
}
void main(){
    while(1){
        printf("\n 1. Insert");
        printf("\n 2. Display");
        printf("\n 3. Exit!");

        int ch,data;
        printf("\n Enter your choice:\t");
        scanf("%d",&ch);

        switch(ch){
            case 1:
                    printf("\n Enter the data you wanna insert:\t");
                    scanf("%d",&data);
                    insert_data(data);
                    break;
            case 2:
                    display();
                    break;
            case 3:
                    exit(0);
            default:
                    printf("Invalid choice");

        }
    }
}