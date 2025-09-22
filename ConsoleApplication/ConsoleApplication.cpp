//"Copyright [year] <Copyright Owner>"

#include <iostream>
#include<cmath>

using namespace std;

void celsiusToFarenheit(float celsius);
void farenheitToCelsius(float farenheit);

int main(){
    bool state = true;
    short option = 0;
    short optionCon = 0;
    float celsiusInput;
    float farenheitInput;

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
                                celsiusToFarenheit(celsiusInput);
                            }
                            else if (optionCon == 2)
                            {
                                cout << "type the value in farentehit" << endl;
                                cin >> farenheitInput;
                                farenheitToCelsius(farenheitInput);
                            }
                        }
                    }
                }
            }
        }
        
    }

    return 0;
}
