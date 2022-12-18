// Copyright (c) 2022 Marcus Wehbi All rights reserved.
//
// Created by: Marcus Wehbi
// Created on: Dec 13 2022
// This program uses a for loop to generate a set of random numbers
// It then finds the number with the highest value

#include <array>
#include <ctime>
#include <iostream>
#include <random>

// Declare the max array size constant globally
const int MAX_ARRAY_SIZE = 10;
// Function to find the greatest value within the array
int FindMaxValue(std::array<int, MAX_ARRAY_SIZE> ranNums) {
    // Set the max number ot the first index of the array
    int max = ranNums[0];
    // For loop to iterate through the array to find the greatest value
    for (int counter = 0; counter < ranNums.size(); counter++) {
        if (max < ranNums[counter]) {
            max = ranNums[counter];
        }
    }
    // Return the maximum value to the function
    return max;
}

int main() {
    // Declare constants for max and min for the numbers to be generated in
    const int MIN_NUM = 0;
    const int MAX_NUM = 100;

    // Set counter to 0
    int counter = 0;

    // Declare variables
    std::array<int, MAX_ARRAY_SIZE> ranNumUser;
    int userMax;

    // Code for random number generator
    srand(time(NULL));
    // Display random numbers being generated as they are
    // added to an array
    for (counter = 0; counter < MAX_ARRAY_SIZE; counter++) {
        int randomNumber = (rand_r() % (MIN_NUM, MIN_NUM + MAX_NUM));
        ranNumUser[counter] = randomNumber;
        // Track the numbers being added and display each of them
        std::cout << ranNumUser[counter];
        std::cout << " added to the list at position " << counter;
        std::cout << std::endl;
    }

    // Function to find the greatest number
    userMax = FindMaxValue(ranNumUser);
    std::cout << std::endl;
    // Display the greatest number to the user
    std::cout << "The max value is: " << userMax;
}
