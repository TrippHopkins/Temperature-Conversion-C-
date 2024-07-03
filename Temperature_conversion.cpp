#include <iostream>

int main(){

    double temp;
    char unit;

    std::cout << "******************** temp conversion ********************";
    std::cout << "F = Fahrenheit\n";
    std::cout << "C = Celsius\n";
    std::cout << "what unit would you like to convert to: ";
    std::cin >> unit;
    
    if(unit == 'F' || unit == 'f'){
        std::cout << "Enter celsius temp: ";
        std::cin >> temp;

        temp = (1.8 * temp) + 32;
        std::cout << "temp is: " << temp << "F\n";
    }
    else if(unit == 'C' || unit == 'c'){
        std::cout << "Enter Fahrenheit temp: ";
        std::cin >> temp;

        temp = (temp - 32) / 1.8;
        std::cout << "temp is: " << temp << "C\n";
    }
    else{
        std::cout << "please enter in only C or F\n";
    }
    
    std::cout << "*********************************************************";


    return 0;
}