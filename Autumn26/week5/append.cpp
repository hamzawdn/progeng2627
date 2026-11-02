#include <iostream>
#include <vector>

void append_vectors(const std::vector<int>& vin1, const std::vector<int>& vin2, std::vector<int>& vout) {
    vout = vin1;
    for (int i = 0; i < vin2.size(); i++) {
        vout.push_back(vin2[i]);
    }
}

int main() {
    int n1, num, n2;
    std::vector<int> v1, v2, vF;

    std::cout << "Enter the length of vector (n):" << std::endl;
    std::cin >> n1;
    std::cout << "Enter numbers for the vector: " << std::endl;

    for (int i = 0; i < n1; i++) {
        std::cin >> num;
        v1.push_back(num);
    }

    std::cout << "Enter the length of vector (n):" << std::endl;
    std::cin >> n2;
    std::cout << "Enter numbers for the vector: " << std::endl;

    for (int i = 0; i < n2; i++) {
        std::cin >> num;
        v2.push_back(num);
    }

    append_vectors(v1, v2, vF);

    std::cout << "Printing vector: " << std::endl;
    for (int i = 0; i < vF.size(); i++) {
        std::cout << vF[i] << std::endl;
    }   

}