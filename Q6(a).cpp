#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int rollNo;
    string degree;
    string hostel;
    float currentCGPA;

public:
    void addDetails() {
        cout << "Enter name: ";
        getline(cin, name);
        cout << "Enter roll number: ";
        cin >> rollNo;
        cin.ignore();
        cout << "Enter degree: ";
        getline(cin, degree);
        cout << "Enter hostel: ";
        getline(cin, hostel);
        cout << "Enter current CGPA: ";
        cin >> currentCGPA;
    }

 
    void updateDetails() {
        cout << "Enter new name (press enter to skip): ";
        getline(cin, name);
        cout << "Enter new roll number (press 0 to skip): ";
        cin >> rollNo;
        cin.ignore();     
        cout << "Enter new degree (press enter to skip): ";
        getline(cin, degree);
        cout << "Enter new hostel (press enter to skip): ";
        getline(cin, hostel);
    }

    void updateCGPA() {
        cout << "Enter new CGPA: ";
        cin >> currentCGPA;
    }

    void updateResidenceInfo() {
        cout << "Enter new hostel: ";
        getline(cin, hostel);
    }
    void displayDetails() {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNo << endl;
        cout << "Degree: " << degree << endl;
        cout << "Hostel: " << hostel << endl;
        cout << "Current CGPA: " << currentCGPA << endl;
    }
};

int main() {
    cout<<"AKSHAT KUMAR (102206107)";

    Student student;
    student.addDetails();

    cout << "Student Details:" << endl;
    student.displayDetails();

    student.updateDetails();
    student.displayDetails();


    student.updateCGPA();
    student.displayDetails();

 
    student.updateResidenceInfo();
    student.displayDetails();

    return 0;
}
