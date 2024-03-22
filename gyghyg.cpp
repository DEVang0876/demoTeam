#include <iostream>
using namespace std;

class Event {
private:
    int rollNo;
    string name;
    string gender;
    static int E_male;
    static int E_female;

public:
    static int getMaleCount() { 
        return E_male; 
        }
    static int getFemaleCount() { 
        return E_female; 
        }

    void getData() {
        cout << "Enter Rollno: ";
        cin >> rollNo;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Gender: ";
        cin >> gender;

        if (gender == "Male") {
            E_male++;
        } else if (gender == "Female") {
            E_female++;
        }
    }

    void putData() {
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Gender: " << gender << endl;
    }
};

int Event::E_male = 0;
int Event::E_female = 0;

int main() {
    Event students[5];

    for (int i = 0; i < 5; i++) {
        cout << "Enter details for student " << i + 1 << ":" << endl;
        students[i].getData();
    }

    cout << "\nNumber of Students" << endl;
    cout << "Female: " << Event::getFemaleCount() << endl;
    cout << "Male: " << Event::getMaleCount() << endl;
    // obj.getdata

    return 0;
}
