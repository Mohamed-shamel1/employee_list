#pragma once
#include <string>

class employee
{
    protected:
	std::string name_;
        int id;
        float salary;
    public:
        virtual ~employee() = default;
        employee(std::string n, int i, float s) : name_(n), id(i), salary(s) {}
        virtual float get_total_salary() = 0;
        virtual void display();
    };


