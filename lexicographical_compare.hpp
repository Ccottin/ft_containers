/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lexicographical_compare.hpp                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccottin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 15:09:43 by ccottin           #+#    #+#             */
/*   Updated: 2023/01/07 16:48:04 by ccottin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LEXICOGRAPHICAL_COMPARE_HPP
# define LEXICOGRAPHICAL_COMPARE_HPP

namespace ft {

	template< class InputIt1, class InputIt2 >
	bool	lexicographical_compare( InputIt1 first1, InputIt1 last1,
				InputIt2 first2, InputIt2 last2 )
	{
		while (first1 != last1)
		{
			if (*first2 < *first1 || first2 == last2)
				return (false);
			++first1;
			++first2;
		}
		return (first2 != last2);
	}
	
	template< class InputIt1, class InputIt2, class Compare >
	bool	lexicographical_compare( InputIt1 first1, InputIt1 last1,
				InputIt2 first2, InputIt2 last2, Compare comp )
	{
		while (first1 != last1)
		{
			if (comp(*first2, *first1) || first2 == last2)
				return (false);
			++first1;
			++first2;
		}
		return (first2 != last2);
	}
}

#endif
