/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 15:20:57 by bguyot            #+#    #+#             */
/*   Updated: 2022/06/16 07:58:29 by bguyot           ###   ########.fr       */
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
	std::list<int>::iterator elem;

	if (this->nb_elem >= this->N)
		throw alreadyFull();
	elem = this->stock.begin();
	for (unsigned int i = 0; i < this->nb_elem; i++)
	{
		if (*elem >= n)
			break;
		elem++;
	}
	this->stock.insert(elem, n);
	this->nb_elem++;
}

unsigned int	Span::shortestSpan(void)
{
	unsigned res = 4294967295;
	std::list<int>::iterator first = this->stock.begin();

	if (this->nb_elem <= 1)
		throw setTooSmall();
	for (size_t i = 0; i < this->nb_elem; i++)
	{
		std::list<int>::iterator old = first++;
		// std::cout << *old << std::endl;
		if ((unsigned) *first - *old <= res)
			res = abs(*first - *old);
	}
	return (res);
}

unsigned int	Span::longestSpan(void)
{
	if (this->nb_elem <= 1)
		throw setTooSmall();
	std::list<int>::iterator end = this->stock.begin();
	std::advance(end, this->nb_elem - 1);
	return (*end - *this->stock.begin());
}

/***********************
*	Exceptions
***********************/

const char* Span::rangeTooBig::what() const throw()
{
	return "Span::rangeTooBig";
}

const char* Span::alreadyFull::what() const throw()
{
	return "Span::alreadyFull";
}

const char* Span::setTooSmall::what() const throw()
{
	return "Span::setTooSmall";
}
