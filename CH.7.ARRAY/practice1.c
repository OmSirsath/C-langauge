#include<stdio.h>
int counteven(int arr[], int n);

int main(){
int arr[]={1, 2, 3, 4, 5, 6, 7 ,8 ,9 ,10,};
printf("%d", counteven(arr, 10));
    return 0;
}

int counteven(int arr[], int n){
    int count = 0;
    for(int i=0; i<n; i++){
        if(arr[i] % 2 != 0){ //even
        count++;

        }
    }

    return count;
}