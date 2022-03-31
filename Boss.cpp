
#include "Boss.h"
#include <random>
#include <cstdlib>
#include <time.h>

Boss::Boss(str fname, str lname, str company, str released_day, unsigned int number_employers, str id = "")
{
    this->fname = fname;
    this->lname =lname;
    this-> company = company ;
    this-> found_day = released_day;
    this -> num_employer = number_employers;
}

Boss::~Boss(){}

void Boss::set_fname(str fname){
    fname[0]=toupper(fname[0]); // to avoid from name being small case letter 
    this -> fname = fname ;

}

str Boss:: get_fname() const {
    return fname;
}

void Boss::set_lname(str lname){

    lname [0]=toupper(lname[0]);
    this ->lname=lname;
}

str Boss::get_lname() const{
    return lname;
}

void Boss::set_released_day(str released_day){
    this -> found_day=released_day;
}

str Boss::get_released_day(){
    return found_day;
};

void Boss::set_company(str company_name){
    this -> company = company_name;
}

str Boss:: get_company(){
    return company;
}

void Boss::set_num_employer(unsigned int number_employers){
    this -> num_employer= number_employers;
}

unsigned int Boss::get_num_employers(){
    return num_employer;
}

str Boss::create_id()  {
    srand(time(0));
    str UUID= to_string(rand());
    this -> id = get_company()[0] + UUID;
    return  id;
     
}

str Boss::get_id(){
    return id;
}
