#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<ctype.h>
struct node{
    int data;
    struct node *next;
};
struct node *newNode = NULL;
struct node *searchPtr = NULL;
struct node *head = NULL;
struct node *preptr = NULL;
struct node *ptr = NULL;
void createNode(){
    newNode = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter the data:\t");
    scanf("%d",&newNode->data);
    newNode->next = NULL;
}
//Function to insert an element at the beginning of the linked list!
void insert_begin(){
    createNode();
    if(head == NULL){
        head = newNode;
        newNode->next = head;
    }
    else{
        ptr = head;
        while(ptr->next != head){
            ptr = ptr->next;
        }
        ptr->next = newNode;
        newNode->next = head; 
        head = newNode;
    }
    printf("\nInserted Successfully");
}
//Function to insert an element at the end of the linked list
void insert_end(){
    
    if(head == NULL){
        insert_begin();
    }
    else{
        createNode();
        ptr = head;
        while(ptr->next != head){
            ptr = ptr->next;
        }
        ptr->next = newNode;
        newNode->next = head;
        printf("\nInserted Successfully");
    }
}
struct node* searchElement(int data){
    if(head == NULL){
        return NULL;
    }
    else if(head->data == data){
        return head;
    }
    else{
        ptr = head->next;
        while(ptr != head){
            if(ptr->data == data){
                return ptr;
            }
            ptr = ptr->next;
        }
        return NULL;
    }
}
//Function to insert anywhere in the list, we will basicallly take the lement before which the new element is to be added.
void insert(){
    if(searchPtr == head){
        insert_begin();

        return;
    }
    else{
        createNode();
        ptr = head->next;
        while(ptr->next != searchPtr){
            ptr = ptr->next;
        }
        newNode->next = searchPtr;
        ptr->next = newNode;
        printf("\nInserted Successfully");
    }
}
//Function to delete from beginning
void delete_begin(){
    if(head == NULL){
        printf("The linked list is empty");
    }
    else if(head->next == head){
        head = NULL;
        printf("\nDeleted Successfully");
    }
    else{
        ptr = head;
        while(ptr->next != head){
            ptr = ptr->next;
        }
        head = head->next;
        ptr->next = head;
        printf("\nDeleted Successfully");
    }
}
//Function to delete from end
void delete_end(){
    if(head == NULL){
        printf("The linked list is empty");
    }
    else if(head->next == head){
        head = NULL;
        printf("\nDeleted Successfully");
    }
    else{
        ptr = head;
        while(ptr->next != head){
            preptr =ptr;
            ptr = ptr->next;
        }
        preptr->next = head;
        printf("\nDeleted Successfully");
    }
}
//Function to delete any given elemnet
void delete(){
    if(head == NULL){
        printf("The linked list is empty");
    }
    else if(searchPtr ==  head){
        delete_begin();
    }
    else{
        ptr = head->next;
        while(ptr->next != searchPtr){
            ptr = ptr->next;
        }
        ptr->next = searchPtr->next;
    }
}
//function to display
void display(){
    if(head == NULL){
        printf("\nThe linked list is empty");
    }
    else{
        printf("\nThe elemnets of the linked list are: ");
        printf("%d ",head->data);
        ptr = head->next;
        while(ptr != head){
            printf("%d ",ptr->data);
            ptr = ptr->next;
        }
    }
}
//Driver function
void main(){
    while(1){
        printf("\n 1. Insert at the beginning");
        printf("\n 2. Insert in the end");
        printf("\n 3. Insert before a given element");
        printf("\n 4. Delete in the beginning");
        printf("\n 5. Delete in the end");
        printf("\n 6. Delete the said element");
        printf("\n 7. Display");
        printf("\n 8. Exit!");

        int ch,data;
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
                    printf("\n Enter the elemnet you wanna delete");
                    scanf("%d",&data);
                    searchPtr  = searchElement(data);
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
                    printf("\nInvalid choice");
        }
    }
}
