#pragma once
#include <iostream>
#include "employee.h"

class Sales: public employee
{
    
        float gross_sales;
        float commission_rate;
    public:
        Sales(std::string n, int i, float s, float gs, float cr) : employee(n, i, s), gross_sales(gs), commission_rate(cr) {}
        float get_total_salary() override {
            return salary + (gross_sales * commission_rate);
        }
        void display() override {
            employee::display();
            std::cout << "gross sales : " << gross_sales << std::endl;
            std::cout << "commission rate : " << commission_rate << std::endl;
        }
    };


