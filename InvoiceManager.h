//
// Created by bobir on 01/04/2022.
//

#ifndef MIDTERM_CS111_INVOICEMANAGER_H
#define MIDTERM_CS111_INVOICEMANAGER_H
#include "Boss.h"

class InvoiceManager : public Boss{
public: 

    InvoiceManager();

    ~InvoiceManager();


    str create_id();
private:
    str invoice_id;
    str invoice_date;



};


#endif //MIDTERM_CS111_INVOICEMANAGER_H
