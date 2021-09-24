// Sum of integers from 50 to 100 with for loops

#include <iostream>

int main(void) {
    int sum = 0;
    for (int i = 50;
            i <= 100;
            ++i) {
        sum += i;
    }
    std::cout << "Sum of integers from 50 to 100 with for loops!: "
        << sum
        << std::endl;
    return 0;
}
