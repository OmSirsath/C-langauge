#include<stdio.h>
int main(){
   // char str[100];
    //fgets(str,100,stdin);
    //puts(str);
    //return 0;

    char *canChange = "Hello World";
    puts(canChange);
    canChange = "hello";
    puts(canChange);

    return 0;
}