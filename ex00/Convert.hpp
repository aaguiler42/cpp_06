/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaguiler <aaguiler@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 13:10:37 by aaguiler          #+#    #+#             */
/*   Updated: 2022/11/20 13:11:48 by aaguiler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <iostream>
# include <string>
# include <sstream>
# include <iomanip>
# include <cmath>

class Convert
{
public:
	Convert(void);
	Convert(std::string const &str);
	Convert(Convert const &obj);
	~Convert(void);

	Convert &operator=(Convert const &obj);

	void    print(void);

private:
	std::string _str;
	double      _value;
	int         _int;
	float       _float;
	double      _double;
	char        _char;
	bool        _isChar;
	bool        _isInt;
	bool        _isFloat;
	bool        _isDouble;
};

#endif
