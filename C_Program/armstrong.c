#include<stdio.h>

int main(){
    int num,rem,sum=0,tmp;
    printf("Enter a number: ");
    scanf("%d",&num);
    tmp = num;
    while(num>0){
        rem = num % 10;
        sum = sum +(rem*rem*rem);
        num = num / 10; 
    }

    if(tmp == sum){
        printf("%d is a Armstrong number.",tmp);
    }
    else
    {
        printf("%d is a not a Alrmstrong number.",tmp);
    }
    return 0;
}
