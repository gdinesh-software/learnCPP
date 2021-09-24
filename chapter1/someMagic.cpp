#include <iostream>

int main(void) {
    int start = 0, end = 0;
    std::cout << "Enter the Values for Two Numbers! : ";
    std::cin >> start
        >> end;
    while (start != end) {
        std::cout << "Number "
            << start
            << std::endl;
        ++start;
    }
    std::cout << "Loop finished!\n" << std::endl;
    return 0;
}
