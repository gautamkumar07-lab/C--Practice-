#include <iostream>
using namespace std;

class Student {
private:
    int roll;
    string name;
public:
    void getData(int r, string n) {
        roll = r;
        name = n;
    }
    void display() {
        cout << "Roll = " << roll << endl;
        cout << "Name = " << name << endl;
    }
};

int main() {
    Student obj;        // object
    Student *ptr;       // pointer to object

    ptr = &obj;         // ptr stores address of obj

    obj.getData(101, "Alice");

    cout << "\nUsing object (.) operator :\n";
    obj.display();

    cout << "\nUsing pointer (->) operator :\n";
    ptr->display();

    return 0;
}
