#include "BlackScholes.h"
#include <iostream>

int main() {
    Option x{100.0, 100.0, 1.0, 0.05, 0.2, OptionType::CALL};
    Option x2{100.0, 100.0, 1.0, 0.05, 0.2, OptionType::PUT}; 
    BlackScholes bc;
    std::cout << "Long Call option price: " << bc.price(x) << std::endl;
    std::cout << "Long Put option price: " << bc.price(x2) << std::endl;
};