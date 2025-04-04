#include<iostream>
using namespace std;

int main()
{
    int b,a=0,i=0;
    cin >> b;
    for (i; i<4; i++){
        cin >> b;
        i+=2;
        if (b==0){
            continue;
        }
        i+=1;
    }
    cout << i;
}