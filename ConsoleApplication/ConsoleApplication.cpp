//"Copyright [year] <Copyright Owner>"

#include <iostream>
#include<cmath>

using namespace std;

int main(){
    bool state = true;
    short option = 0;
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
                    int x{};
                    cout << "ta meu mano fala quantos graus ta ai em farenthetet:" << endl;  
                    cin >> x; 
                    cout << endl << "é isso ai ó " << x * 100 << endl;
                    cout << "ihhaaaaaaa"
                    

                }
            }
        }
        
    }

    return 0;
}
