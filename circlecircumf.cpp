// Copyright (c) 2019 myself All rights reserved.
//
// Created by: Matsuru Hoshi
// Created on: Sept 2019
// This is circumference periemter circle

#include <iostream>

int main() {
    // This will calculate circumference and perimeter of a circle
    const double TAU = 6.28318530717;
    int radius;
    double circumference;

    // input
    std::cout << "What is the side dimension: " << std::endl;
    std::cin >> radius;

    // process
    circumference = TAU * radius;

    // output
    std::cout << "The circumference is " << circumference << " units." << std::endl;
}
