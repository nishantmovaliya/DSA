#include<iostream>
#include<climits>

using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];

    int maxNo = INT_MIN;
    int minNo = INT_MIN;

    for(int i=0;i<n;i++){
        if(arr[i]>minNo)
            maxNo = arr[i];
    }

    for(int i=0;i<n;i++){
        if(arr[i]<minNo)
            minNo = arr[i];
    }


    cout<<maxNo<<" "
    return 0;
}