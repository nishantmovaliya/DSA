#include<stdio.h>
#include<conio.h>

int main(){
    int i,j,n;

    printf("Enter no of rows: ");
    scanf("%d", &n);
    for(i=0; i<n;i++){
        for(j=0;j<=i;j++){
            printf("%c ",'A'+ j); //if j=1 then 'A' + j - ṁ1 
        }
        printf("\n");
    }
    return 0;
}