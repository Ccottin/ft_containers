#ifndef REVERSE_ITERATOR_TPP
# define REVERSE_ITERATOR_TPP

# include "iterator_traits.hpp"
# include "reverse_iterator.hpp"

namespace ft {
	

	/* constructors */
	template< class Iter >
	reverse_iterator<Iter>::reverse_iterator(void) { }

	template< class Iter >
	reverse_iterator<Iter>::reverse_iterator(iterator_type x)
	{
		this->current = x;
	}

	template< class Iter >
	template< class U >
	reverse_iterator<Iter>::reverse_iterator(const reverse_iterator<U> & other)
	{
		this = other;
	}

	/*destructor*/
	template< class Iter >
	reverse_iterator<Iter>::~reverse_iterator(void) { }

	/*member functions*/
	template< class Iter >
	Iter	reverse_iterator<Iter>::base(void) const  
	{
		iterator_type	ret;

		ret = this->current;
		return (ret);
	}

	/*operator Overload*/
	template< class Iter >
	reverse_iterator<Iter>	&reverse_iterator<Iter>::operator=(reverse_iterator const &ref)
	{
		if (this != &ref)
		{
			this->current = ref.base();
		}
		return (*this);
	}
	
	template< class Iter >
	reverse_iterator<Iter>	&reverse_iterator<Iter>::operator--(int)
	{
		reverse_iterator	ret;

		this->current++;
		ret = *this;
		return (ret);
	}

	template< class Iter >
	reverse_iterator<Iter>::reference	&reverse_iterator<Iter>::operator*(void) const
	{
		iterator_type	tmp;

		tmp = current;
		return (--tmp);
	}

	
//	template< class Iter >
//	reverse_iterator<Iter>::pointer operator->(void) const
//	{
//	
//	}
}

#endif
