//============================================================================
// Name        : Lab1-3.cpp
// Author      : Benjamin Symes
// Version     : 1.0
// Copyright   : Copyright © 2019 SNHU COCE
// Description : Lab 1-3 Up to Speed in C++ Southern New Hampshire University
//============================================================================

#include <algorithm>
#include <iostream>

using namespace std;

//============================================================================
// Global definitions visible to all methods and classes
//============================================================================

// FIXME (1): Define a data structure to hold bid information together as a single unit of storage.
struct Bid  {
    string Title;
    int Fund;
    string Vehicle;
    int BidAmount;
};

// FIXME (4): Display the bid values passed in data structure
/**
 * Display the bid information
 *
 * @param ?type? data structure containing the bid info
 */
void displayBid(Bid object) {
    cout << "Title: " << object.Title << endl;
    cout << "Fund: " << object.Fund << endl;
    cout << "Vehicle: " << object.Vehicle << endl;
    cout << "Bid Amount: " << object.BidAmount << endl;

    return;
};

// FIXME (3): Store input values in data structure
/**
 * Prompt user for bid information
 *
 * @return data structure containing the bid info
 */
 double strToDouble(string str, char ch) {
    str.erase(remove(str.begin(), str.end(), ch), str.end());
    return atof(str.c_str());
}

void getBid(Bid & object) {
    //?type? ?variable?;

    cout << "Enter title: ";
    cin.ignore();
    getline(cin, object.Title);

    cout << "Enter fund: ";
    cin >> object.Fund;

    cout << "Enter vehicle: ";
    cin.ignore();
    getline(cin, object.Vehicle);

    cout << "Enter amount: ";
    cin.ignore();
    string strAmount;
    getline(cin, strAmount);
    object.BidAmount = strToDouble(strAmount, '$');

}

/**
 * Simple C function to convert a string to a double
 * after stripping out unwanted char
 *
 * credit: http://stackoverflow.com/a/24875936
 *
 * @param ch The character to strip out
 */

/**
 * The one and only main() method
 */
int main() {

    // FIXME (2): Declare instance of data structure to hold bid information
	Bid object;

    // loop to display menu until exit chosen
    int choice = 0;
    while (choice != 9) {
        cout << "Menu:" << endl;
        cout << "  1. Enter Bid" << endl;
        cout << "  2. Display Bid" << endl;
        cout << "  9. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;
        break;

        // FIXME (5): Complete the method calls then test the program
        switch (choice) {
            case 1:
                getBid(object);
                break;
            case 2:
                displayBid(object);
                break;
        }
    }

    cout << endl << "Good bye." << endl;

    return 0;
}
