// Counts down from 10 to 0

#include <iostream>

int main(void) {
    int i = 10;
    std::cout << "Starting Countdown!";
    while (i != 0) {
        std::cout << "T Minus "
            << i
            << std::endl;
        --i;
    }
    std::cout << "Launch!";
    return 0;
}
