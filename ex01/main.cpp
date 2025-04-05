/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldalmas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 15:47:34 by aldalmas          #+#    #+#             */
/*   Updated: 2025/04/05 17:26:58 by aldalmas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"
#include "Serializer.hpp"

int main() {
    Data d;
    Data* a;
    uintptr_t b;

    d.str = "coucou";
    std::cout << "str in d: " << d.str << std::endl;
    std::cout << "d address: " << &d << std::endl;

    b = Serializer::serialize(&d);
    std::cout << "d address serialized: " << b << std::endl;

    a = Serializer::deserialize(b);
    std::cout << "d address deserialized: " << a << std::endl;

    a->str = "Bonjour";
    std::cout << "str in a: " << a->str << std::endl;
    std::cout << "str in d: " << d.str << std::endl;

    return 0;
}