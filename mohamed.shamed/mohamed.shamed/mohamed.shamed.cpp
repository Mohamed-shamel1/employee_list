#include <iostream>
#include <vector>
#include <string>
#include "employee.h"
#include "endineer.h"
#include "Sales.h"
using namespace std;
void employee::display() {
    cout << "name : " << name_ << endl;
    cout << "id : " << id << endl;
    cout << "salary : " << salary << endl;
}

int main() {
    vector<employee*>employee;
    int choice;
    do {
        cout << "Enter 1 for Engineer, 2 for Sales, 0 to quit: ";
        cin >> choice;
        if (choice == 1) {
            string name, specialty;
            int id, experience, overtime;
            float salary, overtime_rate;
            cin.ignore();
            cout << "Enter your name: ";
            getline(cin, name);
            cout << "Enter your ID: ";
            cin >> id;
            cout << "Enter your salary: ";
            cin >> salary;
            cin.ignore();
            cout << "Enter your specialty: ";
            getline(cin, specialty);
            cout << "Enter your years of experience: ";
            cin >> experience;
            cout << "Enter overtime hours: ";
            cin >> overtime;
            cout << "Enter overtime rate: ";
            cin >> overtime_rate;

            employee.push_back(new endineer(name, id, salary, specialty, experience, overtime, overtime_rate));

        }
        else if (choice == 2) {
            string name;
            int id;
            float salary, gross_sales, commission_rate;
            cin.ignore();
            cout << "Enter your name: ";
            getline(cin, name);
            cout << "Enter your ID: ";
            cin >> id;
            cout << "Enter your salary: ";
            cin >> salary;
            cout << "Enter gross sales: ";
            cin >> gross_sales;
            cout << "Enter commission rate: ";
            cin >> commission_rate;

            employee.push_back(new Sales(name, id, salary, gross_sales, commission_rate));
        }

    } while (choice != 0);
    for (auto emp : employee) {
        emp->display();
        cout << "Total salary: " << emp->get_total_salary() << endl;
        cout << "-------------------" << endl;
    }
	for(auto emp : employee ) //for each : ان طول ما فى عناصر اشتغل
    {
	    delete emp;
    }



    return 0;
}
