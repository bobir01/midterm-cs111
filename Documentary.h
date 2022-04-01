//
// Created by bobir on 01/04/2022.
//

#ifndef MIDTERM_CS111_DOCUMENTARY_H
#define MIDTERM_CS111_DOCUMENTARY_H
#include "Finance.h"
#include "Boss.h"
#include "InvoiceManager.h"
#include "Auth.h"

class Documentary : public Finance {

public:
    Documentary();
    void deal_invoice();
    void deal_taxes();


};


#endif //MIDTERM_CS111_DOCUMENTARY_H
