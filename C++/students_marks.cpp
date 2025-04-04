#include <iostream>
using namespace std;

struct Student {
    char name[50];
    int marks[3];
};

int main() {
    Student mks[3];

    // Input student details
    for (int i = 0; i < 3; i++) {
        cout << "\nEnter name of student: ";
        cin >> mks[i].name;
        
        for (int j = 0; j < 3; j++) {
            cout << "Enter marks for subject " << j + 1 << ": ";
            cin >> mks[i].marks[j];
        }
    }

    // Display student details
    for (int i = 0; i < 3; i++) {
        cout << "Student Name: " << mks[i].name << endl;
        
        for (int j = 0; j < 3; j++) {
            cout << "Subject " << j + 1 << " Marks: " << mks[i].marks[j] << endl;
        }
    }

    return 0;
}
