#include <iostream>
using namespace std;


class  Print {
public:
    void show(int x) {
        cout << "Integer: " << x << endl;
    }

    void show(double y) {
        cout << "Double: " << y << endl;
    }

    void show(string s) {
        cout << "String: " << s << endl;
    }
};

int main() {
    Print p;

    p.show(10);          // calls show(int)
    p.show(3.14);        // calls show(double)
    p.show("Gautam");    // calls show(string)

    return 0;
}
