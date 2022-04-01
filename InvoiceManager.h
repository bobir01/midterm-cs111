//
// Created by bobir on 01/04/2022.
//

#ifndef MIDTERM_CS111_INVOICEMANAGER_H
#define MIDTERM_CS111_INVOICEMANAGER_H
#include "Boss.h"
#include <vector>
class InvoiceManager : public Boss{
public:
    vector<str> products;
    vector<int> quantity;
    vector <long int > price;
    vector <int > total;
    InvoiceManager();

    void create_invoice();  //done

    void set_sold_item_name_user();  // done
    str get_sold_item_name();

    void set_customer_company();

    str get_customer_company();

    void send_to_company();
    void display();

    void display_product(str product, str price_cost, str total);

    str get_full_invoice(str to_company);

    void set_invoice_date();

    str get_invoice_date();


    str create_id() override;
    void set_invoice_id();
    str get_invoice_id();


private:
    str invoice_id;
    str invoice_date;
    str customer;


};


#endif //MIDTERM_CS111_INVOICEMANAGER_H
