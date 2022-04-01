//
// Created by bobir on 01/04/2022.
//

#include "InvoiceManager.h"
#include "Auth.h"
#include <ctype.h>

#include <sstream>
InvoiceManager::InvoiceManager() : Boss(" ", " ", " " ," ",0, " "){

     Boss::create_id();
    cout <<get_data_of_boss();

}

void InvoiceManager::set_invoice_date() {
    invoice_date = to_string(time(0));
}

void InvoiceManager::create_invoice() {

    set_sold_item_name_user();

    set_invoice_date();

    set_customer_company();


    cout << get_full_invoice(get_customer_company());

    cout <<"Your invoice is ready now!!!"<<"\n";

}

void InvoiceManager::display() {
        int n = products.size();

        for(int i=0; i<107; i++){
            cout<<"*";
        }
        //DISPLAYING COMPANY NAME
        string k= get_customer_company();
        int a=k.size();
        a=35-a;
        cout<<"\n*";
        for(int i=0; i<35; i++)cout<<" ";
        cout<<"*";
        int t=ceil(a/2.0);
        for(int i=0; i<t; i++){
            cout<<" ";
        }
        cout<<k;
        for(int i=0; i<a/2; i++){cout<<" ";}
        cout<<"*";
        for(int i=0; i<33; i++){cout<<" ";}
        cout<<"*\n";
        //END OF DISPLAYING COMPANY NAME
        for(int i=0; i<107; i++){
            cout<<"*";
        } cout<<"\n";

        for(int i=0; i<n; i++){
            display_product(products[i], to_string(quantity[i]) + " x " + to_string(price[i]), to_string(total[i]));
        }


    }


void InvoiceManager::display_product(str product, str price_cost, str total) {
//    void display_maxsulot(string maxsulot, string compline, string total)
        int b, c;
        cout<<"*";
        b=product.size();
        c=35-b;
        c=ceil(c/2.0);
        for(int i=0; i<c; i++){
            cout<<" ";
        }
        cout<<product;
        c=35-b;
        for (int i=0; i<c/2; i++){
            cout<<" ";
        }
        cout<<"*";
        b=price_cost.size();
        c=35-b;
        c=ceil(c/2.0);
        for(int i=0; i<c; i++){
            cout<<" ";
        }
        cout<<price_cost;
        c=35-b;
        for(int i=0; i<c/2; i++){
            cout<<" ";
        }
        cout<<"*";
        b=total.size();
        c=33-b;
        c=ceil(c/2.0);
        for(int i=0; i<c; i++){
            cout<<" ";
        }
        cout<<total;
        c=33-b;
        for(int i=0; i<c/2; i++){
            cout<<" ";
        }
        cout<<"*\n";
        for(int i=0; i<107; i++){
            cout<<"*";
        } cout<<"\n";


}

void InvoiceManager::send_to_company() {

    display();

    cout <<"Press Y to send / N cancel";
    str conf;
    getline(cin, conf);
    if(conf=="Y"){
        cout << "Successfully sent"<<"\n";
    }else{
        cout << "Canceled"<<"/n";
    }

}


str InvoiceManager::get_customer_company() {
    return customer;
}

void InvoiceManager::set_customer_company() {
    cout << "Enter your customer company's name: \n";
    str to_company;
    getline(cin, to_company);
    customer=to_company;

}


 void InvoiceManager::set_sold_item_name_user() {
    str temp;
    static int i =0;
    while(true) {
        cout << "Enter your sold product name:  [For exiting /q ]\n";
        getline(cin, temp);
        if(temp=="q"){break;}
        products.push_back(temp);
        cout << "Enter your sold product quantity/amount :  [For exiting /q ]\n";
        getline(cin, temp);
        if(temp=="q"){break;}
        quantity.push_back(stoi(temp));
        cout << "Enter your sold product price :  [For exiting /q ]\n";
        getline(cin, temp);
        if(temp=="q"){break;}
        price.push_back(stoi(temp));
        total.push_back( quantity[i]* price[i]);
        i++;

    }


}

str InvoiceManager::create_id() {}

str InvoiceManager::get_full_invoice(str to_company) {
    ostringstream ss;
    ss<< "From "<< get_company()<<"  to "  << to_company  << "  " << " issued by "<< get_lname() << " in " <<get_invoice_date()<<" with id: "<<get_invoice_id();
    return ss.str();
}

str InvoiceManager::get_invoice_date() {
    return to_string(time(0));
}

str InvoiceManager::get_invoice_id() {
    return invoice_id;
}