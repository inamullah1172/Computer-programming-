// Name: Syed inamullah shah
// Department: Electrical Engineering (Power)
// Registration No: BF25NWELE0758
// Section: A
//2.
// Function with Return Value
//▪ Declare a function called ”getSquare” that takes an integer parameter: 
//”number”.
//▪ Inside the function, calculate the square of the number.
//▪ Return the result.
//▪ Call the function from the main program, passing a number, and display
//the square.

#include <iostream>
using namespace std;

// Function Declaration
void getSquare(int number);

// Main Function
int main() {
    getSquare(5);   // sirf function call
    return 0;
}

// Function Definition
void getSquare(int number) {
    int square = number * number;
    cout << "Square = " << square;
}
