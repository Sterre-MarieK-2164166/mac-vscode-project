#include <iostream>
int main()
{
    const int bufferSize{80};
    char s[bufferSize]{};

    std::cout << "Please enter a few words: ";
    std::cin.getline(s, bufferSize);

    if (s[0] == '\0')
        std::cerr << "No input!\n";
    else
        std::cout << s << '\n';
    for (const auto c : s) // ranged-based for loop
        std::cout << c << '\n';
    if (std::streamsize n{std::cin.gcount()}; n > 0)
        std::cout << "Char count: " << n << '\n';
    return 0;
}