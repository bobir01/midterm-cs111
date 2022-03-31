#include <bits/stdc++.h>
#include "Auth.h"
#include <stdio.h>
#include <time.h>
#include <windows.h>
using namespace std;

int main(){
    Auth checker; // usb checker
    while(1){
        if(checker.authecate()){
            cout << "Authentication passed"<<"\n";
            break;
        }
    }

    return 0;
}