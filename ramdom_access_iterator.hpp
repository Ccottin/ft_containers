/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ramdom_access_iterator.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccottin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 13:00:18 by ccottin           #+#    #+#             */
/*   Updated: 2023/01/10 15:13:35 by ccottin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RANDOM_ACCESS_ITERATOR_HPP
# define RANDOM_ACCESS_ITERATOR_HPP

# include "iterator.hpp"

namespace ft {

		template< typename T >
		class	random_access_iterator :
					public iterator< ramdom_access_iterator_tag, T>
		{
		
			public :

				typedef typename
					iterator< ramdom_access_iterator_tag, T>::difference_type
					difference_type;
				typedef typename
					iterator< ramdom_access_iterator_tag, T>::value_type
					value_type;
				typedef typename
					iterator< ramdom_access_iterator_tag, T>Pointer::pointer
					pointer;
				typedef typename
					iterator< ramdom_access_iterator_tag, T>::reference	
					reference;
				typedef typename
					iterator< ramdom_access_iterator_tag, T>iterator_category
					iterator_category;


			random_access_iterator<T>(void) { }
			random_access_iterator<T>(random_access_iterator<T> & ref)
			{ *this = ref }
			random_access_iterator<T>	&operator=(random_access_iterator<T> & ref)
			{ 
				if (*this != ref) 
					*this = ref;
				return (this);
			}

			
			

		};

}

#endif
