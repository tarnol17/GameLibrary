/**
 * @file games.h
 * @author Christian McKenzie
 * @author Tyson Arnold
 * @date 2025-04-04
 * @brief Game class
 * 
 * Holds the data of games.
 */

#ifndef GAME_H
#define GAME_H

#include <iostream>
#include <string>
#include <iomanip>

/**
 * @struct Game
 * 
 * @brief Holds the data of a game.
 */
struct Game {
    std::string title;
    std::string publisher;
    std::string genre;
    float hours_played;
    float price;
    int year;

    /**
     * @brief Constructor for the Game struct.
     * 
     * @param t Title of the game.
     * @param p Publisher of the game.
     * @param g Genre of the game.
     * @param h Hours played.
     * @param pr Price of the game.
     * @param y Year of release.
     */
    Game(std::string t, std::string p, std::string g, float h, float pr, int y) {
        title = t;
        publisher = p;
        genre = g;
        hours_played = h;
        price = pr;
        year = y;
    }

    /**
     * @brief Prints the game data.
     */
    void print() const {
        std::cout << std::fixed << std::setprecision(2);
        std::cout << "Title: " << title << "\n"
                  << "Publisher: " << publisher << "\n"
                  << "Genre: " << genre << "\n"
                  << "Hours Played: " << hours_played << "\n"
                  << "Price: $" << price << "\n"
                  << "Year: " << year << "\n";
    }
};


#endif // GAME_H
