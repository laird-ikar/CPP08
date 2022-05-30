/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 07:56:03 by bguyot            #+#    #+#             */
/*   Updated: 2022/05/30 08:51:19 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <string>
#include <stack>

template <class T>
class MutantStack : public std::stack<T>
{
	private:

	protected:

	public:
		typedef typename std::stack<T>::container_type::iterator iterator;
		MutantStack<T>(void);
		MutantStack<T>(const MutantStack<T> &src);
		~MutantStack<T>(void);

		MutantStack<T>	&operator=(const MutantStack<T> &src);

		iterator	begin(void);
		iterator	end(void);
};

#endif
