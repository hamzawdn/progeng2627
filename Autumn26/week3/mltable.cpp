#include <iostream>
#include <string>

int main() {
    int n;
    std::cout << "Enter a number: " << std::endl;
    std::cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            std::cout << i * j << "\t";
        }
        std::cout << std::endl;
    }
}