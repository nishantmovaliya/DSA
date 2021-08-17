#include<iostream>

using namespace std;

int main(){

    int i=1;
      //1    2//3
   // i= i++ + ++i; //4


    //cout<<i<<endl;
    //----------------//
    int j=2;
    int k;
      //1   2   1//2  2//3   3     4
    k = i + j + i++ + j++ + ++i + ++j;

    cout<<i<<" "<<j<<" "<<k<<endl; //3 4 13

    int m=0;

    m = m++ - --m + m++ - m--;
    cout<<m<<endl;
   
    return 0;
}