#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int userInput;


    cout << "Enter your  first integer: ";

    if (cin >> userInput) {
        int firstValue = userInput;
        cout << "please Enter your second integer: " << endl;
        if (cin >> userInput) {
            int secondValue = userInput;
            cout << "Please enter your third integer: " <<  endl;
            if (cin >> userInput) {
                int thirdValue = userInput;
                cout << "Determining Largest of 3.." << endl;
                cout << max({firstValue, secondValue, thirdValue}) << endl;
            }
            else {
                cout << "This isn't a integer" << endl;
            }


        }
        else {
            cout << "This isn't a integer" << endl;
        }


    } else {
        cout << "This isn't a integer" << endl;
    }

    return 0;
}