/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldalmas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 10:20:58 by aldalmas          #+#    #+#             */
/*   Updated: 2025/04/04 15:44:07 by aldalmas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# define RED    "\x1b[31m"
# define GREEN   "\x1b[32m"
# define CYAN    "\x1b[36m"
# define RESET   "\x1b[0m"

#include <iostream>
#include <cstring>
#include <stdlib.h>
#include <limits.h>
#include <cmath>
#include <iomanip>

class ScalarConverter {
    private:
    // Constructors & Destructors
        ScalarConverter();
        ScalarConverter(const ScalarConverter& other);
        ~ScalarConverter();
    
    // overload
        ScalarConverter& operator=(const ScalarConverter&);
    
    public:
        // methods
        static void convert(std::string& litteral);
};

void displayNan(void);
void displayInf(void);
void displayNegInf(void);
void displayChar(const char* converted);
void displayInteger(int converted);
void displayFloat(float converted);
void displayDouble(double converted);
void checkCharFDisplay(float converted);
void checkCharDDisplay(double converted);
void printFloatDouble(float value);
void printDoubleFloat(double value);