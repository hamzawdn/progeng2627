#include <iostream>

int smallest_factor(int n) {
    for(int cf = 2; cf < n; cf++){
        if( (n % cf) == 0) {
            return true;
        }
    }
    return false;
}

int main() {
    int n1, n2;
    std::cout << "Enter two numbers please: ";
    std::cin >> n1 >> n2;

    for (int n = n1; n <= n2; n++) {
        if (!smallest_factor(n)) {
            std::cout << n << std::endl;
        }
    }
}