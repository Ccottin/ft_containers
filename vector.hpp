/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccottin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 12:35:23 by ccottin           #+#    #+#             */
/*   Updated: 2023/01/09 13:54:48 by ccottin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTOR_HPP
# define VECTOR_HPP


/* ici on va commencer par les iterators pour ensuite creer les constructeurs d'un bloc*/

namespace ft {

	template< class T, class Allocator = std::allocator<T> > 
	class Vector {

		public:

		typedef				T									value_type;
		typedef				Allocator							allocator_type;
		typedef typename	allocator_type::reference			reference;
		typedef typename	allocator_type::const_reference		const_reference;
		typedef typename	allocator_type::pointer				pointer;
		typedef typename	allocator_type::const_pointer		const_pointer;
		/* defnir tes iterators
		   const_iterator
		   reverse_iterator
		   const_reverse_iterators */
	//	typedef typename	ft::iterator_traits<iterator>::difference_type	difference_type;
	//	typedef typename	ft::iterator_traits<iterator>::size_type	size_type;

	};

}

# include "vector.tpp"

#endif
