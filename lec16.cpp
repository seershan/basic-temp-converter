// Temperature Converter

#include <iostream>

int main() {

    double temp;
    char unit;

    std::cout << "******** Temperature Converter ******\n";
    std::cout << "F = Farehnheit\n";
    std::cout << "C = Celsius\n";
    std::cout << "What unit would you like to convert to: \n";
    std::cin >> unit;

    if(unit == 'F' || unit == 'f') {
        std::cout << "Enter the temperature in Celsius: ";
        std::cin >> temp;

        temp = (1.8 * temp) +  32.0;
        std::cout << "Temperature is: " << temp << "F\n";
    }

    else if(unit== 'C' || unit == 'c') {
        std::cout << "Enter the temperature in Farehnheit: ";
        std::cin >> temp;

        temp = (temp - 32.0) / 1.8;
        std::cout << "Temperature is: " << temp << "C\n";
    }
    else{
        std::cout << "Please enter in only C/c or F/f";
    }

    std::cout << "**************************************\n";
}