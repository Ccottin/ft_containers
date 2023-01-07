/* **************************************************************************** */
/*                                                                              */
/*                                                         :::      ::::::::    */
/*    pair.tpp                                           :+:      :+:    :+:    */
/*                                                     +:+ +:+         +:+      */
/*    By: ccottin <marvin@42.fr>                     +#+  +:+       +#+         */
/*                                                 +#+#+#+#+#+   +#+            */
/*    Created: 2023/01/07 14:28:39 by ccottin           #+#    #+#              */
/*    Updated: 2023/01/07 15:06:58 by ccottin          ###   ########.fr        */
/*                                                                              */
/* **************************************************************************** */

#ifndef PAIR_TPP
# define PAIR_TPP

# include "lexicographical_compare.hpp"

namespace ft {

	template< class T1, class T2 >
	pair< T1, T2 >::pair(void)
	{ }

	template< class T1, class T2 >
	template< class U, class V >
	pair< T1, T2 >::pair(const pair< U, V > & pr)
	{
		this->first = pr.first;
		this->second = pr.second;
	}

	template< class T1, class T2 >
	pair< T1, T2 >::pair(const first_type & a, const second_type & b)
	{
		this->first = a;
		this->second = b;
	}

/*	pair & pair::operator=(const pair & pr) should i keep or remove? 
	{
		if (this != &pr)
		{
			this->first = pr.first;
			this->second = pr.second;
		}
		return (*this);
	}*/
	template< class T1, class T2 >
	ft::pair<T1, T2>	make_pair(T1 t, T2 u)
	{
		return (ft::pair<T1, T2>::pair(t, u));
	}

	template< class T1, class T2 >
	bool operator==( const ft::pair<T1, T2>& lhs, const ft::pair<T1, T2>& rhs )
	{
		return (lhs.first == rhs.first && lhs.second == rhs.second) ?
			true : false;
	}

	template< class T1, class T2 >
	bool operator!=( const ft::pair<T1, T2>& lhs, const ft::pair<T1, T2>& rhs )
	{
		return (!(lhs == rhs));
	}

	template< class T1, class T2 >
	bool operator<( const ft::pair<T1, T2>& lhs, const ft::pair<T1, T2>& rhs )
	{
		return (lhs.first < rhs.first && lhs.second < rhs.second) ?
			true : false;
	}
	
	template< class T1, class T2 >
	bool operator>( const ft::pair<T1, T2>& lhs, const ft::pair<T1, T2>& rhs )
	{
		return ( rhs < lhs );
	}

	template< class T1, class T2 >
	bool operator<=( const ft::pair<T1, T2>& lhs, const ft::pair<T1, T2>& rhs )
	{
		return (!(rhs < lhs));
	}
	
	template< class T1, class T2 >
	bool operator>=( const ft::pair<T1, T2>& lhs, const ft::pair<T1, T2>& rhs )
	{
		return (!(lhs < rhs));
	}

}

#endif
