#include <iostream>
using namespace std;

class Student {
    string name;
    int age;

public:
    // Default constructor
    Student() {
        name = "Unknown";
        age = 0;
    }

    // Parameterized constructor (1 argument)
    Student(string n) {
        name = n;
        age = 0;
    }

    // Parameterized constructor (2 arguments)
    Student(string n, int a) {
        name = n;
        age = a;
    }

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Student s1;                     // Default constructor
    Student s2("Gautam");           // 1-argument constructor
    Student s3("Kumar", 938);       // 2-argument constructor
    Student s4("Gautam", 939);      // 2-argument constructor
    Student s5("Murat", 976);       // 2-argument constructor
    Student s6("Sneha");            // 1-argument constructor

    s1.display();
    s2.display();
    s3.display();
    s4.display();
    s5.display();
    s6.display();

    return 0;
}
