#include<stdio.h>
#include<conio.h>

int main(){
    int i,j,k,n,m;

    printf("Enter no of rows: ");
    scanf("%d", &n);
    m=0;

    for(i=0; i<n; i++) //i=1
    {
        for(j=0; j<m; j++) //k=1
        {
            printf(" ");
        }
        for(k=5; k>=2*i; k--) //k=2*i-1
        {
            printf("*");
        }
        m++;

        printf("\n");
    }
    return 0;
}

/*
OUTPUT


*/