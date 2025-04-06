# README for GameLibrary
# Author: Christian McKenzie
# Author: Tyson Arnold
# Date: 4/5/25

## Description

- This program implements a game library manager using a sorted linked list.
- Games are tored in alphabetical order by titles. Each game includes a title, publisher, genre, hours played, price, and release year.
- The user can add games, search by genre, title, delete games, and load / save games.

## Menu Options

1. Add Game
   - Prompts the user to enter all the required info for a new game
   - Inserts the game into the list in a sorted order.

2. Find by Genre
   - Asks the user for a genre.
   - Prints all games that exactly match the input genre.
  
3. Find by Title
   - Ask for the title.
   - Prints any game whos title contains those words.
  
4. Delete Game
   - Deletes a game that matches both title and release year.
  
5. Display all Games
   - Prints all gmaes in the list with some visual QOL.
  
6. Load from File
   - Loads game data from a .txt file the user puts in.
   - Each game is 4 lines: title, publisher, genre, and stat line (hour, price, year).
  
7. Save to FIle
   - Saves the current game list to a file in the same format.

8. Exit
   - Exits the program :D
