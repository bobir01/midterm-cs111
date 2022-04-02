//
// Created by bobir on 01/04/2022.
//

#include "Documentary.h"
#include <windows.h>


Documentary::Documentary() {};

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
//    Sleep(100);
//     InvoiceManager *managerPtr;
    cout << "Enter 1 in order to send invoice to your customers or 2 for see taxes (after invoice):  [for EXIT  q ]\n";
    str temp;

//    managerPtr=&manager;


    cin>>temp;
     if(temp=="1"){
         Documentary::create_invoice();
         Documentary::send_to_company();
         cout << "Summa of " <<calc_total()<< " has been transferred to "<< get_customer_company()<< " account!!!"<<"\n";
        deal_taxes();


//    manager.create_invoice();
//    manager.send_to_company();
//         managerPtr->create_invoice();
//         managerPtr->send_to_company();
     }/*else{
         system("exit");
     }*/

}

void Documentary::deal_taxes() {
    str temp;
    cout<<"Enter 1 to see your all taxes or q for exiting "<<"\n";
   cin>>temp;
    if(temp=="1") {
        cout << calc_taxes() << "\n";
    }else{
        system("exit");
    }
}