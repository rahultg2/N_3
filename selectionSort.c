#include <stdio.h>
#include<stdlib.h>



void selectionSort(int *a, int n){
    int i, j, min_indx;
    for(i=0; i<n; i++){
        min_indx =i;
        for(j=i+1; j<n; j++){
            if(a[min_indx]>a[j]){
              min_indx = j;
            }
        }
        swap(&a[min_indx], &a[i]);
        printarray(a,n);
    }
}

void printarray(int *arr, int n){
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int main(){
    int arr[] = {5,3,6,7,1,2,4};
    printarray(arr,7);
    selectionSort(arr,7);
    printarray(arr,7);
    return 0;
}
