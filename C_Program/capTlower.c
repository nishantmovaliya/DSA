#include<stdio.h>
#include<string.h>

void toLowerCase(char str[], int len) 
{
    for(int i=0;i<len;i++){
        if(str[i] > 64 && str[i] < 91){
            str[i] += 32;
        }
    }
    
    printf("%s",str);
}

int main(){
    char str[] = "NISHANT";
    int len = strlen(str);
    toLowerCase(str, len);
}