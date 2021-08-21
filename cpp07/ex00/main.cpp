/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romanbtt <marvin@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 17:25:56 by romanbtt          #+#    #+#             */
/*   Updated: 2021/08/12 10:29:04 by romanbtt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

static void	separator( void )
{
	std::cout << "\033[1;31m-- -- -- -- -- -- -- -- -- -- -- -- -- --\033[0m";
	std::cout << std::endl;
}

int main( void )
{
	{
		int a = 2;
		int b = 3;

		::swap( a, b );
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
		std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	}
	separator();
	{
		std::string c = "chaine1";
		std::string d = "chaine2";

		::swap(c, d);
		std::cout << "c = " << c << ", d = " << d << std::endl;
		std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
		std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	}
	separator();
	{
		float e = 42.24f;
		float f = 24.42f;
		
		::swap(e, f);
		std::cout << "e = " << e << ", f = " << f << std::endl;
		std::cout << "min( e, f ) = " << ::min( e, f ) << std::endl;
		std::cout << "max( e, f ) = " << ::max( e, f ) << std::endl;
	}
	separator();
	{
		char g = 'g';
		char h = 'h';
		
		::swap(g, h);
		std::cout << "g = " << g << ", h = " << h << std::endl;
		std::cout << "min( g, h ) = " << ::min( g, h ) << std::endl;
		std::cout << "max( g, h ) = " << ::max( g, h ) << std::endl;
	}
	return 0;
}