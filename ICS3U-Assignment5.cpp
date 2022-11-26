// Copyright(c) 2022 Evgeny Vovk All rights reserved.
//
// Created by : Evgeny Vovk
// Created on : November 2022
// ICS3U-Assignment5.cpp File.

#include <iostream>

int main() {
    // creating variables
    int answer = 0;
    int counter = 1;
    int counter_prettier = 0;

    // process and output
    std::cout << "\n";
    std::cout << "All the natural numbers that are multiples of 5 and 3,"
              << " that are less than 1000 are:\n\n";
    while (counter <= 1000) {
        if (counter % 3 == 0 || counter % 5 == 0) {
            std::cout << counter << " ";
            answer += counter;
            counter_prettier++;
            if (counter_prettier % 10 == 0) {
                std::cout << "\n";
            }
        }
        counter++;
    }
    std::cout << "\n\nThe sum of all these numbers is " << answer;

    std::cout << "\n\n\nDone.\n";
}
