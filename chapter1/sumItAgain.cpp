// WAP that prints the sum of a set of integers read from cin
#include <iostream>

int main() {
    int counter = 0, sum = 0;
    std::cout << "Enter a number: ";
    std::cin >> counter;
    int temp = counter;
    while (counter != 0) {
        sum += counter;
        --counter;
    }

    std::cout << "The Sum of integers from 1 to "
        << temp
        << " is "
        << sum
        << std::endl;

    return 0;
}
