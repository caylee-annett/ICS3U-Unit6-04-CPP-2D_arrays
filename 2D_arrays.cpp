// Copyright (c) 2021 Caylee Annett All rights reserved
//
// Created by Caylee Annett
// Created on June 2021
// This program calculates the average of a 2D array

#include <iostream>
#include <random>
#include <array>

template<int rows, int columns>
float CalculateAverage(int (&listOfNumbers)[rows][columns]) {
    // This function calculates the average

    float sumOfNumbers = 0;
    float average;
    int rowNumbers;
    int columnNumbers;

    for (size_t rowNumbers = 0; rowNumbers < rows; ++rowNumbers) {
        for (size_t columnNumbers = 0; columnNumbers < columns;
            ++columnNumbers)
            sumOfNumbers = sumOfNumbers
                + listOfNumbers[rowNumbers][columnNumbers];
    }

    average = sumOfNumbers / (rows * columns);

    return average;
}

main() {
    // This function generates the random numbers
    float randomNumber;
    float answer;
    const int ROWS = 4;
    const int COLUMNS = 5;
    int numberList[ROWS][COLUMNS];

    // Process
    std::cout << "This program calculates the average of a 2D array."
        << std::endl;
    std::cout << "" << std::endl;
    for (int rowValue = 0; rowValue < ROWS; rowValue++) {
        for (int columnValue = 0; columnValue < COLUMNS; columnValue++) {
            std::random_device rseed;
            std::mt19937 rgen(rseed());
            std::uniform_int_distribution<int> idist(1, 50);
            randomNumber = idist(rgen);
            numberList[rowValue][columnValue] = randomNumber;
            std::cout<< randomNumber << " ";
        }
        std::cout << std::endl;
    }

    // Call functions
    answer = CalculateAverage(numberList);

    // Output
    std::cout << "" << std::endl;
    std::cout << "The average is: " << answer << std::endl;
    std::cout << "" << std::endl;
    std::cout << "Done." << std::endl;
}
