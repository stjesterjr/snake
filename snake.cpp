// snake.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <conio.h>


//Stage
const int stage_width = 100;
const int stage_height = 25;
const int stage_length = stage_width * stage_height;
char stage_map[stage_length];



//Prind screen=====================================================================
void printScreen() {
    for (int x = 0; x < stage_width; x++) {
        for (int y = 0; y < stage_height; y++) {
            std::cout << stage_map[x + y * stage_width];
        }
        std::cout << std::endl;
    }
}
//Clear screen=====================================================================
void clearScreen() {
    std::cout << "\033c" << std::endl;
}

int main()
{
    printScreen();
    clearScreen();
    return 0;
}