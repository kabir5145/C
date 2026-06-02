// Working with numbers.

#include <iostream>
#include <cmath>

using namespace std;

int main(){
    // Math Functions
    int a = 5;
    int b = 1;
    cout << "Max: " << max(a, b) << endl;
    cout << "Min: " << min(a, b) << endl;

    int c = -5;
    cout << "Square Root: " << sqrt(144) << endl;
    cout << "Absolute Value: " << abs(c) << endl;
    cout << "Power: " << pow(2, 3) << endl;
    cout << "Round: " << round(2.6) << endl;
    cout << "Ceil: " << ceil(2.1) << endl;
    cout << "Floor: " << floor(2.9) << endl;
    return 0;
}