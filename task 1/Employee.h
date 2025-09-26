#include <iostream>
using namespace std;
class Employee {
private:
    int id;
    string name;
    float salary;

public:
    // Default constructor
    Employee(){
	id=0.0;
	 name="Not Assigned";
	  salary=0.0;}
    // Method to display employee details
    void displayDetails() const {
        cout << "Employee ID: " << id << endl;
        cout << "Employee Name: " << name << endl;
        cout << "Employee Salary: " << salary << endl;
    }
};
