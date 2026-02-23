#include <algorithm>
#include <iostream>
using namespace std;



int main () {
    cout << "Please input a String: " << endl;
    string userInput;
    if (getline(cin, userInput)) {
    ranges::reverse (userInput);

        cout << userInput << endl;

    }


}