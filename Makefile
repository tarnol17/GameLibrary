# @file Makefile
# @author Christian McKenzie
# @author Tyson Arnold
# @date 2025-04-04
# @brief Makefile for the game library 

CC = g++
CFLAGS = -Wall -std=c++11

all: game_library

game_library: main.o
	$(CC) $(CFLAGS) -o game_library main.o

main.o: main.cpp
	$(CC) $(CFLAGS) -c main.cpp

clean:
	rm -f *.o game_library