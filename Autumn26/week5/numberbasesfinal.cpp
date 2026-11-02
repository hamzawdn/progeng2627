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
    // Only bases from 2 to 16 are valid though this will accept more.
    int sum = 0;
    for (int i = 0; i < digits.size(); i++) {
        sum = sum + digits[i] * std::pow(base, i);
    }
    return sum;
}

bool convert_base(const std::vector<int>& vin, int basein, int baseout, std::vector<int>& vout) {
    // Get value from the number in the given base (aka convert to base 10)
    // Convert to target base (turn base 10 number into output number)

    if ((baseout < 2) || (baseout > 16)) {
        return false;
    }
    int value = digits_to_decimal(vin, basein);
    return digits_in_base(value, baseout, vout);
}

int main() {
    // Tests:
    // 250, first to base 8, then to base 16 (pass)
    // 123, first to base 8, then binary (pass)
    // 262144, first to base 65536, then to base 16384 (base was invalid. but pass?)
    // did the above but patched the invalid base:
    // 262144 becomes 40 in base 65536, then G0 in base 16384. really odd but fun to watch
    // if F is 15, G is 16, which makes sense since 262144 is 16386 times 16
    int num = 262144;
    std::vector<int> digit_in_base_A;
    std::vector<int> digit_in_base_B;

    /// Obtain the octal digits of 250
    digits_in_base(num, 65536, digit_in_base_A); // Edit Base A

    std::cout << "Base A: ";
    print_digits_as_number(digit_in_base_A);

    /// Convert the octal digits to hexadecimal digits
    if (convert_base(digit_in_base_A, 65536, 16384, digit_in_base_B)) { // Edit Base A and B
        std::cout << "Base B: ";
        print_digits_as_number(digit_in_base_B);
    } else {
        std::cout << "Invalid base" << std::endl;
    }

    return 0;
}