// CSC450_CT1_mod1-2.cpp
#include <iostream>
//#include <conio.h>  // This header is not standard and typically used in Windows

using namespace std;

int main() {
    double myMoney = 1000.50;  // this should be printed out

    // Standard Output Statement
    cout << "Please be sure to correct all syntax errors in this program" << endl;
    cout << "I have corrected all errors for this program." << endl;
    cout << "The total amount of money available is = " << myMoney << endl;

    // Wait for Output Screen
    // _getch(); // Removed because conio.h is not available on all systems
    cin.get(); // Using cin.get() instead to pause the console

    // Main Function return Statement
    return 0;
}
