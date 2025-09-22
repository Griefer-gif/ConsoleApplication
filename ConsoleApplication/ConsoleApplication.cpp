//"Copyright [year] <Copyright Owner>"

#include <iostream>
#include<cmath>

using namespace std;

float celsiusToFarenheit(float celsius);
float farenheitToCelsius(float farenheit);
float multiply(float x, float y);
float divide(float x, float y);
float square(float x);
float cube(float x);

int main(){
    bool state = true;
    short option = 0;
    short optionCon = 0;
    float celsiusInput;
    float farenheitInput;
    float x;
    float y;

    while (true) {
        option = 0;

        cout << "Chose an option" << endl
             << "0. End" << endl
             << "1. Conversion" << endl
             << "2. Math" << endl;
        cin >> option;

        if (cin.fail()) {
            cout << endl << "Favor inserir numero valido" << endl << endl;
            cin.clear();
            cin.ignore(std::numeric_limits<streamsize>::max(), '\n');
            continue;
        }
        else{
            if (option > 2 || option < 0){
                cout << endl << "Opção invalida" << endl << endl;
                continue;
            }else {
                if (option == 0){
                    break;
                }else if(option == 1){

                    while (true) {
                        optionCon = 0;
                        cout << "Chose an option" << endl
                            << "0. Back" << endl
                            << "1. Celsius to ferenheit" << endl
                            << "2. Farenjheito to celsius" << endl;
                        cin >> optionCon;

                        if (optionCon > 2 || optionCon < 0) {
                            cout << endl << "Opção invalida" << endl << endl;
                            continue;
                        }
                        else {
                            if (optionCon == 0)
                            {
                                break;
                            }
                            else if (optionCon == 1)
                            {
                                cout << "type the value in celsius" << endl;
                                cin >> celsiusInput;
                                cout << endl << "Result: " << celsiusToFarenheit(celsiusInput);
                            }
                            else if (optionCon == 2)
                            {
                                cout << "type the value in farentehit" << endl;
                                cin >> farenheitInput;
                                cout << endl << "Result: " << farenheitToCelsius(farenheitInput);
                            }
                        }
                    }
                }
                else if (option == 2)
                {
                    while (true) {
                        optionCon = 0;
                        cout << "Chose an option" << endl
                            << "0. Back" << endl
                            << "1. multiply" << endl
                            << "2. divide" << endl
                            << "3. square" << endl
                            << "4. cubed" << endl;
                        cin >> optionCon;

                        if (optionCon > 4 || optionCon < 0) {
                            cout << endl << "Opção invalida" << endl << endl;
                            continue;
                        }
                        else {
                            if (optionCon == 0)
                            {
                                break;
                            }
                            else if (optionCon == 1)
                            {
                                cout << "type the value of the first number:" << endl;
                                cin >> x;
                                cout << "type the value of the second number:" << endl;
                                cin >> y;
                                cout << "Result: " << multiply(x, y) << endl;
                            }
                            else if (optionCon == 2)
                            {
                                cout << "type the value of the first number:" << endl;
                                cin >> x;
                                cout << "type the value of the second number:" << endl;
                                cin >> y;
                                cout << "Result: " << divide(x, y) << endl;
                            }
                            else if (optionCon == 3)
                            {
                                cout << "type the value:" << endl;
                                cin >> x;
                                cout << "Result: " << square(x) << endl;
                            }
                            else if (optionCon == 4)
                            {
                                cout << "type the value:" << endl;
                                cin >> x;
                                cout << "Result: " << cube(x) << endl;
                            }
                        }
                    }
                }
            }
        }
        
    }
    return 0;
}
