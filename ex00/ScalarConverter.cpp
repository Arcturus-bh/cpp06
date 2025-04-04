/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldalmas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 11:58:33 by aldalmas          #+#    #+#             */
/*   Updated: 2025/04/04 15:45:44 by aldalmas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

// constructor & destructor
ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter& other) {
    *this = other;
}

ScalarConverter::~ScalarConverter() {}

// overload
ScalarConverter& ScalarConverter::operator=(const ScalarConverter&) {
    return *this;
}

// method
void ScalarConverter::convert(std::string& litteral) {
    if (litteral.size() == 0) {
        std::cout << RED "ERROR - Arg can't be empty." << std::endl;
        return;
    }

    const char *new_litteral = litteral.c_str();
    char *endPtr;

    if (litteral == "nan" || litteral == "nanf")
        return displayNan();
    else if (litteral == "+inf" || litteral == "+inff" || litteral == "inf" || litteral == "inff")
        return displayInf();
    else if (litteral == "-inf" || litteral == "-inff")
        return displayNegInf();

    if (litteral.length() == 1 && std::isprint(litteral[0]) && !isdigit(litteral[0]))
        return displayChar(new_litteral);

    long int isInt = strtol(new_litteral, &endPtr, 10);
    if (*endPtr == '\0')
        return displayInteger(static_cast<int>(isInt));
        
    float isFloat = strtof(new_litteral, &endPtr);
    if (*endPtr == 'f' && *(endPtr + 1) == '\0')
        return displayFloat(isFloat);

    double isDouble = strtod(new_litteral, &endPtr);
    if (*endPtr == '\0')
        return displayDouble(isDouble);
    std::cout << RED "ERROR - Invalid conversion." << std::endl;
}

// exception

// global function
void displayNan(void) {
    std::cout << GREEN "nan detected" << RESET << std::endl;
    std::cout << "char: impossible" << std::endl;   
    std::cout << "int: impossible" << std::endl;   
    std::cout << "float: nanf" << std::endl;   
    std::cout << "double: nan" << std::endl; 
}

void displayInf(void) {
    std::cout << GREEN "+inf detected" << RESET << std::endl;
    std::cout << "char: impossible" << std::endl;   
    std::cout << "int: impossible" << std::endl;   
    std::cout << "float: +inff" << std::endl;   
    std::cout << "double: +inf" << std::endl; 
}

void displayNegInf(void) {
    std::cout << GREEN "-inf detected" << RESET << std::endl;
    std::cout << "char: impossible" << std::endl;   
    std::cout << "int: impossible" << std::endl;   
    std::cout << "float: -inff" << std::endl;   
    std::cout << "double: -inf" << std::endl; 
}

void displayChar(const char* converted) {
    std::cout << GREEN "Char detected" << RESET << std::endl;
    char c = converted[0];
    std::cout << "char: " << converted[0] << std::endl;
    std::cout << "int: " << static_cast<int>(c) << std::endl;
    std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
    std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
}

void displayInteger(int converted) {
    std::cout << GREEN "Integer detected" << RESET << std::endl;
    char c = converted;
    if (!std::isprint(c))
        std::cout << "char: Non displayable" << std::endl;
    else
        std::cout << "char: " << c << std::endl;
    std::cout << "int: " << converted << std::endl;
    std::cout << "float: " << static_cast<float>(converted) << "f" << std::endl;
    std::cout << "double: " << static_cast<double>(converted) << std::endl;
}

void displayFloat(float converted) {
    std::cout << GREEN "Float detected" << RESET << std::endl;
    checkCharFDisplay(converted);
    if (static_cast<double>(converted) > INT_MAX || static_cast<double>(converted) < INT_MIN)
        std::cout << "int: impossible" << std::endl;
    else
        std::cout << "int: " << static_cast<int>(converted) << std::endl;
    printFloatDouble(converted);
}

void displayDouble(double converted) {
    std::cout << GREEN "Double detected" << RESET << std::endl;
    checkCharDDisplay(converted);
    if (static_cast<double>(converted) > INT_MAX || static_cast<double>(converted) < INT_MIN)
        std::cout << "int: impossible" << std::endl;
    else
        std::cout << "int: " << static_cast<int>(converted) << std::endl;
    printDoubleFloat(converted);
}

