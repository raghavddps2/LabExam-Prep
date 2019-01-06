#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<ctype.h>
struct node{
    struct node *prev;
    int data;
    struct node *next;
};
struct node *head = NULL;
struct node *tail = NULL;
struct node *ptr = NULL;
struct node *searchPtr;
struct node *newNode;
struct node *prePtr;

void createNode(){
    newNode = (struct node*)malloc(sizeof(struct node));
    printf("\nEnter the element:\t");
    scanf("%d",&newNode->data);
    newNode->prev = NULL;
    newNode->next = NULL;
}
void insert_begin(){
    createNode();
    if(head == NULL){
        head = newNode;
        tail = newNode;
    }
    else{
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
    printf("\n Inserted Successfully");
}
void insert_end(){
    if(head == NULL){
        insert_begin();
    }
    else{
        createNode();
        newNode->prev = tail;
        tail->next = newNode;
        tail = newNode;
        printf("\n Inserted Successfully");
    }
}
struct node* searchElement(int data){
    if(head == NULL){
        return NULL;
    }
    else{
        ptr = head;
        while(ptr != NULL){
            if(ptr->data == data){
                    return ptr;
            }
            ptr = ptr->next;
        }
        return NULL;
    }
}
void insert(){
    if(head == searchPtr){
        insert_begin();
    }
    else{
        createNode();
        newNode->prev = searchPtr->prev;
        searchPtr->prev->next = newNode;
        newNode->next = searchPtr;
        searchPtr->prev = newNode;
        printf("\n Inserted Successfully");
    }
}
void delete_begin(){
    if(head == NULL){
        printf("\nThe linked list is empty");
    }
    else if(head->next == NULL){
        head = NULL;
        tail = NULL;
        printf("\n Deleted Successfully");
    }
    else{
        head = head->next;
        head->prev = NULL;
        printf("\n Deleted Successfully");
    }
}
void delete_end(){
    if(head == NULL){
        printf("\n The linked list is empty");
    }
    else if(head->next == NULL){
        delete_begin();
    }
    else{
        tail = tail->prev;
        tail->next = NULL;
        printf("\n Deleted Successfully");
    }
}
void delete(){
    if(searchPtr == head){
        delete_begin();
    }
    else if(searchPtr == tail){
        delete_end();
    }
    else{
        searchPtr->prev->next = searchPtr->next;
        searchPtr->next->prev = searchPtr->prev;
        searchPtr->next = NULL;
        searchPtr->prev = NULL;
    }
}
void display(){
    if(head == NULL){
        printf("\nThe linked list is empty");
    }
    else{
        printf("\nThe elemnets of the linked list are: ");
        ptr = head;
        while(ptr != NULL){
            printf("%d ",ptr->data);
            ptr = ptr->next;
        }
    }
}

void main(){
    while(1){

        int ch;
        printf("\n 1. Insert at the beginning");
        printf("\n 2. Insert at the end");
        printf("\n 3. Insert before a given element");
        printf("\n 4. Delete from the beginning");
        printf("\n 5. Delete from the end");
        printf("\n 6. Delete the given element");
        printf("\n 7. Display");
        printf("\n 8. Exit!");

        printf("\n Enter your choice:\t");
        scanf("%d",&ch);
        int data;
        switch(ch){
            case 1:
                    insert_begin();
                    break;
            case 2:
                    insert_end();
                    break;
            case 3:
                    printf("\n Enter the element before which you wanna insert:\t");
                    scanf("%d",&data);
                    searchPtr = searchElement(data);
                    if(searchPtr == NULL){
                        printf("\nElement not found");
                    }
                    else{
                        insert();
                    }
                    break;
            case 4:
                    delete_begin();
                    break;
            case 5:
                    delete_end();
                    break;
            case 6:
                    printf("Enter the element you wanna delete");
                    scanf("%d",&data);
                    searchPtr = searchElement(data);
                    if(searchPtr == NULL){
                        printf("Element not found");
                    }
                    else{
                        delete();
                    }
                    break;
            case 7:
                    display();
                    break;
            case 8:
                    exit(0);
            default:
                    printf("Invalid choice");
        }
    }
}