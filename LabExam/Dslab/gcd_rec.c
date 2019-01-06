#include<stdio.h>
#include<conio.h>
int gcd(int x1,int x2){
    int rem = x1%x2;
    if(rem == 0){
        return x2;
    }
    else{
        gcd(x2,rem);
    }
}
void main(){
    int x1,x2;
    printf("\n This is a program to calaculate the GCD of two numbers");
    printf("\nEnter the number 1:\t");
    scanf("%d",&x1);
    printf("\nEnter the number 2:\t");
    scanf("%d",&x2);
    if(x1 == 0 && x2 == 0){
        printf("The GCD is not defined");
    }
    else if(x1 == 0){
        printf("The GCD is %d",x2);
    }
    else if(x2 == 0){
        printf("The GCD is %d",x1);
    }
    else{
        int val = gcd(x1,x2);
        printf("The GCD of %d and %d is %d",x1,x2,val);
    }
}
