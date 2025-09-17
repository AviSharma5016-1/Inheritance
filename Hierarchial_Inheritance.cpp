
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

class Hostel : public University {
public:
    string hostel = "Block A";
    void showHostel() {
        cout << "Hostel: " << hostel << endl;
    }
};

class Library : public University {
public:
    string lib = "Central Library";
    void showLibrary() {
        cout << "Library: " << lib << endl;
    }
};

int main() {
    Department d;
    Hostel h;
    Library l;

    d.showUni();
    d.showDept();

    h.showUni();
    h.showHostel();

    l.showUni();
    l.showLibrary();

    return 0;
}

// OUTPUT
// University: Symbiosis
// Department: Electronics & Communication
// University: Symbiosis
// Hostel: Block A
// University: Symbiosis
// Library: Central Library
