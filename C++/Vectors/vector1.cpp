//STL containers:-
//(Standard Template Library Containers)
//      1.Vectors
//      2.Queues
//      3.Stack
//      4.Set

// Exactly like arrays....
// But their memory is dyanamic(can be changed after formation)

#include <iostream>
#include <vector> // #include <bits/c++.h> can also be used
using namespace std;

int main(){
    vector<int> vec(5,0); // by default the size is zero.
    cout << vec[0] << endl;
    cout << vec[1] << endl;
    cout << vec[2] << endl;
    cout << vec[3] << endl;
    cout << vec[4] << endl;

    //for each loop:-
    
    for (int i : vec){
        cout << i << endl;
    }

    vector<char> vec2={'a','b','c','d','e'};
    for (char val : vec2){
        cout << val << endl;
    }

    // Vector Functions:-
    // 1.size - returns size of the vector : 
    cout << "size = " << vec.size() << endl;
    
    // 2.push_back - adds an element at the end of the vector and increases its size by 1 :
    vec.push_back(25);
    cout << "size after push_back = " << vec.size() << endl;
    for (int i : vec){
        cout << i << endl;
    }
    
    // 3.pop_back - deletes the last element of the vector and decreases the size by 1 :
    vec.pop_back();
    cout << "size after push_back = " << vec.size() << endl;
    for (int i : vec){
        cout << i << endl;
    }

    // 4.front - prints the first value of the vector :
    cout << vec2.front() << endl;

    // 5.back -  prints last value of the vector

    // 6.at - another syntax for accesing a value in the vector
    cout << vec2.at(0) << endl;

    return 0;
}