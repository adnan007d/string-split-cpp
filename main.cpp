#include <string_split.hpp>
#include <iostream>

int main()
{
    std::vector<std::string> vec{};
    woow::split(vec, "WooW,w", ",");

    for (const auto &v : vec)
    {
        std::cout << v << '\n';
    }
}