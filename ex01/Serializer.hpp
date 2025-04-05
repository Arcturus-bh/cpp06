/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldalmas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 16:05:01 by aldalmas          #+#    #+#             */
/*   Updated: 2025/04/05 17:08:15 by aldalmas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stdint.h>
#include "Data.hpp"

class Serializer {
	private:
		Serializer();
		Serializer(const Serializer& o);
		~Serializer();
		
		Serializer& operator=(const Serializer&);
	public:
		static uintptr_t serialize(Data* ptr);		
		static Data* deserialize(uintptr_t raw);
};