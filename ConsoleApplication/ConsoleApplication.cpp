#include <iostream>
#include<cmath>

using namespace std;

int main()
{
    bool state = true;
    while (true) {

        short option{};
        cout << "Chose an option" << endl
             << "1. Conversion" << endl
             << "2. Math" << endl;
        cin >> option;

        if (option > 2 || option < 1)
        {
            option = 0;
        }
        else
        {
            cout << "Poggers";
            break;
        }
        
    }

    int option;

    return 0;
}
