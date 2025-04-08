/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldalmas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 15:45:25 by aldalmas          #+#    #+#             */
/*   Updated: 2025/04/08 23:58:52 by aldalmas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

void checkInt(std::string& litteral) {
	checkChar(litteral);
	if (litteral.length() > 12) {
		std::cout << "int: impossible" << std::endl;
		return;
	}

	char *endPtr;
	long nb = strtol(litteral.c_str(), &endPtr, 10);
	if (nb < -2147483648 || nb > 2147483647)
	{
		std::cout << "int: impossible" << std::endl;
		return;
	}
	if (*endPtr == '\0')
	    return displayInteger(static_cast<int>(nb));
}

void checkChar(std::string& litteral) {
    if (litteral.length() != 1) {
        std::cout << "char: impossible" << std::endl;
        return;
    }

    char c = litteral[0];
    if (c >= 0 && c < 32)
        std::cout << "char: Non displayable" << std::endl;
    else if (c < 0 || c > 126)
        std::cout << "char: impossible" << std::endl;
    else
        std::cout << "char: '" << c << "'" << std::endl;
}

// void checkInt(int value) {
// 	if (value > std::numeric_limits<int>::max()
// 		|| value < std::numeric_limits<int>::min())
// 		std::cout << "int: impossible" << std::endl;
// 	else
// 		std::cout << "int: " << static_cast<int>(value) << std::endl;
// }

void checkFloat(float value) {
	if (value > std::numeric_limits<float>::max()
		|| value <std::numeric_limits<float>::min())
		std::cout << "float: impossible" << std::endl;
	else
		std::cout << "float: " << static_cast<float>(value) << ".f" << std::endl;
}

void checkDouble(double value) {
	if (value > std::numeric_limits<double>::max()
		|| value <std::numeric_limits<double>::min())
		std::cout << "double: impossible" << std::endl;
	else
		std::cout << "double: " << static_cast<double>(value) << std::endl;
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