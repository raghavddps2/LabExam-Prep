#include<stdio.h>
#include<conio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 5
int queue[MAX];
int front = -1;
int rear = -1;
void enqueue(int element){
    if(rear == MAX-1){
        printf("The queue is full");
        return;
    }
    else if(front == -1){
        front = 0;
        rear = 0;
        queue[rear] = element;
    }
    else{
        queue[++rear] = element;
    }
    printf("\nElement enqueued successfully");
}

int dequeue(){
    int val;
    if(front == -1){
        printf("The Queue is empty");
        val = -1;
    }
    else if(front == rear){
        val = queue[front];
        front = rear = -1;
    }
    else{
        val = queue[front++];
    }
    return val;
}

int peak(){
    int val;
    if(front == -1){
        printf("The Queue is empty");
        val = -1;
    }
    else{
        val = queue[front];
    }
    return val;
}

void display(){
    if(front == -1){
        printf("The Queue is empty");
    }
    else{
        printf("The elements of the queue are:\t");
        for(int i=front;i<=rear;i++){
            printf("%d ",queue[i]);
        }
    }
}

void main(){
    while(1){
        printf("\n1. Enqueue");
        printf("\n2. Dequeue");
        printf("\n3. Peak element");
        printf("\n4. Display");
        printf("\n5. Exit!");

        int ch;
        int x;
        printf("\nEnter your choice:\t");
        scanf("%d",&ch);

        switch(ch){
            case 1:
                    printf("Enter the element you wanna enqueue:\t");
                    scanf("%d",&x);
                    enqueue(x);
                    break;
            case 2:
                    x = dequeue();
                    if(x != -1){
                        printf("\n The element dequeued is: %d",x);
                        printf("\nElement dequeued successfully");
                    }
                    break;
            case 3:
                    x = peak();
                    if(x != -1){
                        printf("\nThe elemnet at the peak is: %d",x);
                    }
                    break;
            case 4:
                    display();
                    break;
            case 5:
                    exit(0);
            default:
                    printf("\nInvalid choice");

        }
    }
}