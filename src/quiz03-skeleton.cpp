#include <iostream>
#include <string>
using namespace std;

class Employee{
    protected:
        string name;
        double salary;
        static int employeeCount;
    
    public:
        Employee(string n, double s){
            name = n;
            salary = s;
            employeeCount++;
        }
        virtual void displayInfo(){
        }
        static void showTotalEmployees(){
            cout << Employee::employeeCount; 
        }

        virtual ~Employee(){}
};

class Staff : public Employee{
    private:
        string department;
    public:
        void displayInfo() override {
            cout << "Name: " << name << "(" << department << ")" << "," << "Salary: " << salary;
        }
        ~Staff() override{
            delete this;
        }
};

class Faculty : public Employee{
    private:
        string department;
    public:
        void displayInfo() override {
            cout << "Name: " << name << "(" << department << ")" << "," << "Salary: " << salary;
        }
        ~Faculty() override{
            delete this;
        }
};


int main() {
    int n;
    string dep, name;
    double salary;
    cout << "Enter number of employees: ";
    cin >> n;
    Employee *array[n];
    Staff *obj;
    for (int i = 0; i < n; i++){
        Employee obj(name, salary);
        cin >> dep >> name >> salary;
    }
    for (int j = 0; j < n; j++){
        // cout >> dep >> name >> salary; //testing
        // Employee[j] -> displayInfo();
    }
    Employee::showTotalEmployees();

    return 0;
}