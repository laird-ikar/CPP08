/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 14:26:58 by bguyot            #+#    #+#             */
/*   Updated: 2022/05/27 15:09:17 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <algorithm>

template <class T>
int	easyfind(T &container, int needle)
{
	typename T::iterator	i;

	i = find(container.begin(), container.end(), needle);
	if (i == container.end())
		throw std::exception();
	return *i;
}
