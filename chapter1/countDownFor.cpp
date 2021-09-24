#include <iostream>

int main(void) {
    std::cout << "Count Down starts now!\n" << std::endl;
    for (int i = 10; i >= 0; --i) {
        std::cout << "T Minus "
            << i
            << std::endl;
    }
    return 0;
}
