#include<stdio.h>
int main(){
    int aadhar[6];

    //input
    int *ptr = &aadhar[0];
    for(int i=0; i<6; i++){
        printf("%d index : ",i);
        scanf("%d", &aadhar[i]);
    }

    //output
    for(int i=0; i<6; i++){
        printf("%d index = %d \n", i, aadhar[i]);
    }
 return 0;

}