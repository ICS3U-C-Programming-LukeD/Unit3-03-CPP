// Copyright (c) 2025 Luke Di Bert All rights reserved.
//
// Created by: Luke Di Bert
// Date: March 21, 2025
// PLays a number guessing game with the user

#include <cmath>
// adds math library
#include <iostream>
// adds iostream library
const int NUMBER = 4;
int main() {
    // Variables for random number and user number
    int randNum = rand() % 10;
    int userNum;
    // Get user guess from 1 to 9
    std::cout << "Guess a number between 1 and 9: ";
    std::cin >> userNum;
    // checks if correct guess
    if (userNum == randNum) {
        std::cout << "You guessed the correct number" << std::endl;
    }
    // checks if user num is too high or too low
    if (userNum > randNum || userNum < randNum) {
        std::cout <<
        "You guessed incorrect, correct number was: " << randNum
        << std::endl;
    }
}
