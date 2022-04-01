
#ifndef MIDTERM_CS111_FINANCE_H
#define MIDTERM_CS111_FINANCE_H
#include "InvoiceManager.h"

class Finance : public InvoiceManager{
public :
    Finance();

    str create_id() override;

    void set_id();

    str calc_total();
    str calc_taxes();

private:
    str invoice_id;
    str id;


};


#endif //MIDTERM_CS111_FINANCE_H
