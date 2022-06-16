/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 15:20:55 by bguyot            #+#    #+#             */
/*   Updated: 2022/06/16 08:12:50 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <vector>
#include <iostream>

int main(void)
{
	try
	{
		Span sp = Span(10);
		int tab[] = {5, 7, 9, 6, 10};

		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		sp.addNumber(tab, tab + 5);

		std::cout << "shortest span of the set {6, 3, 17, 9, 11, 5, 7, 9, 6, 10} : " << sp.shortestSpan() << std::endl;
		std::cout << "shortest span of the set {6, 3, 17, 9, 11, 5, 7, 9, 6, 10} : " << sp.longestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Span sp = Span(9);
		int tab[] = {5, 7, 9, 6, 10};

		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		sp.addNumber(tab, tab + 5);

		std::cout << "shortest span of the set {6, 3, 17, 9, 11, 5, 7, 9, 6, 10} : " << sp.shortestSpan() << std::endl;
		std::cout << "shortest span of the set {6, 3, 17, 9, 11, 5, 7, 9, 6, 10} : " << sp.longestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Span sp = Span(4);
		int tab[] = {5, 7, 9, 6, 10};

		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		sp.addNumber(tab, tab + 5);

		std::cout << "shortest span of the set {6, 3, 17, 9, 11, 5, 7, 9, 6, 10} : " << sp.shortestSpan() << std::endl;
		std::cout << "shortest span of the set {6, 3, 17, 9, 11, 5, 7, 9, 6, 10} : " << sp.longestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Span sp = Span(1);

		sp.addNumber(6);

		std::cout << "shortest span of the set {6} : " << sp.shortestSpan() << std::endl;
		std::cout << "shortest span of the set {6} : " << sp.longestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
