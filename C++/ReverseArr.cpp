#include<iostream>
using namespace std;

void revArr(int arr[], int sz){
    int carry;
    for(int i=0; i<sz/2; i++){
        carry=arr[i];
        arr[i]=arr[sz-i-1];
        arr[sz-i-1]=carry;
    }
}

int main(){
    int arr1[7]={1,2,3,4,5,6,7};
    revArr(arr1,7);
    for(int i=0; i<7; i++){
        cout << arr1[i] << " ";
    }
    return 0;
}