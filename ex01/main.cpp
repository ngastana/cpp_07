#include <iostream>
#include "iter.hpp"

void printInt(int& value) {
    std::cout << "int: " << value << std::endl;
}

void increment(int& value) {
    value++;
}

void printString(std::string& str) {
    std::cout << "string: " << str << std::endl;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    std::string names[] = {"Nere", "ChatGPT", "C++"};

    std::cout << "Original array:" << std::endl;
    iter(arr, 5, printInt);

    iter(arr, 5, increment);

    std::cout << "\nAfter increment:" << std::endl;
    iter(arr, 5, printInt);

    std::cout << "\nStrings:" << std::endl;
    iter(names, 3, printString);

    return 0;
}
