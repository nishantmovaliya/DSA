#include<stdio.h>

// int reverse(int num){
//     int n,rev=0,rem;
//     while (num>0)
//     {
//         rem = num % 10;
//         rev = rev * 10 + rem;
//         num = num/10;
//     }
     
// }
int main(){
   int num,rev=0,rem;
   printf("Enter a num: ");
   scanf("%d",&num);
    while (num>0)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num/10;
    }
    printf("Reverse number: %d",rev);

}