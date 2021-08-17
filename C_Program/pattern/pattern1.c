// #include<stdio.h>
// #include<conio.h>

// int main(){
//     int i,j;
//     for(i=0; i<5;i++){
//         for(j=0;j<=i;j++){
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// int main(){
//     int i,j;
//     for(i=5; i>0;i--){
//         for(j=5;j>=i;j--){
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

#include<stdio.h>
#include<conio.h>

int main(){
    int i,j,k,n;

    printf("Enter no of rows");
    scanf("%d", &n);
    for(i=0; i<n;i++){
        for(j=0;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}