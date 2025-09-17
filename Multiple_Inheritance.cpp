#include<iostream>
using namespace std;

class University {
public:
    string uni = "Symbiosis";
    void showUni() {
        cout << "University: " << uni << endl;
    }
};

class Facility {
public:
    string lab = "VLSI Lab";
    void showFacility() {
        cout << "Facility: " << lab << endl;
    }
};

class Department : public University, public Facility {
public:
    string dept = "Electronics & Communication";
    void showDept() {
        cout << "Department: " << dept << endl;
    }
};

int main() {
    Department ec;
    ec.showUni();
    ec.showDept();
    ec.showFacility();
    return 0;
}

// OUTPUT
// University: Symbiosis
// Department: Electronics & Communication
// Facility: VLSI Lab
