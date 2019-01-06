#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    struct node *next;
    int data;
}node;

node *head = NULL, *ptr, *newnode, *searchptr;

node * create()
{
    newnode = (node *)malloc(sizeof(node));
    printf("Enter the element :- ");
    scanf("%d",&(newnode->data));
    newnode->next=NULL;
    return newnode;
}

void insertBegin()
{
    newnode=create();
    newnode->next = head;
    head =newnode;
}

void insertEnd()
{
    ptr=head;
    if(head == NULL)
        insertBegin();
    else
    {
        newnode=create();
        while(ptr->next!=NULL)
            ptr=ptr->next;
        ptr->next=newnode;
    }
}

void insertAny(node *searchptr)
{
    ptr=head;
    if(searchptr==head)
        insertBegin();
    else
    {
        while(ptr->next!=searchptr)
            ptr=ptr->next;
        newnode=create();
        newnode->next = searchptr;
        ptr->next = newnode;
    }
}

node * search(int element)
{
    if(head == NULL)
        return NULL;
    else
    {
        ptr=head;
        while(ptr!=NULL)
        {
            if(ptr->data==element)
                break;
            ptr=ptr->next;
        }
        return ptr;
    }
}

void deleteBegin()
{
    if(head==NULL)
        printf("Linked List is empty.\n");
    else
    {
        ptr=head;
        head=head->next;
        free(ptr);
    }
}

void deleteEnd()
{
    if(head==NULL)
        printf("Linked List is empty.\n");
    else if(head->next==NULL)
        deleteBegin();
    else
    {
        node * lastpointer = head;
        node * slastpointer = NULL;
        while(lastpointer->next!=NULL)
        {
            slastpointer=lastpointer;
            lastpointer=lastpointer->next;
        }
        slastpointer->next=NULL;
        free(lastpointer);
    }
}

void deleteAny(node *searchptr)
{
    if(searchptr==head)
        deleteBegin();
    else
    {
        ptr=head;
        while(ptr->next!=searchptr)
            ptr=ptr->next;
        ptr->next=searchptr->next;
        free(searchptr);
    }
}

void display()
{
    if(head == NULL)
        printf("Linked List is empty.\n");
    else
    {
        ptr=head;
        while(ptr!=NULL)
        {
            printf(" The data stored in node :- %d  and the address of node :- %x\n ",ptr->data,ptr);
            ptr=ptr->next;
        }
    }
}

void main()
{
    int choice, element;
    while(1)
    {
        printf("\n1 - Insert Begin\n2 - Insert End\n3 - Insert node anywhere\n4 - Delete Begin\n5 - Delete End\n6 - Delete node anywhere\n7 - Display\n8 - Exit\n");
        printf("Enter your choice :- ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: insertBegin();
            break;
            case 2: insertEnd();
            break;
            case 3: printf("Enter the element of the node before which new node has to be added :-");
            scanf("%d",&element);
            searchptr=search(element);
            if(searchptr==NULL)
                printf("Element not present in list.\n");
            else
                insertAny(searchptr);
            break;
            case 4: deleteBegin();
            break;
            case 5: deleteEnd();
            break;
            case 6: printf("Enter the element of the node which has to be deleted :- ");
            scanf("%d",&element);
            searchptr=search(element);
            if(searchptr==NULL)
                printf("Element not present in list.\n");
            else
                deleteAny(searchptr);
            break;
            case 7: display();
            break;
            case 8: exit(0);
            default: printf("Wrong input.");
            break;
        }
    }
}
