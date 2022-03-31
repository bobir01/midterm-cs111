
#include "Auth.h"

#include <stdio.h>
#include <time.h>
#include <windows.h>
#include <string>
#include <bits/stdc++.h>


using namespace std;

string allDrives;

Auth::Auth() {
    cout <<" Checking the Authentication 2.0 started!!!"<<"\n";
}


Auth::~Auth() {}


char Auth::getRemovableDisk() {
    char drive = '0';

    char szLogicalDrives[MAX_PATH];
    DWORD dwResult = GetLogicalDriveStrings(MAX_PATH, szLogicalDrives);

    string currentDrives = "";

    for (int i = 0; i < dwResult; i++) {
        if (szLogicalDrives[i] > 64 && szLogicalDrives[i] < 90) {
            currentDrives.append(1, szLogicalDrives[i]);
            if (allDrives.find(szLogicalDrives[i]) > 100) {
                drive = szLogicalDrives[i];
            }

        }
    }

    allDrives = currentDrives;

    return drive;
}

bool Auth::authecate() {

        char  driveLetter = getRemovableDisk();
        //cout << driveLetter<<"\n";
        //cout << allDrives<<"\n";
        string str{driveLetter};
    if (str=="G" || str=="0") return false ;
    else return true;

}
