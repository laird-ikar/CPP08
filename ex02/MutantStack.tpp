/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 07:55:58 by bguyot            #+#    #+#             */
/*   Updated: 2022/05/30 08:29:17 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

/***********************
*	Constructors & Destructor
***********************/

template <class T>
MutantStack<T>::MutantStack(void)
{
	return ;
}

template <class T>
MutantStack<T>::MutantStack(const MutantStack<T> &src)
{
	*this = src;
	return ;
}

template <class T>
MutantStack<T>::~MutantStack(void)
{
	return ;
}

/***********************
*	Assignation Operators
***********************/

template <class T>
MutantStack<T>	&MutantStack<T>::operator=(const MutantStack<T> &src)
{
	(void) src;
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
