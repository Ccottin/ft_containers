/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccottin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 12:35:23 by ccottin           #+#    #+#             */
/*   Updated: 2023/01/11 20:39:34 by ccottin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTOR_HPP
# define VECTOR_HPP


/* ici on va commencer par les iterators pour ensuite creer les constructeurs d'un bloc*/

namespace ft {

	template< class T, class Allocator = std::allocator<T> > 
	class vector {

		public:

			typedef				T									value_type;
			typedef				Allocator							allocator_type;
			typedef typename	allocator_type::reference			reference;
			typedef typename	allocator_type::const_reference		const_reference;
			typedef typename	allocator_type::pointer				pointer;
			typedef typename	allocator_type::const_pointer		const_pointer;
			typedef typename	std::size_t							size_type;
			
			/***************/
			/*iterators def*/
			/***************/

			typedef typename	ft::random_access_iterator<T>
								iterator;

			typedef typename	const ft::random_access_iterator<T>
								const_iterator;
			
			typedef	typename	ft::reverse_iterator<iterator<T> >
								reverse_iterator;
			
			typedef	typename	const ft::reverse_iterator<iterator<T> >
								reverse_iterator;
			
			typedef typename	ft::iterator_traits<iterator>::difference_type
								difference_type;
			


		/**************/
		/*constructors*/
		/**************/


		vector(void) : _nelem(0), _end(0)
		{
			_array = std::allocator<T>::allocate(_nelem * sizeof);
		}
		
		explicit vector( const Allocator & alloc ) : _alloc(alloc), _nelem(0), _end(0)
		{ 
			_array = std::allocator<T>::allocate(_nelem);
		}

		explicit vector( size_type count, const T& value = T(),
				const Allocator& alloc = Allocator()) : _nelem(count), _end(0);
		{
			_array = std::allocator<T>::allocate(_nelem);//surement a opti
			while (_end < _nelem)
			{
				std::allocator<T>::construct(_end, value);
				++_end;
			}
		}

		virtual ~vector(void)
		{
			while (_nelem > 0)
			{
				std::allocator<T>::destroy(_end);
				--_end;
				--_nelem;
			}
/*
			while (_end)
			{
				std::allocator<T>::destroy(_end);
				--_end;
			} might work, might fail */
			deallocate(_array, _nelem);
		}

		private :
			
			allocator_type	_alloc;
			value_type	*	_array;
			value_type	&	_end;
			size_t			_nelem;
	};

}

# include "vector.tpp"

#endif
