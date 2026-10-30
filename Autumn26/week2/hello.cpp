#include <iostream>
#include <string>
// this includes the header for text variables

int main(){

    std::string user_name;

    std::string user_surname;

    std::cout << "what is your name?\n";
    std::cin >> user_name;

    std::cout << "what is your surname?\n";
    std::cin >> user_surname;

    std::cout << "hello ";
    std::cout << user_name;
    std::cout << " ";
    std::cout << user_surname << std::endl;
}