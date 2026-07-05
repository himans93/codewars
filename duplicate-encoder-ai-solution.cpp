#include <iostream>
#include <string>
#include <array>
#include <cctype>

std::string duplicate_encoder(const std::string& word)
{
    std::array<int, 256> count{};

    auto to_lower = [](unsigned char ch) -> unsigned char {
        return static_cast<unsigned char>(std::tolower(ch));
    };

    for (unsigned char ch : word) {
        ++count[to_lower(ch)];
    }

    std::string result;
    result.reserve(word.size());

    for (unsigned char ch : word) {
        if (count[to_lower(ch)] == 1) {
            result.push_back('(');
        } else {
            result.push_back(')');
        }
    }

    return result;
}

int main()
{
    std::string str = "Success";
    auto result = duplicate_encoder(str);

    std::cout << result << std::endl;

    return 0;
}
