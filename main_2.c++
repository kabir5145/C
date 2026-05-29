// Variables in C++
#include <iostream>

int factorial(int n) {
    if (n == 0) {
        return 1; // Base case: factorial of 0 is 1
    } else {
        return n * factorial(n - 1); // Recursive case
    }
}
int main() {
    // Declare an integer variable
    int myNumber = 10;

    // Declare a floating-point variable
    float myFloat = 3.14;

    // Declare a character variable
    char myChar = 'A';

    // Declare a boolean variable
    bool isTrue = true;

    // Output the values of the variables
    std::cout << "Integer: " << myNumber << std::endl;
    std::cout << "Float: " << myFloat << std::endl;
    std::cout << "Character: " << myChar << std::endl;
    std::cout << "Boolean: " << isTrue << std::endl;

    // Calculate and output the factorial of a number
    int number = 5;
    std::cout << "Factorial of " << number << " is " << factorial(number) << std::endl;
    return 0;
}