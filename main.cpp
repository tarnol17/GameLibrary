/**
 * @file main.cpp
 * @author Christian McKenzie
 * @author Tyson Arnold
 * @date 2025-04-04
 * @brief Main program for the Game Library
 * 
 * Interface for managing the game library.
 */

#include <iostream>
#include "library.h"
#include "library.cpp"
#include <string>
using namespace std;

/**
 * @brief Displays the menu options to the user.
 */
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
    Library library;
    int choice = 0;

    while (choice != 8) {
        display_menu();
        cin >> choice;
        cin.ignore();

        if (choice == 1) {
            string title, publisher, genre;
            float hours_played, price;
            int year;
            cout << "Enter Title: ";
            getline(cin, title);
            cout << "Enter Publisher: ";
            getline(cin, publisher);
            cout << "Enter Genre: ";
            getline(cin, genre);
            cout << "Enter Hours Played: ";
            cin >> hours_played;
            cout << "Enter Price: ";
            cin >> price;
            cout << "Enter Year: ";
            cin >> year;
            cin.ignore();
            
            Game g(title, publisher, genre, hours_played, price, year);
            library.insert_sorted(g);
        } 
        else if (choice == 2) {
            string genre;
            cout << "Enter Genre: ";
            getline(cin, genre);
            library.find_genre(genre);
        } 
        else if (choice == 3) {
            string title;
            cout << "Enter Title: ";
            getline(cin, title);
            library.find_game(title);
        } 
        else if (choice == 4) {
            string title;
            int year;
            cout << "Enter Title: ";
            getline(cin, title);
            cout << "Enter Year: ";
            cin >> year;
            cin.ignore();
            library.delete_game(title, year);
        } 
        else if (choice == 5) {
            library.printall();
        } 
        else if (choice == 6) {
            string filename;
            cout << "Enter filename ";
            getline(cin, filename);
            library.load(filename);
        }
        else if (choice == 7) {
            string filename;
            cout << "Enter filename ";
            getline(cin, filename);
            library.save(filename);
        }
        else if (choice == 8) {
            cout << "Goodbye\n";
        }
        else {
            cout << "Invalid choice. Please try again." << endl;
        }
    }
}
