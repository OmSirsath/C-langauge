#include<stdio.h>
int main(){
   //int marks1 = 97;
   //int marks2 = 98;
   //int marks3 = 99;

   int marks[3];

   printf("enter phy : ");
   scanf("%d \n", &marks[0]);

   printf("enter che : ");
   scanf("%d \n", &marks[1]);

   printf("enter math : ");
   scanf("%d ", &marks[2]);

   printf("phy = %d chem = %d, math = %d", marks[0], marks[1], marks[2]);
    return 0;
}