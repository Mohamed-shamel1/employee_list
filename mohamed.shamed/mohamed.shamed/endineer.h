#pragma once
#include <iostream>
#include <ostream>

#include "employee.h"

class endineer : public employee {
	std::string specialty;
    int experience;
    int overtime;
    float overtime_rate;
public:
    endineer(std::string n, int i, float s, std::string sp, int e, int ot, float os)
        : employee(n, i, s), specialty(sp), experience(e), overtime(ot), overtime_rate(os) {}
    float get_total_salary() override {
        return salary + (overtime * overtime_rate);
    }
    void display() override {
        employee::display();
        std::cout << "specialty : " << specialty << std::endl;
        std::cout << "experience : " << experience << std::endl;
        std::cout << "overtime : " << overtime << std::endl;
        std::cout << "overtime rate : " << overtime_rate << std::endl;
    }

};

