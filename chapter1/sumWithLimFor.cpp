#include <iostream>

int main(void) {
    int start, end, sum = 0;
    std::cout << "Hello, Enter two numbers ";
    std::cin >> start
        >> end;
    for (int i = start; i <= end; ++i) {
        sum += i;
    }
    std::cout << "Sum of numbers from "
        << start
        << " to "
        << end
        << " is "
        << sum
        << std::endl;

    return 0;
}
