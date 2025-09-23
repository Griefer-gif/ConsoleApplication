#include <iostream>

using namespace std;

float celsiusToFarenheit(float celsius) {

    cout << "Result: " << ((celsius * 9 / 5) + 32) << endl;
    return ((celsius * 9 / 5) + 32);
    
}

float farenheitToCelsius(float farenheit) {
    return ((farenheit - 32) * 5 / 9);
}