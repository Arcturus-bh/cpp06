/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldalmas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 10:20:58 by aldalmas          #+#    #+#             */
/*   Updated: 2025/04/03 14:05:47 by aldalmas         ###   ########.fr       */
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
void checkFloatDisplay(float converted);
void displayDouble(double converted);
void checkDoubleDisplay(double converted);
