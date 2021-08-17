#include<iostream>

using namespace std;

int main(){
/*
    int i=0;

      //0//1   //0   1//  1//0
    i = i++ - --i + ++i - i--;// 0 - 0 + 1 - 1 = 0
    
    cout<<i<<endl; */

    int i=1, j=2, k=3;
            
        //1//0   2//1     3//2
    int m = i-- - j--  - k--; //1 - 2 - 3 = -4
    cout<<i<<" "<<j<<" "<<k<<" "<<m<<endl;
    return 0;
}