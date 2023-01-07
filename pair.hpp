/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pair.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccottin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 13:16:36 by ccottin           #+#    #+#             */
/*   Updated: 2023/01/07 19:39:09 by ccottin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PAIR_HPP
# define PAIR_HPP

namespace ft {

	template< class T1, class T2 >
	struct	pair	{

		typedef		T1	first_type;
		typedef		T2	second_type;

		first_type			first;
		second_type			second;

	/**************/
	/*constructors*/
	/**************/

		pair(void);
		template< class U, class V >
		pair(const pair< U, V > & pr);
		pair(const first_type& a, const second_type& b);
	
		pair & operator=(const pair & pr) = default;
	};
	/***********/
	/*make_pair*/
	/***********/

	template< class T1, class T2 >
	ft::pair<T1, T2>	make_pair(T1 t, T2 u);
	
	/**********************/
	/*Non-member operators*/
	/**********************/


	template< class T1, class T2 >
	bool operator==( const ft::pair<T1, T2>& lhs, const ft::pair<T1, T2>& rhs );
	template< class T1, class T2 >
	bool operator!=( const ft::pair<T1, T2>& lhs, const ft::pair<T1, T2>& rhs );
	template< class T1, class T2 >
	bool operator<( const ft::pair<T1, T2>& lhs, const ft::pair<T1, T2>& rhs );
	template< class T1, class T2 >
	bool operator>( const ft::pair<T1, T2>& lhs, const ft::pair<T1, T2>& rhs );
	template< class T1, class T2 >
	bool operator<=( const ft::pair<T1, T2>& lhs, const ft::pair<T1, T2>& rhs );
	template< class T1, class T2 >
	bool operator>=( const ft::pair<T1, T2>& lhs, const ft::pair<T1, T2>& rhs );

}

# include "pair.tpp"

#endif
