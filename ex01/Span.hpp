/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 15:20:59 by bguyot            #+#    #+#             */
/*   Updated: 2022/05/27 16:35:53 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <string>
#include <algorithm>
#include <list>

class Span
{
	private:
		unsigned int		N;
		unsigned int		nb_elem;
		std::list<int>		stock;

	public:
		Span(void);
		Span(unsigned int n);
		Span(const Span &src);
		~Span(void);

		Span	&operator=(const Span &src);

		void			addNumber(int n);
		// void			addLotOfNumbers(...);
		unsigned int	shortestSpan(void);
		unsigned int	longestSpan(void);
};

#endif
