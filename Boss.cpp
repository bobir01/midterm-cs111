
#include "Boss.h"
#include <random>
#include <cstdlib>
#include <time.h>
#include <sstream>

using namespace std;


Boss::Boss(str fname="", str lname="", str company="", str released_day="", unsigned int number_employers=0, str id = "")
{
    this->fname = fname;
    this->lname =lname;
    this-> company = company ;
    this-> found_day = released_day;
    this -> num_employer = number_employers;
}

Boss::~Boss(){}


Boss::Boss(){}


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
    company[0]= toupper(company[0]);
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

str  Boss::get_data_of_boss(){
    string temp;
    cout<<"Enter your first name : \n";
    getline(cin, temp);
    set_fname(temp);
    cout<<"Enter your last name : \n";
    getline(cin, temp);
    set_lname(temp);
    cout<<"Enter your company's name : \n";
    getline(cin, temp);
    set_company(temp);
    cout<<"Enter your date company was found : \n";
    getline(cin, temp);
    set_released_day(temp);
    cout<<"Enter your number of employers : \n";
    unsigned int x; cin>> x;
    
    set_num_employer(x);

    ostringstream ss;
    ss<<"Full name: " << get_lname()<< " "<< get_fname()<<
    "\nCompany: "<< get_company()<<"\nFound at : " <<  get_released_day()<< 
    "\nNumber of emplyers: "<< get_num_employers()<< " Your Unique id: " << get_id()<<"\n";

    return ss.str();





}
