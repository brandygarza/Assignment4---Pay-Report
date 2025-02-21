#include <iostream>
#include <conio.h>

using namespace std;

struct Employee {
    int ID;
    string FirstName;
    string LastName;
    float HoursWorked;
    float HourlyRate;
};

int main() {
   
    int numberOfEmployees = 1;
    cout << "Enter the Number of Employees:";
    cin >> numberOfEmployees;

    Employee employeesDetails[100];// i couldn't figure out how to put something that wasn't limiting the amount of employees that could be put into this system

    for (int i = 0; i < numberOfEmployees; i++)
    {
        cout << "\n";
        cout << "Enter the ID for Employee: ";
        cin >> employeesDetails[i].ID;
        
        cout << "Enter the First Name for Employee: ";
        cin >> employeesDetails[i].FirstName;
        
        cout << "Enter the Last Name for Employee: ";
        cin >> employeesDetails[i].LastName;
        
        cout << "Enter the Hours Worked for Employee: ";
        cin >> employeesDetails[i].HoursWorked;
        
        cout << "Enter the Hourly Rate for Employee: ";
        cin >> employeesDetails[i].HourlyRate;
        cout << "\n";
    }

    cout << " Pay Report \n ----------";

    for (int i = 0; i < numberOfEmployees; i++) {
        float weeklyPay = employeesDetails[i].HoursWorked * employeesDetails[i].HourlyRate;
        cout << "\n" << employeesDetails[i].ID << ". " << employeesDetails[i].FirstName << employeesDetails[i].LastName << ":$ " << weeklyPay;
    }

    (void)_getch();
    return 0;
}