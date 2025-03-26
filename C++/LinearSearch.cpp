#include<iostream>
using namespace std;

int main(){
    int arr[7]={1,2,3,4,5,6,7};
    int a,check=0,i=0;
    cout << "Enter your number : ";
    cin >> a;
    for(i; i < 7; i++){
        if(arr[i]==a){
            check=1;
            break;
        } else {
            check=0;
        }
    }

    if(check==1){
        cout << "The index for number in the array is " << i << "\n";
    } else {
        cout << "No such number exists in the array." << "\n";
    }    
    return 0;
}