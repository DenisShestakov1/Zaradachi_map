#include <iostream>
#include <map>

std::string intToRoman(int num) {
    std::map<int, std::string, std::greater<int>> romanMap = {
       {1000, "M"},
       {900, "CM"},
       {500, "D"},
       {400, "CD"},
       {100, "C"},
       {90, "XC"},
       {50, "L"},
       {40, "XL"},
       {10, "X"},
       {9, "IX"},
       {5, "V"},
       {4, "IV"},
       {1, "I"}
    };
    std::string result = "";

    for (const auto& entry : romanMap) {
        while (num >= entry.first) {
            result += entry.second;
            num -= entry.first;
        }
    }

    return result;
    }

        int main() {
        int intValue;

        std::cout << "Enter an integer: ";
        std::cin >> intValue;

        std::string romanNumeral = intToRoman(intValue);

        std::cout << "The Roman numeral for " << intValue << " is: " << romanNumeral << std::endl;

        return 0;
    }
