#include <iostream>
#include <string>

int main() {
    int n, max, i;
    std::cout << "Enter a number: " << std::endl;
    std::cin >> n;
    max = n;
    i = 0;

    while (n != 1) {
        i++;
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = 3 * n + 1;
            if (n > max) {
                max = n;
            }
        }
        std::cout << n << " ";
    }
    std::cout << std::endl << "Steps: " << i << std::endl;
    std::cout << "Maximum: " << max << std::endl;
}