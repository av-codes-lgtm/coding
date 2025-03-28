#include<iostream>
using namespace std;

void minmaxSwap(int arr[], int sz){
    int max=INT_MIN, min=INT_MAX, minIN, maxIN;
    for(int i=0; i<sz; i++){
        if(arr[i]<min){
            min=arr[i];
            minIN=i;
        } else if(max<arr[i]){
            max=arr[i];
            maxIN=i;
        }
    }
    swap(arr[minIN],arr[maxIN]);
}

int main(){
    int arr1[7]={1,2,3,4,5,6,7};
    minmaxSwap(arr1,7);
    for(int i=0; i<7; i++){
        cout << arr1[i] << " ";
    }
    return 0;
}