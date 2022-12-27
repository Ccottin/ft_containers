#ifndef ITERATOR_TRAITS_HPP
# define ITERATOR_TRAITS_HPP

namespace ft {
	template< class Iter >
	struct iterator_traits {
		using Iter::difference_type;
		using Iter::value_type;
		using Iter::pointer;
		using Iter::reference;
		using Iter::iterator_category;
	};
}

#endif
