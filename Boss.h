//
// Created by bobir on 01/04/2022.
//

#ifndef MIDTERM_CS111_BOSS_H
#define MIDTERM_CS111_BOSS_H

#include "bits/stdc++.h"
#include <string>
using namespace std;
typedef std::string str;

class Boss
{
public:
    Boss(str fname, str lname, str company, str released_day, unsigned int num_employee, str id);
    ~Boss();
    void set_fname(str fname);
    str get_fname();
    void set_lname(str lname);
    str get_lname();
    void set_released_day(str released_day);
    str get_released_day();
    void set_company(str company_name);
    str get_company();
    void set_num_employer(unsigned int num_employers);
    unsigned int get_num_employers();
    str create_id();
    str get_id();

private:
    str lname;
    str fname;
    str company;
    str found_day;
    str id;
    unsigned int num_employer;
};

#endif // MIDTERM_CS111_BOSS_H
