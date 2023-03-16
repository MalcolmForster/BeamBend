// The main source file for the BeamBend program. This is a simple program to run in the cmd that allows for quick and easy beam analysis (when the user knows the commands!)

#include <iostream>
#include <string>
#include <vector>
#include <fstream>

#include "bbb.h"

using namespace std;

string getStringInput() {

    string inputString;

    cin >> inputString;

    return inputString;
}

vector<int> getBeamDimensions(){ // This is not implemented yet
    cout << "Good job, you overflowed this!";
    return vector<int>{10,20,30};
}

double getDoubleInput()
{
    string inputString;
    double number;
    bool inputCorrect = false;    

    while (inputCorrect == false)
    {
        cin >> inputString;
        try
        {
            number = stod(inputString);
            inputCorrect = true;
        }
        catch(...)
        {
            cout << "Please enter a valid number" << endl;
        }
    }

    return number;
}

bool getBoolInput() {
    string userInput;    
    while (true) {   
        cout << "Y or N" << endl;     
        userInput = getStringInput();
        if(userInput == "Y" || userInput == "y"){
            return true;
        } else if (userInput == "F" || userInput == "f"){
            //return false;
            cout << "Not yet implemented...sorry" << endl;
            return true;
        }
    }
}

int newBeam()
{
    //user decides to create a new beam.
    string beamName;
    bool uniform;
    double bLen;
    cout << endl << "Create a new beam" << endl;

    cout << "Name you beam:" << endl;

    beamName = getStringInput();
    cout << endl;

    cout << "Please enter a beam length in meters:" << endl;
    bLen = getDoubleInput();
    cout << endl;

    cout << "Is the beam uniform, i.e. same cross section along the beam's length?" << endl;
    getBoolInput();

    Beam::Beam(beamName,bLen,uniform) {
            beamName = name;
            beamLength = length;
            beamUniform = uniform;
    }

    cout << "Beam created with parameters: Name = " << beamName << "; Length = " << to_string(bLen) << " m; Uniform = " << uniform; // find a way to convert uniform bool to a string...

    return 0;
}

int loadBeam() {
    //when the user decides to load a beam.
    string filePath;
    //find out how to open the file explorer menu OR 
    cout << "Type path to file OR \"--explore\" to find file via explorer, --exit to return" << endl;
    cin >> filePath;
    if(filePath == "--explore") {
        //opens up a menu to find the file path the user wants.

        return 0;
    } else if(filePath == "--exit") {
        return 0; // is this ok to do or recursively calling main a bad thing?
    } else {
        try {
            //try and find and open the file the user typed in
            if(filePath.substr(filePath.size()-4,filePath.size()) != ".bbb") {
                throw(0);
            }
            fstream fs;
            fs.open(filePath);
            if(fs.fail()){
                throw(1);
            }
        } catch(int i) {            
            cout << "you screwed that up didn't you, please try again";
            return 0;
        }
    }

    return 0;
}

int main()
{
    string userOption;
    // prints the string enclosed in double quotes
    cout << "Welcome to BeamBend, enter and option below or type --help for help" << endl;
    cout << "" << endl;
    cout << "Your input: ";
    cin >> userOption;
    cout << "You have selected option " << userOption << endl;
    return 0;
}