#include <iostream>
using namespace std;

class Student {
public:
    int rollNo;
    string name;
    string branch;
    int sem;

    Student() {
        cout << "Constructor called" << endl;
    }

    Student(const Student &obj) : rollNo(obj.rollNo), branch(obj.branch), sem(obj.sem) {
        cout << "Copy constructor called" << endl;
    }
};

int main() {
    Student stu1;
    stu1.rollNo = 123;
    stu1.name = "Anushka";
    stu1.branch = "Computer Science";
    stu1.sem = 3;

    Student stu2 (stu1);  // We copied all attributes of stu1 in stu2 except name
   stu2.name="Sara";

    cout << "Details of first student:" << endl;
    cout << "Roll No: " << stu1.rollNo << endl;
    cout << "Name: " << stu1.name << endl;
    cout << "Branch: " << stu1.branch << endl;
    cout << "Semester: " << stu1.sem << endl;

    cout << "\nDetails of second student (copied object):" << endl;
    cout << "Roll No: " << stu2.rollNo << endl;
    cout << "Name: " << stu2.name << endl;
    cout << "Branch: " << stu2.branch << endl;
    cout << "Semester: " << stu2.sem << endl;

    return 0;
}

