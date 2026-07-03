#include <iostream>
#include <string>

int main()
{
    int n = 1234;

    std::string input = std::to_string(n);
    std::string result;

    for (char ch : input)
    {
        int digit = ch - '0';
        int square = digit * digit;

        result += std::to_string(square);
    }

    std::cout << "result string: " << result << std::endl;

    int final = std::stoi(result);
    std::cout << "result int: " << final << std::endl;

    return 0;
}
