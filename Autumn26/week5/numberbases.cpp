#include <iostream>
#include <vector>
#include <cmath>

bool digits_in_base(int num, int base, std::vector<int>& digits) {
    if ((base < 2) || (base > 16)) {
        return false;
    }

    while (num != 0) {
        digits.push_back(num % base);
        num = num / base;
    }
    
    return true;
}

void print_digits_as_number(const std::vector<int>& digits) {
    std::cout << "Printing vector: " << std::endl;
    for (int i = digits.size() - 1; i >= 0; i--) {
        if (digits[i] > 9) {
            // A is 65 in ASCII, so for '10' to give 'A', add on 55
            std::cout << char(digits[i] + 55);
        } else {
            std::cout << digits[i];
        }
    } 
    std::cout << std::endl;
}

int digits_to_decimal(const std::vector<int>& digits, int base) {
    // Base should be between 2 and 16 
    int sum = 0;
    for (int i = 0; i < digits.size(); i++) {
        sum = sum + digits[i] * std::pow(base, i);
    }
    return sum;
}

int main() {
    int num, base, decimal;
    std::vector<int> digits;
    // Testing several values to see if conversion from base 10 to base X works
    std::vector<int> nums = {3646, 12345678, 123, 198, 634, 45, 30, 200};
    std::vector<int> bases = {16, 10, 8, 2, 10, -2, 17, 1};
    // From the above, the outputs should be E3E, 12345678, 173, 11000110, 634, X, X, X

    for (int i = 0; i < nums.size(); i++) {
        std::cout << "Test case " << i + 1 << std::endl;
        num = nums[i];
        base = bases[i];

        if (digits_in_base(num, base, digits)) {
            print_digits_as_number(digits);

            // Newer addition to test reconstruction function
            decimal = digits_to_decimal(digits, base);
            std::cout << "Decimal number restored from digits: " << decimal << std::endl;

        } else {
            std::cout << "Invalid base" << std::endl;
        }
        digits.clear();
    }

    return 0;
}