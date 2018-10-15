#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void heapify(int arr[], int n, int i) 
{ 
    int largest = i; // Initialize largest as root 
    int l = 2*i + 1; // left = 2*i + 1 
    int r = 2*i + 2; // right = 2*i + 2 
  
    // If left child is larger than root 
    if (l < n && arr[l] > arr[largest]) 
        largest = l; 
  
    // If right child is larger than largest so far 
    if (r < n && arr[r] > arr[largest]) 
        largest = r; 
  
    // If largest is not root 
    if (largest != i) 
    { 
        int temp  = arr[largest];
            arr[largest] = arr[i];
            arr[i] = temp;
  
        // Recursively heapify the affected sub-tree 
        heapify(arr, n, largest); 
    } 
} 
  
// main function to do heap sort 
void heapSort(int arr[], int n) 
{ 
    // Build heap (rearrange array) 
    for (int i = n / 2 - 1; i >= 0; i--) 
        heapify(arr, n, i); 
  
    // One by one extract an element from heap 
    for (int i=n-1; i>=0; i--) 
    { 
        // Move current root to end 
        int temp = arr[i];
            arr[i] = arr[0];
            arr[0] = temp;
  
        // call max heapify on the reduced heap 
        heapify(arr, i, 0); 
    } 
} 
int main() {
    int X[50],F[50],n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&X[i]);
    }
    int f_total = 0;
    for(int i=0;i<n;i++){
        scanf("%d",&F[i]);
        f_total +=F[i];
    }
        int k=0;
        int arr[50000];
    for(int i=0;i<n;i++){
        for(int j=0;j<F[i];j++){
            arr[k] = X[i];
            k++;
            
        }
    }

    
        heapSort(arr,f_total);
    float Q1,Q3;
    if(f_total%2 == 0){
        int lh = f_total/2;
            if(lh%2 == 0){
                Q1 = (arr[lh/2-1] + arr[lh/2])/2.0;
                Q3 = (arr[lh+(lh/2-1)] + arr[lh+(lh/2)])/2.0; 
            }
            else{
                Q1 = arr[lh/2];
                Q3 = arr[lh+lh/2];
            }
    }
    else{
        
        int lh = f_total/2;
        if(lh%2 == 0){
        Q1 = (arr[lh/2-1] + arr[lh/2])/2.0;
        Q3 = (arr[lh+(lh/2)] + arr[lh+(lh/2+1)])/2.0;
        }
        else{
                Q1 = arr[lh/2];
                Q3 = arr[lh+lh/2+1];
        }
        
    }
printf("%.1f",Q3-Q1);
    
    return 0;
}
