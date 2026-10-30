#include <iostream>

int main(){
    double n, sum, count;
    sum = 0;
    count = 0;

    std::cout << "Enter a number: " << std::endl;
    std::cin >> n;

    while(n != 0) {
        sum = sum + n;
        count = count + 1;
        std::cout << "The average so far is: " << sum / count << std::endl;
        std::cin >> n;
    }
}