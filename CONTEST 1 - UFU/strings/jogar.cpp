#include <iostream>


int main() {
    std::string input;
    unsigned short i;
    std::cin >> i;
    std::cin.ignore();
    getline(std::cin, input);

    for(int j = 0; j < i; j++){
        std::cout << input << std::endl;
    }

    return 0;
}
