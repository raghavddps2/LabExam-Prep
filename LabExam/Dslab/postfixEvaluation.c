#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<ctype.h>
#define MAX 50
char stack[MAX];
int top =-1;

void push(int element){ //Push function
    if(top == MAX-1){
        printf("Stack Overflow");
    }
    else{
        stack[++top] = element;
    }
}
int pop(){ //Pop function
    if(top == -1){
        printf("Stack Underflow");
        return 0;
    }
    else{
        return stack[top--];
    }
}
int isOperator(char symbol){ //Check operator
    switch(symbol){
        case '+':
        case '-':
        case '*':
        case '%':
        case '^':
        case '/':
        case '$':
                    return 1;
        default:
                    return 0;
    }
}

void postfixEvaluation(char* postfix){ //Evaluation of postfix
    int i=0;
    int isZero = 0;;
    while(postfix[i] != '\0'){
        if(isdigit(postfix[i])){
            push(postfix[i]-'0');
        }
        else if(isOperator(postfix[i])){
            int op1 = pop();
            int op2 = pop();
            switch(postfix[i]){
                case '+':
                        push(op2+op1);
                        break;
                case '-':
                        push(op2-op1);
                        break;
                case '*':
                        push(op2*op1);
                        break;
                case '%':
                        push(op2%op1);
                        break;
                case '^':
                        push(op2+op1);
                        break;
                case '$':
                        push(op2+op1);
                        break;
                case '/':
                        if(op1 == 0 && op2 == 0){
                            isZero = 1;
                        }
                        else if(op1 == 0){
                            isZero = 2;
                        }
                        else{
                            push(op2/op1); 
                        }
            }
        }
        i++;
    }
    if(isZero == 1){
        printf("The evaluated expression is :NaN");
    }
    else if(isZero == 2){
        printf("The evaluated expression is: %c",236);
    }
    else{
        printf("The evaluated expression is: %d",pop());
    }
}
int isValidPostfix(char* postfix){ //checking validity
    int isValidPostfix = 1;
    int nOo = 0;
    int nOd = 0;
    int i=0;
    if(isdigit(postfix[0])  && postfix[1] == '\0'){
        return (--isValidPostfix);
    }
    if(!isdigit(postfix[0]) && isdigit(postfix[1])){
        return (--isValidPostfix);
    }
    while(postfix[i] != '\0'){
        if(isdigit(postfix[i])){
            nOd++;
        }
        else if(isOperator(postfix[i])){
            nOo++;
        }
        else{
            return (--isValidPostfix);
        }
        i++;
    }   
    if(nOd - nOo != 1){
        return (--isValidPostfix);
    }
    else{
        return isValidPostfix;
    }
}
void main(){ //main function
    char postfix[MAX];
    while(1){
        printf("Enter the expression: \t");
        gets(postfix);

        if(!isValidPostfix(postfix)){
            printf("Invalid postfix expression\n");
        }
        else{
            break;
        }
    }
    postfixEvaluation(postfix);
}