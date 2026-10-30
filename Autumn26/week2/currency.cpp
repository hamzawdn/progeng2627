#include <iostream>

int main(){
    double gbp, gbp_to_euros, eur;

    std::cout << "Enter an amount of money (GBP):" << std::endl;
    std::cin >> gbp;
    std::cout << "Enter the exchange rate (1 GBP -> X EUR):" << std::endl;
    std::cin >> gbp_to_euros;

    eur = gbp * gbp_to_euros;

    std::cout << "Amount of money in EUR is: " << eur << std::endl;

}