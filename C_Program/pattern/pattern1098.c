#include<stdio.h>

int main(){
    int i,j,c=11;
    for ( i = 0; i < 5; i++)
    {
    
        for ( j = 4;j>i; j--)
        {
            c--;
            printf("%d",c);
        }
        printf("\n");
        
         
    }
    
    return 0;
}