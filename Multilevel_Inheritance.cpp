#include<iostream>
using namespace std;

class University {
public:
    string uni = "Symbiosis";
    void showUni() {
        cout << "University: " << uni << endl;
    }
};

class Department : public University {
public:
    string dept = "Electronics & Communication";
    void showDept() {
        cout << "Department: " << dept << endl;
    }
};

class Lab : public Department {
public:
    string lab = "VLSI Lab";
    void showLab() {
        cout << "Lab: " << lab << endl;
    }
};

int main() {
    Lab VLSI;
    VLSI.showUni();
    VLSI.showDept();
    VLSI.showLab();
    return 0;
}

// OUTPUT
// University: Symbiosis
// Department: Electronics & Communication
// Lab: VLSI Lab
