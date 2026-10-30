#include <iostream>

int main(){
    double mass, height, bmi;

    std::cout << "Enter your weight in kilograms:" << std::endl;
    std::cin >> mass;
    std::cout << "Enter your height:" << std::endl;
    std::cin >> height;

    bmi = mass / (height * height);

    std::cout << "Your BMI is: " << bmi << std::endl;

}