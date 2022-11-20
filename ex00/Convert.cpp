/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaguiler <aaguiler@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 13:12:16 by aaguiler          #+#    #+#             */
/*   Updated: 2022/11/20 13:28:52 by aaguiler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert(void)
{
}

Convert::Convert(std::string const &str)
{
	_str = str;
	_isChar = false;
	_isInt = false;
	_isFloat = false;
	_isDouble = false;
	this.setType();
}

Convert::Convert(Convert const &obj)
{
	*this = obj;
}

Convert::~Convert(void)
{
}

Convert &Convert::operator=(Convert const &obj)
{
	if (this != &obj)
	{
		_str = obj._str;
		_value = obj._value;
		_int = obj._int;
		_float = obj._float;
		_double = obj._double;
		_char = obj._char;
		_isChar = obj._isChar;
		_isInt = obj._isInt;
		_isFloat = obj._isFloat;
		_isDouble = obj._isDouble;
	}
	return *this;
}

void Convert::setType()
{
	
}

void Convert::print()
{
	std::cout << "char: " << this->_char << std::endl;
	std::cout << "int: " << this->_int << std::endl;
	std::cout << "float: " << this->_float << std::endl;
	std::cout << "double: " << this->_double << std::endl;
}