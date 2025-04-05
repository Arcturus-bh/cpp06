/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldalmas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 15:45:25 by aldalmas          #+#    #+#             */
/*   Updated: 2025/04/05 20:49:21 by aldalmas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

void checkChar(char c) {
    if (c >= 0 && c < 32)
        std::cout << "char: Non displayable" << std::endl;
    else if (c < 0 || c > 126)
        std::cout << "char: impossible" << std::endl;
    else
        std::cout << "char: " << c << std::endl;
}

void checkCharFDisplay(float converted) {
    char c = static_cast<int>(converted);
    if (c >= 0 && c < 32)
        std::cout << "char: Non displayable" << std::endl;
    else if (c < 0 || c > 126)
        std::cout << "char: impossible" << std::endl;
    else
        std::cout << "char: " << c << std::endl;
}

void checkCharDDisplay(double converted) {
    char c = static_cast<int>(converted);
    if (!std::isprint(c))
        std::cout << "char: Non displayable" << std::endl;
    else
        std::cout << "char: " << c << std::endl;
}

void printFloatDouble(float value) {
    if (!std::isinf(value)) 
    {
        std::cout << "float: " << static_cast<float>(value) << "f" << std::endl;
        std::cout << "double: " << value << std::endl;
        return;
    }
    if (value > 0)
    {
        std::cout << "float: +inff" << std::endl;
        std::cout << "double: +inf" << std::endl;
    }
    else if (value < 0)
    {
        std::cout << "float: -inff" << std::endl;
        std::cout << "double: -inf" << std::endl;
    }
}

void printDoubleFloat(double value) {
    if (!std::isinf(value)) 
    {
        std::cout << "float: " << static_cast<float>(value) << "f" << std::endl;
        std::cout << "double: " << value << std::endl;
        return;
    }
    if (value > 0)
    {
        std::cout << "float: +inff" << std::endl;
        std::cout << "double: +inf" << std::endl;
    }
    else if (value < 0)
    {
        std::cout << "float: -inff" << std::endl;
        std::cout << "double: -inf" << std::endl;
    }
}