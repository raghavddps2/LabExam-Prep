#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    int arr[50];
    int sum_no=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
      scanf("%d",&arr[i]);  
        sum_no += arr[i];
    }
    float mean = sum_no/n;
    float sum_squares;
    for(int i=0;i<n;i++){
        sum_squares += pow((arr[i]-mean),2);
    }
    float variance = sum_squares/n;
    float standard_deviation = sqrt(variance);
    standard_deviation = ((int)(standard_deviation * 10 + .5) / 10.0);
    printf("%.1f",standard_deviation);
    return 0;
}
