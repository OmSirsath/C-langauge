// #include<stdio.h>
// int main(){
//     int arr[2][2] i;
//     arr[0][0] = 1;
//     arr[0][1] = 2;
//     arr[1][0] = 3;
//     arr[1][1] = 4;
   
//    for(int i=0;i<=4;i++){
//     printf("%d",arr[i]);  
//    }
//--------------------------------------++-------------------------------------
// int arr[2][2] = {{1,2,},{3,4}};

// for(int i=0;i<2;i++){
//     for(int j=0;j<2;j++){
//         printf("%d ",arr[i][j]);

//     }
//     printf("\n"); 
// }
//     return 0;
// }

//---------------------------------------------++-------------------------------------
// #include<stdio.h>
// int main(){


// int arr[3][3] = {{1,2,3},{4,3,6},{4,5,6}};

// for(int i=0;i<3;i++){
//     for(int j=0;j<3;j++){
//         printf("%d ",arr[i][j]);

//     }
//     printf("\n"); 
// }
//     return 0;
// }

//----------------------------------------++-------------------------------------------

#include<stdio.h>
int main(){
    
    int r,c;
    printf("Enter a number OF row : ");
    scanf("%d",&r);
    printf("Enter a number OF Colum : ");
    scanf("%d",&c);
    printf("Enter the element :");
    int arr[r][c];
    for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        scanf("%d ",&arr[i][j]);

    }
}
printf("\n");
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        printf("%d ",arr[i][j]);

    }
    printf("\n"); 
}
    return 0;
}


