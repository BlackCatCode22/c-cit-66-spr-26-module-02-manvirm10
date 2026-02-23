#include <iostream>
using namespace std;

int getanIntFromUser () {
    cout << "enter a number:" << endl;
    int Value;
    cin >> Value;
    return Value ;
}

int compareTwoInts (int a, int b) {
   return a < b ? a : b;
}

int sumTwoInts (int a, int b) {
    return a + b;
}

int main() {

int firstNumber = getanIntFromUser();
int secondNumber = getanIntFromUser();

    int smallestNumber = compareTwoInts(firstNumber, secondNumber);
    cout << "The Smallest is: " << smallestNumber << endl;

    int largestNumber = firstNumber > secondNumber ? firstNumber : secondNumber;
    cout << "The Largest is: " << largestNumber << endl;

    int sum = sumTwoInts(firstNumber, secondNumber);
    cout << "Both added up equal: " << sum << endl;





return 0;
    }

