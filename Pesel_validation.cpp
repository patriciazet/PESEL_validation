#include <iostream>
#include <regex>

bool checkPESEL(const std::string& pesel)
{
    std::regex peselRegex("\\d{11}");
    return std::regex_match(pesel, peselRegex);
}
int main()
{
    std::string pesel1("123456789");
    std::string pesel2("345678901");
    std::string pesel3("ABd5679321567");
    std::string definitelyNotPesel("34m56b67j34");

    std::cout << pesel1 << " wynik: " << checkPESEL(pesel1) << std::endl;
    std::cout << pesel1 << " wynik: " << checkPESEL(pesel2) << std::endl;
    std::cout << pesel1 << " wynik: " << checkPESEL(pesel3) << std::endl;
    std::cout << definitelyNotPesel << " wynik: " << checkPESEL(definitelyNotPesel) << std::endl;
}


