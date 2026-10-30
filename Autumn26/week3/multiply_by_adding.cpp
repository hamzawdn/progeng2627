#include <iostream>

int main(){
    // Not much needed to change from the example to makeit multiply
    double x, acc = 0; // acc = 0
    int n, counter = 0;

    std::cin >> x >> n;
    // acc + x
    while(counter < n){
        acc = acc + x;
        counter = counter + 1;
    }
    // output gives x*n
    std::cout << x << "*" << n <<  " = " << acc << std::endl;

}