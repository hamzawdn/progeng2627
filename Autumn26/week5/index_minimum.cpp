#include <iostream>
#include <vector>

int min_vector_element(const std::vector<double>& vin) {
    int minidx = vin.size() == 0 ? -1 : 0;
    for (int i = 0; i < vin.size(); i++) {
        if (vin[i] < vin[minidx]) {
            minidx = i;
        }
    }
    return minidx;
}

int main() {
    if (false) {
        int n;
        double num;
        std::vector<double> v;

        std::cout << "Enter the length of vector (n):" << std::endl;
        std::cin >> n;
        std::cout << "Enter numbers for the vector: " << std::endl;

        for (int i = 0; i < n; i++) {
            std::cin >> num;
            v.push_back(num);
        }

        std::cout << "Minimum is (if empty vector, -1):" << std::endl;
        std::cout << min_vector_element(v) << std::endl;
    } else {
        std::vector<double> v = {2, 3, 5, 6, 7, 8, 4, 6, 3, 2, 1, 35, 4, 6};
        std::vector<double> b = {37, 43, 3, 75, 342, 727, 35, 23, 547, 54};
        std::vector<double> n = {6, 445, 4, 5, 74, 5, 745, 76, 45, 743, 754};
        std::vector<double> m = {234, 63, 246, 432, 6, 23, 23};
        std::vector<double> s = {547, 34, 325, 46, 43, 43, 7, 4752, 7};

        std::cout << (min_vector_element(v) == 10) << std::endl;
        std::cout << (min_vector_element(b) == 2) << std::endl;
        std::cout << (min_vector_element(n) == 2) << std::endl;
        std::cout << (min_vector_element(m) == 4) << std::endl;
        std::cout << (min_vector_element(s) == 6) << std::endl;
    }
}