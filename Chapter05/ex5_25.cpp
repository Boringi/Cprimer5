#include <iostream>
#include <stdexcept>

using std::runtime_error;

int main() {
    int i, j;
    std::cout << "Please input two numbers: " << std::endl;
    while (std::cin >> i >> j) {
        try {
            if (j == 0)
                throw runtime_error("divisor is 0"); 
            std::cout << i / j << std::endl;
        } catch (const runtime_error& err) {  
            std::cout << err.what() << "\nTry Again? Enter y or n" << std::endl;
            char c;
            std::cin >> c;
            if (c != 'y')
                break;
        }
        std::cout << "Please input two numbers: " << std::endl;  
    }
    return 0;
}