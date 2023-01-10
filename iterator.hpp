/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iterator.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccottin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 13:47:47 by ccottin           #+#    #+#             */
/*   Updated: 2023/01/10 15:57:51 by ccottin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITERATOR_HPP
# define ITERATOR_HPP

# include <cstddef>

namespace ft {

	struct	random_access_iterator_tag { };

	template< class Category, class T, class Distance = std::ptrdiff_t,
		class Pointer = T*, class Reference = T& > 
	struct	iterator
	{
		typedef				Distance	difference_type;
		typedef				T			value_type;
		typedef				Pointer		pointer;
		typedef				Reference	reference;
		typedef				Category	iterator_category;
	};

}

#endif
