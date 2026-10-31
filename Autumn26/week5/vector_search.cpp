#include <iostream>
#include <vector>

int search_vector(int n, const std::vector<int>& vin) {
    for (int i = 0; i < vin.size(); i++) {
        if (n == vin[i]) {return i;}
    }
    return -1;
}

int main() {
    if (false) {
        int n, s;
        double num;
        std::vector<int> v;

        std::cout << "Enter the length of vector (n):" << std::endl;
        std::cin >> n;
        std::cout << "Enter numbers for the vector: " << std::endl;

        for (int i = 0; i < n; i++) {
            std::cin >> num;
            v.push_back(num);
        }

        std::cout << "Enter the number to find:" << std::endl;
        std::cin >> s;
        std::cout << "Index is (-1 if not found):" << std::endl;
        std::cout << search_vector(s, v) << std::endl;
    } else {
        std::vector<int> v = {2, 3, 5, 6, 7, 8, 4, 6, 3, 2, 1, 35, 4, 6};
        std::vector<int> b = {37, 43, 3, 75, 342, 727, 35, 23, 547, 54};
        std::vector<int> n = {6, 445, 4, 5, 74, 5, 745, 76, 45, 743, 754};
        std::vector<int> m = {234, 63, 246, 432, 6, 23, 23};
        std::vector<int> s = {547, 34, 325, 46, 43, 43, 7, 4752, 7};

        std::cout << (search_vector(3, v) == 1) << std::endl;
        std::cout << (search_vector(1, b) == -1) << std::endl;
        std::cout << (search_vector(4, n) == 2) << std::endl;
        std::cout << (search_vector(23, m) == 5) << std::endl;
        std::cout << (search_vector(444, s) == -1) << std::endl;
    }
}