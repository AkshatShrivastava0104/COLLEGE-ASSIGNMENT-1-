#include <iostream>
using namespace std;

namespace first {
    int var = 5;

    void print() {
        cout << "This is the first namespace" << endl;
    }
}

namespace second {
    int var = 10;

    void print() {
        cout << "This is the second namespace" << endl;
    }
}

int main() {
    cout<<"AKSHAT KUMAR (102206107)";
    
    cout << "Value of var from first namespace: " << first::var << endl;
    first::print();

    cout << "Value of var from second namespace: " << second::var << endl;
    second::print();
 
    first::var = 15;
    cout << "New value of var from first namespace: " << first::var << endl;
    cout << "Value of var from first namespace: " << first::var << endl;
    cout << "Value of var from second namespace: " << second::var << endl;

    return 0;
}













