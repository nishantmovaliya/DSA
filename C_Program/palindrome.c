#include<stdio.h>

int main(){
    int num,rev=0,rem,temp;
    printf("Enter a number: ");
    scanf("%d",&num);
    temp = num;
    while(num>0){
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }
    if(temp == rev){
        printf("%d is a Palindrome.",temp);
    }
    else{
        printf("%d is not a Palindrome.",temp);
    }
}