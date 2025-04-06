/**
 * @file library.h
 * @author Christian McKenzie
 * @author Tyson Arnold
 * @date 2025-04-04
 * @brief Library class
 * 
 * Manages a collection of games.
 */

#ifndef LIBRARY_H
#define LIBRARY_H

#include "games.h"
#include <list>
#include <string>
#include <iostream>
#include <fstream>

/**
 * @class Library
 * @brief Handles a sorted list of games.
 */
class Library {
private:
    std::list<Game> games;

public:
    /**
     * @brief Loads games from a file.
     * 
     * @param filename The name of the file to load from.
     */
    void load(const std::string& filename);
    /**
     * @brief Saves games to a file.
     * 
     * @param filename The name of the file to save to.
     */
    void save(const std::string& filename) const;
    /**
     * @brief Inserts a game into the library in sorted order.
     * 
     * @param game The game to insert.
     */
    void insert_sorted(const Game& game);
    /**
     * @brief Finds a game by title and prints its details.
     * 
     * @param title The title of the game to find.
     */
    void find_game(const std::string& title) const;
    /**
     * @brief Finds and prints all games of a specific genre.
     * 
     * @param genre The genre to search for.
     */
    void find_genre(const std::string& genre) const;
    /**
     * @brief Deletes a game by title and year.
     * 
     * @param title The title of the game to delete.
     * @param year The year of the game to delete.
     */
    void delete_game(const std::string& title, int year);
    /**
     * @brief Prints all games in the library.
     */
    void printall() const;
};

#endif // LIBRARY_H