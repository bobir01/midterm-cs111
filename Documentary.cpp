//
// Created by bobir on 01/04/2022.
//

#include "Documentary.h"
#include <windows.h>


Documentary::Documentary() :Finance(){};

 void  Documentary::deal_invoice() {

    Auth check;
    cout << "                                                     Welcome Finance managing platform"<<"\n";
    cout << " Auth system checking... "<<"\n";
     while(1){
        if(check.authecate()){
            cout << "Authentication passed"<<"\n";
            break;
        }
    }
    Sleep(100);
     InvoiceManager *managerPtr;
    cout << "Enter 1 in order to send invoice to your customers or 2 for see taxes (after invoice):  [for EXIT  q ]\n";
    str temp;
    InvoiceManager manager;
    managerPtr=&manager;



     getline(cin, temp);
     if(temp=="1"){
         InvoiceManager manager;
         managerPtr=&manager;

         managerPtr->create_invoice();
         managerPtr->send_to_company();
     }else{
         system("exit");
     }

}

void Documentary::deal_taxes() {
    str temp;
    cout<<"Enter 1 to see your all taxes or q for exiting "<<"\n";
    getline(cin, temp);
    if(temp=="1") {
        cout << calc_taxes() << "\n";
    }else{
        system("exit");
    }
}