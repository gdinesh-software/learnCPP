#include <iostream>

int main() {
    int n = 1;
    int sum = 0, limit;
    std::cout << "Write a number: ";
    std::cin >> limit;
    while (n != limit) {
        sum += n;
        ++n;
    }
    std::cout << "Sum of the numbers upto "
        << n
        << " are "
        << sum
        << " ! "
        << std::endl;
    return 0;
}
