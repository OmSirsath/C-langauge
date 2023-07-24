#include<stdio.h>
int countodd(int arr[], int n);
void reverse(int arr[], int n);

int main(){
int arr[]={1, 2, 3, 4, 5};
reverse(arr, 5);
printarr(arr, 5);

    return 0;
}

void printarr(int arr[], int n) {
    for(int i=0; i<n; i++){
        printf("%d\t", arr[i]);
    }
    printf("\n");
}



void reverse(int arr[], int n){
    for(int i=0; i<n/2; i++){
        int firstVal = arr[i];
        int secondVal = arr[n-i-1];
        arr[i] = secondVal;
        arr[n-i-1] = firstVal;
    }
}

int countodd(int arr[], int n){
    int count = 0;
    for(int i=0; i<n; i++){
        if(arr[i] % 2 != 0){ //odd
        count++;

        }
    }

    return count;
}