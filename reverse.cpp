#include <iostream>
#include <string>
#include <algorithm> // for std::swap

void reverseAString(std::string &str, int start, int end) {
    if (start >= end) {
        return; // Base case: do nothing if start is not less than end
    }
    // Swap the characters at start and end
    std::swap(str[start], str[end]);
    // Recursive call to reverse the remaining string
    reverseAString(str, start + 1, end - 1);
}

int main() {
    std::string str1;
    std::cout << "Enter the string: " << std::endl;
    std::getline(std::cin, str1);

    reverseAString(str1, 0, str1.length() - 1);

    std::cout << "Reversed string: " << str1 << std::endl;

    int reversedNumber = std::stoi(str1);
    std::cout << "Reversed number: " << reversedNumber << std::endl;

    return 0;
}
