#include <iostream>
#include <string>
using namespace std;

void display_menu() {
    cout << "Game Library Menu" << endl;
    cout << "1. Add Game" << endl; 
    cout << "2. Find by Genre" << endl;
    cout << "3. Find by Title" << endl;
    cout << "4. Delete Game" << endl;
    cout << "5. Display All Games" << endl;
    cout << "6. Load from File" << endl;
    cout << "7. Save to File" << endl;
    cout << "8. Exit" << endl;
    cout << "Choose an option: " << endl;
}

int main() {
    int choice = 0;

    while (choice != 8) {
        display_menu();
        cin >> choice;
        cin.ignore();

        if (choice == 1) {
            cout << "Option 1: Add Game selected." << endl;
        } 
        else if (choice == 2) {
            cout << "Option 2: Find by Genre selected." << endl;
        } 
        else if (choice == 3) {
            cout << "Option 3: Find by Title selected." << endl;
        } 
        else if (choice == 4) {
            cout << "Option 4: Delete Game selected." << endl;
        } 
        else if (choice == 5) {
            cout << "Option 5: Display All Games selected." << endl;
        } 
        else if (choice == 6) {
            cout << "Option 6: Load from File selected." << endl;
        } 
        else if (choice == 7) {
            cout << "Option 7: Save to File selected." << endl;
        } 
        else if (choice == 8) {
            cout << "Exiting..."v;
        } 
        else {
            cout << "Invalid choice. Please try again." << endl;
        }
    }
}
