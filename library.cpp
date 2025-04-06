/**
 * @file library.cpp
 * @author Christian McKenzie
 * @author Tyson Arnold
 * @date 2025-04-04
 * @brief Library class implementation
 * 
 * Manages a collection of games.
 */

#include "library.h"
#include <iostream>
#include <fstream>


void Library::load(const std::string& filename) {
    std::ifstream inFile(filename);
    if (!inFile) {
        std::cerr << "Error opening file: " << filename << std::endl;
        return;
    }

    std::string title, publisher, genre;
    float hours_played, price;
    int year;

    while (std::getline(inFile, title) && 
           std::getline(inFile, publisher) && 
           std::getline(inFile, genre) && 
           inFile >> hours_played >> price >> year) {
        inFile.ignore();
        Game game(title, publisher, genre, hours_played, price, year);
        insert_sorted(game);
    }
    inFile.close();
}

void Library::save(const std::string& filename) const {
    std::ofstream outFile(filename);

    for (const Game& g : games) {
        outFile << g.title << "\n"
                << g.publisher << "\n"
                << g.genre << "\n"
                << g.hours_played << "\n"
                << g.price << "\n"
                << g.year << "\n";
    }

    outFile.close();
}

void Library::insert_sorted(const Game& game) {
    std::list<Game>::iterator it = games.begin();
    while(it != games.end() && it->title < game.title) {
        ++it;
    }
    games.insert(it, game);
}

void Library::find_game(const std::string& title) const {
    for (const Game& g : games) {
        if (g.title == title) {
            g.print();
            return;
        }
    }
    std::cout << "Game not found." << std::endl;
}

void Library::find_genre(const std::string& genre) const {
    for(const Game& g : games) {
        if (g.genre == genre) {
            g.print();
        }
    }
}

void Library::delete_game(const std::string& title, int year) {
    for (std::list<Game>::iterator it = games.begin(); it != games.end(); ++it) {
        if (it->title == title && it->year == year) {
            games.erase(it);
            std::cout << "Game deleted." << std::endl;
            return;
        }
    }
}

void Library::printall() const {
    for (const Game& g : games) {
        std::cout << "------------------------\n";
        g.print();
    }
}
