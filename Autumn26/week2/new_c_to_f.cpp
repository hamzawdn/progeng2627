#include <iostream>
#include <string>

int main(){
    double t_in, t_out;
    std::string unit_in, unit_out;

    std::cout << "Enter the temperature:" << std::endl;
    std::cin >> t_in >> unit_in;

    if (unit_in == "C" || unit_in == "c") {
        unit_out = "F";
        t_out = t_in * 9.0 / 5.0 + 32;
    } else if (unit_in == "F" || unit_in == "f") {
        unit_out = "C";
        //std::cout << "OK " << t_in << " a" << unit_in << "b " << std::endl;
        // Entering '98.6F' sets t_in to 0 and unit_in to 
        t_out = (t_in - 32) * 5.0 / 9.0;
    } else {
        unit_out = "";
    }

    if (unit_out == "") {
        std::cout << "Unit not recognised" << std::endl;
    } else {
        std::cout << t_out << " " << unit_out << std::endl;
    }
}