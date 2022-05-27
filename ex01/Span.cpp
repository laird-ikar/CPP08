/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 15:20:57 by bguyot            #+#    #+#             */
/*   Updated: 2022/05/27 16:47:08 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

/***********************
*	Constructors & Destructor
***********************/

Span::Span(void)
{
	this->N = 0;
	this->nb_elem = 0;
	this->stock = std::list<int>(0);
	return ;
}

Span::Span(unsigned int n)
{
	this->N = n;
	this->nb_elem = 0;
	this->stock = std::list<int>(n);
}

Span::Span(const Span &src)
{
	*this = src;
	return ;
}

Span::~Span(void)
{
	return ;
}

/***********************
*	Assignation Operators
***********************/

Span	&Span::operator=(const Span &src)
{
	this->stock = src.stock;
	this->N = src.N;
	this->nb_elem = src.nb_elem;
	return (*this);
}

/***********************
*	Boolean Operators
***********************/

/***********************
*	Arithmetic Operators
***********************/

/***********************
*	Stream Operators
***********************/

/***********************
*	Getter & Setters
***********************/

/***********************
*	Methods
***********************/

void	Span::addNumber(int n)
{
	if (this->nb_elem >= this->N)
		throw std::exception();
	this->stock.insert(upper_bound(this->stock.begin(), this->stock.end(), n), n);
	this->nb_elem++;
}

unsigned int	Span::shortestSpan(void)
{
	unsigned res = 4294967295;
	std::list<int>::iterator first = this->stock.begin();

	if (this->nb_elem <= 1)
		throw std::exception();
	for (size_t i = 0; i < this->stock.size() - 1; i++)
	{
		std::list<int>::iterator old = first++;
		std::cout << *old << std::endl;
	}
	return (res);
}

unsigned int	Span::longestSpan(void)
{
	if (this->nb_elem <= 1)
		throw std::exception();
	return (*this->stock.end() - *this->stock.begin());
}
