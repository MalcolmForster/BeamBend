// The main source file for the BeamBend program. This is a simple program to run in the cmd that allows for quick and easy beam analysis (when the user knows the commands!)

#include <iostream>
#include <string>

using namespace std;

int main() {
    string userOption;
    //prints the string enclosed in double quotes
    cout << "Welcome to BeamBend, enter and option below or type --help for help" << endl;
    cout << "" << endl;
    cout << << "Your input: ";
    cin >> userOption;
    cout << "You have selected option " << userOption  << endl;
    return 0;
}