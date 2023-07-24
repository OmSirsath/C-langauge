#include<stdio.h>
int main(){
void printString(char arr[]);
    
    char fristName[] = "om";
    char lastName[] = "sirsath";

    printString(fristName);
    printString(lastName);
    return 0;
}
void printString(char arr[]){
    for(int i=0; arr[i] != '\0' ;i++){
        printf("%c", arr[i]);
    }
    printf("\n");
}
