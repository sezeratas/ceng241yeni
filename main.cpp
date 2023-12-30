#include <iostream>
#include "Classes.h"
#include "mainF.h"
#include <string>


using namespace std;

int main()
{

    int mainchoice;
    do {
        mainScreen();
        cin >> mainchoice;

        switch (mainchoice) {

        case 1: {
            ShowAdds();
            break;
        }
        case 2:
            Find();
            break;
        case 3:
            AddAdds();
            break;
        case 4:
            EditAdds();
        case 5:
            return 1;
        default:
            cout << "Invalid choice.Please choose 1-5.";
        }

    } while (mainchoice != 5);

    return 0;
}