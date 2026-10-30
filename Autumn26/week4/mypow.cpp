#include <iostream>
#include <string>
#include <cmath>

int mypow(int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum = sum + std::pow(n, i + 1);
    }
    return sum;
}

int main() {
    int n, x;
    std::cout << "Enter n and x: " << std::endl;
    std::cin >> n >> x;
    std::cout << "Sum of powers is: " << mypow(n) <<std::endl;
}