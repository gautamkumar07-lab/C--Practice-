#include <iostream>
using namespace std;

class Student {
    int roll;
    string name;

public:
    void input() {
        cout << "Enter Roll No and Name: ";
        cin >> roll >> name;
    }

    void display() {
        cout << "Roll No: " << "\t"<<name<< endl;
    }
};

int main() {
    Student s[3];   

    for (int i = 0; i < 3; i++) {
        
        s[i].input();
    }
    for (int i = 0; i < 3; i++) {
        s[i].display();
    }

    return 0;
}
