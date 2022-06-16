/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 15:20:59 by bguyot            #+#    #+#             */
/*   Updated: 2022/06/16 08:01:28 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <string>
#include <iterator>
#include <algorithm>
#include <list>

class Span
{
	private:
		unsigned int		N;
		unsigned int		nb_elem;
		std::list<int>		stock;

		class rangeTooBig: public std::exception
		{
		public:
			const char* what() const throw();
		};

		class alreadyFull: public std::exception
		{
		public:
			const char* what() const throw();
		};

		class setTooSmall: public std::exception
		{
		public:
			const char* what() const throw();
		};

	public:
		Span(void);
		Span(unsigned int n);
		Span(const Span &src);
		~Span(void);

		Span	&operator=(const Span &src);

		void			addNumber(int n);
		template<typename iterator>
		void			addNumber(iterator begin, iterator last)
		{
				std::list<int>::iterator elem;

				if (this->nb_elem + std::distance(begin, last) > this->N)
					throw rangeTooBig();
				elem = this->stock.begin();
				std::sort(begin, last);
				for (unsigned int i = 0; i < this->nb_elem; i++)
				{
					if (*elem >= *begin)
						break;
					elem++;
				}
				this->stock.insert(elem, begin, last);
				this->nb_elem += std::distance(begin, last);
		}
		unsigned int	shortestSpan(void);
		unsigned int	longestSpan(void);
};

#endif
