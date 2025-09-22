#include <iostream>

using namespace std;

void celsiusToFarenheit(float celsius) {

    cout << "Result: " << ((celsius * 9 / 5) + 32) << endl;
    
}

void farenheitToCelsius(float farenheit) {
    cout << "Result: " << ((farenheit - 32) * 5 / 9) << endl;
}