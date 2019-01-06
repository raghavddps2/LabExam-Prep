#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<ctype.h>
struct node{
    int data;
    struct node* next;
};
struct node* searchPtr = NULL;
struct node* ptr = NULL;
struct node* newNode = NULL;
struct node* head = NULL;
struct node* prePtr = NULL;

struct node* createNode(){
    newNode = (struct node*)malloc(sizeof(struct node));
    int data;
    printf("\nEnter the data:\t");
    scanf("%d",&data);
    newNode->data =  data;
    newNode->next = NULL;
    return newNode;
}

void menu(){
    printf("\n 1. Insert in the beginning");
    printf("\n 2. Insert in the end");
    printf("\n 3. Insert before a given element");
    printf("\n 4. Insert after a given element");
    printf("\n 5. Delete an element from the beginning");
    printf("\n 6. Delete an element from the end");
    printf("\n 7. Delete any given element");
    printf("\n 8. Display");
    printf("\n 9. Exit!");
}

void insert_begin(){
    newNode = createNode();
    newNode->next = head;
    head = newNode;
    printf("\nInserted Successfully");
}

void insert_end(){
    if(head == NULL){
        insert_begin();
        return;
    }
    createNode();
    ptr = head;
    while(ptr->next != NULL){
        ptr = ptr->next;
    }
    ptr->next = newNode;
    printf("\nInserted Successfully");
}
struct node* searchNode(int element){
    ptr = head;
    while(ptr != NULL){
        if(ptr->data == element){
            return ptr;
        }
        ptr = ptr->next;
    }
    return ptr;
}
void insert_before(){
    if(searchPtr == head){
        insert_begin();
        return;
    }
    createNode();
    ptr = head;
    while(ptr->next != searchPtr){
        ptr = ptr->next;
    }
    ptr->next = newNode;
    newNode->next = searchPtr;
    printf("\nInserted Successfully");
}

void insert_after(){
    createNode();
    ptr = head;
    while(ptr->next != NULL){
        ptr = ptr->next;
    }
    if(searchPtr == ptr){
        ptr->next = newNode;
        printf("\nInserted Successfully");
        return;
    }
    newNode->next = searchPtr->next;
    searchPtr->next = newNode;
    
    printf("\nInserted Successfully");
}

void delete_begin(){
    if(head == NULL){
        printf("\nThe linked list is empty");
        return;
    }
    head = head->next;
    printf("\nDeleted Successfully");
}
void delete_end(){
    if(head == NULL){
        printf("The linked list is empty");
        return;
    }
    ptr = head;
    while(ptr->next != NULL){
        prePtr = ptr;
        ptr = ptr->next;
    }
    if(ptr == head){
        head = NULL;
        printf("Deleted Successfully");
        return;
    }
    prePtr->next = NULL;
    ptr = NULL;
    printf("Deleted Successfully");
}
void delete(){
    if(searchPtr == head){
        delete_begin();
        return;
    }
    ptr = head;
    while(ptr->next != searchPtr){
        ptr = ptr->next;
    }
    ptr->next = searchPtr->next;
    printf("\nDeleted Successfully");
}
void display(){
    if(head == NULL){
        printf("\nThe linked list is empty");
    }
    else{
        ptr = head;
        printf("\n The elements of the linked list are:\t");
        while(ptr != NULL){
            printf("%d ",ptr->data);
            ptr = ptr->next;
        }
    }
}
void main(){
    while(1){
        menu();
        int ch,ele;
        printf("\nEnter your choice:\t");
        scanf("%d",&ch);
        switch(ch){
            case 1:
                    insert_begin();
                    break;
            case 2:
                    insert_end();
                    break;
            case 3:
                    printf("\nEnter the element before which you wanna insert:\t");
                    scanf("%d",&ele);
                    searchPtr = searchNode(ele);
                    if(searchPtr == NULL){
                        printf("\nElement not found");
                    }
                    else{
                        insert_before();
                    }
                    break;
            case 4:
                    printf("\nEnter the element after which you wanna insert:\t");
                    scanf("%d",&ele);
                    searchPtr = searchNode(ele);
                    if(searchPtr == NULL){
                        printf("\nElement not found:\t");
                    }
                    else{
                        insert_after();
                    }
                    break;
            case 5:
                    delete_begin();
                    break;
            case 6:
                    delete_end();
                    break;
            case 7:
                    printf("\nEnter the element you want to delete:\t");
                    scanf("%d",&ele);
                    searchPtr = searchNode(ele);
                    if(searchPtr == NULL){
                        printf("\nElement not found");
                    }
                    else{
                        delete();
                    }
                    break;
            case 8:
                    display();
                    break;
            case 9:
                    exit(0);
            default:
                    printf("\nInvalid choice");
        }
    }
}