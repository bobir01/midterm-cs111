//
// Created by bobir on 01/04/2022.
//

#include "Finance.h"
#include <algorithm>

Finance::Finance() {
}



str Finance::create_id() {
    srand(time(0));
    int a = rand();
    str UUID= to_string(a);
    id =  "FFF"+ UUID;
    return  id;
}

void  Finance::set_id() {

    id = create_id();

}

str  Finance::calc_total() {
    int sum=0;
    for(auto i: total){
        sum+=i;
    }
    return to_string(sum);
}

str  Finance::calc_taxes() {
    double total = stod(calc_total());
    double tax = total * 0.15;
    return ("Governmental tax: " + to_string(tax));
}