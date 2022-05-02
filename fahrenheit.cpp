// Copyright (c) 2022 Michael Clermont All rights reserved
//
// Created by: Michael Clermont
// Created on: May 2022
// This program calculates the fahrenheit from celsius

#include <iostream>
#include <string>

void fahrenheit() {
    // this function calculates the fahrenheit from celsius

    std::string celsiusString;
    float celsiusFloat;
    float fahrenheitFloat;

    // input
    std::cout << "Enter a temperature(°C): ";
    std::cin >> celsiusString;

    // process & output
    try {
        celsiusFloat = std::stof(celsiusString);
        fahrenheitFloat = (celsiusFloat * 1.8) + 32;
        std::cout << "" << std::endl;
        std::cout << celsiusFloat << "°C is equal to "
        << fahrenheitFloat << "°F." << std::endl;
    } catch (std::invalid_argument) {
        std::cout << "That is not an decimal number." << std::endl;
    }
    std::cout << "\nDone." << std::endl;
}

main() {
    // this function just calls other functions

    // call functions
    fahrenheit();
}
