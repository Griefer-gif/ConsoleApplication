#include <iostream>
#include<cmath>

using namespace std;

int main()
{
    bool state = true;
    short option = 0;
    while (true) {

        option = 0;
        cout << "Chose an option" << endl
             << "0. End" << endl
             << "1. Conversion" << endl
             << "2. Math" << endl ;
        cin >> option;

        if (cin.fail()) {
            cout << endl << "Se é burro cara" << endl << endl;
            cin.clear();
            cin.ignore(std::numeric_limits<streamsize>::max(), '\n');
            continue;
        }
        else
        {
            if (option > 2 || option < 0)
            {
                cout << endl << "Se é burro cara" << endl << endl;
                continue;
            }
            else {
                cout << "valeu mano" << endl;
            }
        }
        
    }

    return 0;
}
