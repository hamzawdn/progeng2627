#include <iostream>
#include <vector>

int main() {
    int n, s, num;
    std::vector<int> v;

    std::cout << "Enter the length of vector (n):" << std::endl;
    std::cin >> n;
    std::cout << "Enter numbers for the vector: " << std::endl;

    for (int i = 0; i < n; i++) {
        std::cin >> num;
        v.push_back(num);
    }

    std::cout << "Now enter a number to search for (s) :" << std::endl;
    std::cin >> s;

    std::vector<int> occurences;
    for (int i = 0; i < v.size(); i++) {
        if (s == v[i]) {
            occurences.push_back(i);
        }
    }
    if (occurences.size() == 0) {
        std::cout << "There are no occurences of " << s << std::endl;
    } else {
        std::cout << "There are " << occurences.size() << " occurences of " << s << ": " << std::endl;
        for (int i = 0; i < occurences.size(); i++) {
            std::cout << occurences[i] << std::endl;
        }
    }

}