#include <iostream>
using namespace std;

int main() {
    std::cout << "Learning a Do While Loop for a Menu System\n";
    char selection{};

    do {
        cout << "\n --------------------------------\n";
        cout << "1: Do This\n";
        cout << "2: Do That\n";
        cout << "3: Do Something else\n";
        cout << "Q: Quit\n";
        cout << "Enter Your Selection: ";

        cin >> selection;

        switch (selection) {
        case '1':
            cout << "Your choice is 1 - do this \n";
            break;
        case '2':
            cout << "Your choice is 2 - do that \n";
            break;
        case '3':
            cout << "Your choice is 3 - do something else \n";
            break;
        case 'Q':
        case 'q':
            cout << "Your Goodbye.... \n";
            break;
        default:
            cout << "Unknown option ---- Try again... \n";
            break;
        }

    } while (selection != 'q' && selection != 'Q');

    return 0;
}
