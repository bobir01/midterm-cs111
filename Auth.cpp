
#include "Auth.h"

#include <stdio.h>
#include <time.h>
#include <windows.h>
#include <string>
#include <bits/stdc++.h>


using namespace std;

string allDrives;

char getRemovableDisk();

int Auth() {
    char driveLetter = getRemovableDisk();
    while (1) {
        driveLetter = getRemovableDisk();
        if (driveLetter != '0') {
            printf("%c \n", driveLetter);
        }

//        Sleep(1000);
    }

    return 0;
}

char getRemovableDisk() {
    char drive = '0';

    char szLogicalDrives[MAX_PATH];
    DWORD dwResult = GetLogicalDriveStrings(MAX_PATH, szLogicalDrives);

    string currentDrives = "";
//    cout << dwResult;
    //cout << dwResult << endl;
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
