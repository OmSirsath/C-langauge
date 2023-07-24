#include<stdio.h>
int main(){
    // 2 * 3
    int marks[2][3];//_ _ _ | _ _ _
    marks[0][0] = 98;
    marks[0][1] = 78;
    marks[0][2] = 65;

    marks[1][0] = 78;
    marks[1][1] = 88;
    marks[1][2] = 75;

    printf("%d", marks[0][1]);

    return 0;

}