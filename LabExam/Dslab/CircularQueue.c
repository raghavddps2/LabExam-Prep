#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<ctype.h>
#define MAX 5
int queue[MAX];
int rear = -1;
int front = -1;

void enqueue(int element){
    if((front == 0 && rear == MAX-1) || front == rear+1){
        printf("\nQueue is full");
        return;
    }
    else if(front == -1){
        front =0;
        rear =0;
        queue[rear] = element;
    }
    else if((front != 0 && rear == MAX-1)){
        rear = 0;
        queue[rear] = element;
    }
    else{
        rear = rear+1;
        queue[rear] = element;
    }
    printf("\nEnqueued Successfully");
}

int dequeue(){
    int val;
    if(front == -1 && rear == -1){
        printf("Queue is empty");
        val = -1;
    }
    else if(front == rear){
        val = queue[front];
        front = -1;
        rear = -1;
    }
    else if(front == MAX-1){
        val = queue[front];
        front = 0;
    }
    else{
        val = queue[front++];
    }
    return val;
}

int peak(){
    if(front == -1 && rear == -1){
        printf("\nThe queue is empty");
        return -1;
    }
    else{
        return queue[front];
    }
}

void display(){
    if(front == -1 && rear == -1){
        printf("\nThe queue is empty");
    }
    else{
        printf("\nThe elemnets of the queue are: ");
        if(front <= rear){
            for(int i=front;i<=rear;i++){
                printf("%d ",queue[i]);
            }
        }
        else{
            for(int i=front;i<MAX;i++){
                printf("%d ",queue[i]);
            }
            for(int i=0;i<=rear;i++){
                printf("%d ",queue[i]);
            }
        }
    }
}

void main(){
    while(1){

        int ch;
        printf("\n1. Enqueue");
        printf("\n2. Dequeue");
        printf("\n3. Peak");
        printf("\n4. Display");
        printf("\n5. Exit");

        printf("\nEnter your choice:\t");
        scanf("%d",&ch);
        int x,y,z;
        switch(ch){
            case 1:
                    printf("\nEnter the elemnet you wanna enqueue:\t");
                    scanf("%d",&y);
                    enqueue(y);
                    break;
            case 2:
                    x=dequeue();
                    if(x != -1){
                        printf("\nThe element dequeued is: %d",x);
                        printf("\nDequeued Successfully");
                    }
                    break;
                    
            case 3:
                    z=peak();
                    if(z != -1){
                        printf("\nThe element at the peak  is: %d",z);
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