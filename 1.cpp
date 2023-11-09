#include <iostream>
#include <map>
#include <string>

int romanToInt(const std::string& roman)
{
    std::map<char, int> romanMap = {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}
    };

    int total = 0;
    int prevValue = 0;

    for (int i = roman.length() - 1; i >= 0; i--) {
        int currentValue = romanMap[roman[i]];

        if (currentValue < prevValue) {
            total -= currentValue;
        } else {
            total += currentValue;
        }

        prevValue = currentValue;
    }

    return total;
}

int main()
{
    std::string romanNumeral;
    std::cout << "Enter a Roman numeral: ";
    std::cin >> romanNumeral;

    int intValue = romanToInt(romanNumeral);

    std::cout << "The integer value of " << romanNumeral << " is: " << intValue << std::endl;

    return 0;
}
