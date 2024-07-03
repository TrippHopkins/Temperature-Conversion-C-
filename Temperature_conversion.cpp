#include <iostream>

int main(){

    double temp;
    char unit;
    char from;

    std::cout << "******************** temp conversion ********************\n";
    
    std::cout << "F = Fahrenheit\n";
    std::cout << "C = Celsius\n";
    std::cout << "K = Kelvin\n";
    
    std::cout << "what unit would you like to convert from: ";
    std::cin >> from;
    
    std::cout << "what would you like to convert to: ";
    std::cin >> unit;
    
    if(from == 'F' && unit == 'C')
    {
        std::cout << "Enter in Temperature in Fahrenheit: ";
        std::cin >> temp;
        temp = (temp - 32) / 1.8;
        std::cout << "The Temperature in Celsius is: " << temp << '\n';
    }
    else if(from == 'C' && unit == 'F')
    {
        std::cout << "Enter in Temperature in Celsius: ";
        std::cin >> temp;
        temp = (temp * 1.8) + 32;
        std::cout << "The Temperature in Fahrenheit is: " << temp << '\n';        
    }
    else if(from == 'F' && unit == 'K')
    {
        std::cout << "Enter in Temperature in Fahrenheit: ";
        std::cin >> temp;
        temp = ((temp - 32) / 1.8) + 273.15;
        std::cout << "The Temperature in Kelvin is: " << temp << '\n';        
    }
        else if(from == 'C' && unit == 'K')
    {
        std::cout << "Enter in Temperature in Celsius: ";
        std::cin >> temp;
        temp = (temp + 273.15);
        std::cout << "The Temperature in Kelvin is: " << temp << '\n';        
    }
            else if(from == 'K' && unit == 'C')
    {
        std::cout << "Enter in Temperature in Kelvin: ";
        std::cin >> temp;
        temp = (temp - 273.15);
        std::cout << "The Temperature in Celsius is: " << temp << '\n';        
    }
        else if(from == 'K' && unit == 'F' )
    {
        std::cout << "Enter in Temperature in Kelvin: ";
        std::cin >> temp;
        temp = (((temp - 273.15) * 1.8) + 32);
        std::cout << "The Temperature in fahrenheit is: " << temp << '\n';        
    }
    else{
        std::cout << "Please enter a valid units of Temperature measurment (F, C, K)\n";
    }
    
    
    std::cout << "********************************************************\n";
}