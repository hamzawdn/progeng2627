#include <iostream>
#include <vector>

void filter_v(const std::vector<double>& vin, double t, std::vector<double>& vout) {
    for (int i = 0; i < vin.size(); i++) {
        if (vin[i] < t) {
            vout.push_back(vin[i]);
        }
    }
}

int main() {
    int num, n, t;
    std::vector<double> vin, vout;

    std::cout << "Enter the length of vector (n):" << std::endl;
    std::cin >> n;
    std::cout << "Enter numbers for the vector: " << std::endl;

    for (int i = 0; i < n; i++) {
        std::cin >> num;
        vin.push_back(num);
    }

    std::cout << "Enter the filter number (t):" << std::endl;
    std::cin >> t;

    filter_v(vin, t, vout);

    std::cout << "Printing vector: " << std::endl;
    for (int i = 0; i < vout.size(); i++) {
        std::cout << vout[i] << std::endl;
    }  
}