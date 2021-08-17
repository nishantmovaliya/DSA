#include<stdio.h>

// int main(){
//     int fact=1,i=1,n;
//     printf("Enter a num: ");
//     scanf("%d",&n);
//     for(i=1; i<=n;i++){
//         fact=fact*i;
//     }
//     printf("%d! = %d",n,fact);
// }

/*.............Recursive....................*/

int factorial(int n){
    if(n==1)
        return n;
    else
        return n * factorial(n-1);
}

int main(){
    int fact,n;
    printf("Enter a number: ");
    scanf("%d",&n);
    fact = factorial(n);
    printf("%d! = %d",n,fact);

}
