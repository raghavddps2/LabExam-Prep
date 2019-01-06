#include<stdio.h>
#include<conio.h>
//Functon to search
int binarySearch(int a[],int low,int high,int key){
    int mid = (low+high)/2;
    if(low>high){
        printf("\nElement not found");
    }
    else if(a[mid] == key){
        printf("\nElement found at position %d in the sorted array",mid);
    }
    else if(a[mid]>key){
        binarySearch(a,low,mid-1,key);
    }
    else{
        binarySearch(a,mid+1,high,key);
    }
}
void main(){
    int a[100],n,key,flag;
    printf("\nEnter the no of values in the array:\t");
    scanf("%d",&n); //Take the no of elements
    //To take the elemnets
    printf("\nEnter the elements");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    // to sort the array
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                int temp = a[j+1];
                a[j+1] = a[j];
                a[j] = temp; 
            }
        }
    }
    printf("\nEnter the element you wanna search:\t");
    scanf("%d",&key);
    binarySearch(a,0,n,key);
}