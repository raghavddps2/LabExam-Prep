#include<stdio.h>
#include<conio.h>
void toh(int n,char source,char temp,char destination){
    if(n == 1){
        printf("\nMove disk %d from %c to %c",n,source,destination);
    }
    else{
        toh(n-1,source,destination,temp);
        printf("\nMove disk %d from %c to %c",n,source,destination);
        toh(n-1,temp,source,destination);
    }

}

void main(){
    int n;
    printf("Enter the no of disks:\t");
    scanf("%d",&n);
    printf("\nThe sequence of the steps are:\n");
    toh(n,'A','B','C');
}