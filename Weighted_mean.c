#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define ROUNDF(f, c) (((float)((int)((f) * (c))) / (c))) //This macro definition is so cool!!

int main() {
    short int n;
    int mean_sum=0,weight_sum=0;
    float mean;
    //printf("Enter the value of n");
    scanf("%hd",&n);
    short int *arr;
    short int *weight;
    arr = (short int *)malloc(n*sizeof(short int));
    weight = (short int *)malloc(n*sizeof(short int));
    for(int i=0;i<n;i++){
        scanf("%hd",&arr[i]);
    }
    for(int i=0;i<n;i++){
        scanf("%hd",&weight[i]);
    }
    for(int i=0;i<n;i++){
        mean_sum += arr[i]*weight[i];
        weight_sum += weight[i];
        mean = (float)mean_sum/weight_sum;
    }
         mean = ROUNDF(mean, 10);
    printf("%.1f",mean);
    return 0;
}
