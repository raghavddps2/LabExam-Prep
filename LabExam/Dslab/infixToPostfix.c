#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<ctype.h>
#define MAX 50
char stack[MAX];
int top = -1;
int priority(char element){ //Function to check priority of operator
    switch(element){
        case '(':
                return 0;
        case '+':
        case '-':
                return 1;
        case '*':
        case '/':
        case '%':
                return 2;
        case '^':
        case '$':
                return 3;
        default:
                return -1;
    }
}
void push(char element){ //Push an elemnet into stack
    if(top == MAX-1){
        printf("Stack Overflow");
    }
    else{
        stack[++top] = element;
    }
}

char pop(){ //Pop an elemnet from the stack
    if(top == -1){
        return '0';
    }
    else{
        return stack[top--];
    }
}
char peak(){ //get the peak elemnet
    if(top == -1){
        return '0';
    }
    else{
        return stack[top];
    }
}
int isOperator(char symbol){ //Check whether an operatro or not
    switch(symbol){
        case '+':
        case '-':
        case '*':
        case '/':
        case '%':
        case '^':
        case '$':
            return 1;
        default:
            return 0;
    }
}
char* infixToPostfix(char* infix,char* postfix){ //Driver function
    int i = 0;
    int j = -1;
    while(infix[i] != '\0'){
        if(infix[i] == '('){
            push(infix[i]);
        }
        else if(isalnum(infix[i])){
            postfix[++j] = infix[i];
        }
        else if(infix[i] == ')'){
            while(peak() != '('){
                postfix[++j] = pop();
            }
            pop();
        }
        else{
            while(priority(peak()) >= priority(infix[i])){
                postfix[++j] = pop();
            }
            push(infix[i]);
        }
        i++;
    }
    while(peak() != '0'){
        postfix[++j] = pop();
    }
    return postfix;
}

int isValidInfix(char* infix){ //Validity checker
    int nOb =0;
    int nCb = 0;
    int nOd = 0;
    int nOo = 0;
    int i=0;
    int isValidInfix = 1;
    while(infix[i] != '\0'){
        if(isalnum(infix[i])){
            nOd++;
        }
        else if(isOperator(infix[i])){
            nOo++;
        }
        else if(infix[i] == '('){
            nOb++;
        }
        else if(infix[i] == ')'){
            nCb++;
        }
        else{
            return (--isValidInfix);
        }
        i++;
    }
    if((nOb != nCb) || (nOd-nOo != 1)){
        return (--isValidInfix);
    }
    else{
        return isValidInfix;
    }

}
void main(){ //Main function
    char infix[MAX];
    char postfix[MAX];

    while(1){
        printf("Enter the expression:\t");
        scanf("%s",infix);

        if(!isValidInfix(infix)){
            printf("Invalid expression!\n");
        }
        else{
            break;
        }
    }
    printf("\nThe postfix expression is %s",infixToPostfix(infix,postfix));
}

