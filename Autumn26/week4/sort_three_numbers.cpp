#include <iostream>

void myswap(double& a, double& b){

    double tmp;
    tmp = a;
    a = b;
    b = tmp;

}

void sort_three_numbers(double& s1, double& s2, double& s3) {
    if (s1 > s2) {
        myswap(s1, s2);
    }
    if (s2 > s3) {
        myswap(s2, s3);
    }
    if (s1 > s2) {
        myswap(s1, s2);
    }
}

int main() {
    double n1, n2, n3;

    std::cout << "Please enter three values:" << std::endl;
    std::cin >> n1 >> n2 >> n3;

    sort_three_numbers(n1, n2, n3);

    std::cout << n1 << " " << n2 << " " << n3 << std::endl;

}