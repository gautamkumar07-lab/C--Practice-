#include <iostream>
using namespace std;

class Student 
 {  
public:
    static int count;  // static data member
 
    Student() {  // constructor
        count++;  // constructor
    }

    void display() {  //function call
        cout << "Total students created: " << count << endl; //function call
    }
};


int Student::count = 0;   // static variable class ka baha r initial vlue 0 ho

int main() {
    Student s1;
    s1.display();

    Student s2;
    s2.display();

    Student s3;
    s3.display();

    return 0;
}
