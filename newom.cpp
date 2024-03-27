#include<iostream>
#include<string>
using namespace std;
//om 
//choksi
//bt
//okay
class Employee {
//    
public:
    int employeeID;
    string employeeName;
    string qualification;
    float experience;
    long long contactNumber;
    float avg;
    static float sum1;    
    static int count1;    
    void inputDetails() {
        cout << "Enter 4-digit Employee ID: ";
        cin >> employeeID;
        while (employeeID < 1000 || employeeID > 9999) {
            cout << "Invalid input. Please enter a 4-digit Employee ID: ";
            cin >> employeeID;
        }

        cout << "Enter Employee Name: ";
        cin.ignore();
        getline(cin, employeeName);

        cout << "Enter Qualification: ";
        getline(cin, qualification);

        cout << "Enter Experience: ";
        cin >> experience;

        cout << "Enter 10-digit Contact Number: ";
        cin >> contactNumber;

        while (contactNumber < 1000000000 || contactNumber > 9999999999) {
            cout << "Invalid input. Please enter a 10-digit Contact Number: ";
            cin >> contactNumber;
        }
        count1++;
        sum1=sum1+experience;
    }

    void displayDetails() const {
        cout << "Employee ID: " << employeeID << endl;
        cout << "Employee Name: " << employeeName << endl;
        cout << "Qualification: " << qualification << endl;
        cout << "Experience: " << experience << endl;
        cout << "Contact Number: " << contactNumber << endl;
    }
};

float Employee::sum1;
int Employee::count1;
int main() {
    int numOfEmployees;

    cout << "Enter the number of employees (0 to 1000): ";
    cin >> numOfEmployees;

    while (numOfEmployees < 0 || numOfEmployees > 1000) {
        cout << "Invalid input. Please enter a number between 0 and 1000: ";
        cin >> numOfEmployees;
    }

    Employee employees[numOfEmployees];
    for (int i = 0; i < numOfEmployees; ++i) {
        cout << "\nEnter details for employee " << i + 1 << ":" << endl;
        employees[i].inputDetails();
    }

    char searchOption;
    do {
        int searchID;
        cout << "\nEnter Employee ID to search: ";
        cin >> searchID;

        bool found = false;
        for (int i = 0; i < numOfEmployees; ++i) {
            if (employees[i].employeeID == searchID) {
                cout << "Employee details found:" << endl;
                employees[i].displayDetails();
                found = true;
                break;
            }
        }

        if (!found) {
            cout << "Employee not found." << endl;
        }

        cout << "Do you want to search again? (y/n): ";
        cin >> searchOption;
    } while (searchOption == 'y' || searchOption == 'Y');
    float average;

    average=Employee::sum1/Employee::count1;

    cout << "Average experience: " << average << endl;
    cout << "Program exited......" << endl;
    cout << "BY 23AIML010 Om Choksi"<<endl;

    return 0;
}