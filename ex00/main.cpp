/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldalmas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 10:20:01 by aldalmas          #+#    #+#             */
/*   Updated: 2025/03/21 10:18:23 by aldalmas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int ac, char **av) 
{
    if (ac != 2) {
        std::cout << RED "ERROR - Only need one argument." << std::endl;
        return 1;
    }
    std::string to_convert = av[1];
    ScalarConverter::convert(to_convert);
   
    return 0;
}