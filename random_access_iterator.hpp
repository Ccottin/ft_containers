/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   random_access_iterator.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccottin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 13:00:18 by ccottin           #+#    #+#             */
/*   Updated: 2023/01/10 21:44:16 by ccottin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RANDOM_ACCESS_ITERATOR_HPP
# define RANDOM_ACCESS_ITERATOR_HPP

# include "iterator.hpp"
/**HOMEWORK IN VILLEPOT TRAIN == .TPP THIS SHIT**/
namespace ft {

		template< typename T >
		class	random_access_iterator :
					public iterator< random_access_iterator_tag, T>
		{
			public :

				typedef typename
					iterator< random_access_iterator_tag, T >::difference_type
					difference_type;
				typedef typename
					iterator< random_access_iterator_tag, T >::value_type
					value_type;
				typedef typename
					iterator< random_access_iterator_tag, T >::pointer
					pointer;
				typedef typename
					iterator< random_access_iterator_tag, T >::reference	
					reference;
				typedef typename
					iterator< random_access_iterator_tag, T >::iterator_category
					iterator_category;

		/**************/
		/*constructors*/
		/**************/
		
			random_access_iterator<T>(void) { }
			random_access_iterator<T>(const random_access_iterator<T> & ref)
			{ *this = ref; }
			random_access_iterator<T>	&operator=(const random_access_iterator<T> & ref)
			{ 
				if (this != &ref) 
					this->_ptr = &(*ref._ptr);
				return (*this);
			}
			virtual ~random_access_iterator<T>(void) { }

	
		/*******************/
		/*operator overload*/
		/*******************/

			value_type					&operator*(void) const {
				return (*_ptr); }
			
			value_type					*operator->(void) const {
				return (_ptr); }

			/*for mutable iterator == wtf? not that sure tho*/
			value_type					operator=(value_type t) {
				*_ptr = t;
				return (*_ptr); }

		/*************************/
		/*random-access operators*/
		/*************************/
		
			random_access_iterator<T>	&operator+=(const difference_type n) {
				
				difference_type	m = n;
				
				if	(m >= 0)
				{
					while (m > 0) 
					{
						--m;
						++(*this);
					}
				}
				else
				{
					while (m < 0)
					{
						++m;
						--(*this);
					}
				}
				return (*this);
			}

			random_access_iterator<T>	&operator-=(const difference_type n) {
				return (*this += -n);
			}

			random_access_iterator<T>	operator+(const difference_type n) const {
				random_access_iterator<T> temp = *this;
				return (temp += n);
			}
			
			random_access_iterator<T>	operator-(const difference_type n) const {
				random_access_iterator<T> temp = *this;
				return (temp -= n);
			}
			

		/*********************/
		/*increment-decrement*/
		/*********************/

			random_access_iterator<T>	&operator++(void) {
				++_ptr;
				return (*this);
			}

			random_access_iterator<T>	operator++(int) {
				random_access_iterator<T> temp = *this;

				++_ptr;
				return (temp);
			}
	
			random_access_iterator<T>	&operator--(void) {
				--_ptr;
				return (*this);
			}

			random_access_iterator<T>	operator--(int) {
				random_access_iterator<T> temp = *this;

				--_ptr;
				return (temp);
			}

		/*	value_type					operator++(int) {
				value_type	x = *this;
				++this;
				return (x); not sure this is useful
			}*/


		/************************/
		/*protected actual value*/
		/************************/
			
		//remove cometary	protected :
				pointer	_ptr;

		/*********************/
		/*non-member overload*/
		/*********************/

			public :
				template< class E >
				friend bool	operator==(const ft::random_access_iterator<E> & lhs,
					const ft::random_access_iterator<E> & rhs)
				{
					return (lhs._ptr == rhs._ptr) ? true : false;
				}

				template< class E >
				friend bool	operator!=(const ft::random_access_iterator<E> & lhs,
					const ft::random_access_iterator<E> & rhs)
				{
					return (!(lhs == rhs)) ? true : false;
				}

	
		}; //class
}//namespace

#endif
