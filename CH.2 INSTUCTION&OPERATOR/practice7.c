#include<stdio.h>
int main(){
int isSunday = 1;
int isSnowing = 1;
printf("%d \n", isSunday && isSnowing);

int isMonday = 0;
int isRaining = 0;
printf("%d \n", isMonday || isRaining);

int x;
printf("enter a numbedr : ");
scanf("  %d", &x);
printf("%d \n", x>9 && x<100);
return 0;
}

