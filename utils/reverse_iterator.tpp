#ifndef REVERSE_ITERATOR_TPP
# define REVERSE_ITERATOR_TPP

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

	/*//operator Overload\\*/
	
	template< class Iter >
	reverse_iterator<Iter>	&reverse_iterator<Iter>::operator=(reverse_iterator const &ref)
	{
		if (this != &ref)
		{
			this->current = ref.base();
		}
		return (*this);
	}
	
	/*decrement*/
	template< class Iter >
	reverse_iterator<Iter>	&reverse_iterator<Iter>::operator--(void)
	{
		++(this->current);
		return (*this);
	}
	template< class Iter >
	reverse_iterator<Iter>	reverse_iterator<Iter>::operator--(int)
	{
		reverse_iterator	ret;

		ret = *this;
		--(*this);
		return (ret);
	}

	/*increment*/
	template< class Iter >
	reverse_iterator<Iter>	&reverse_iterator<Iter>::operator++(void)
	{
		--(this->current);
		return (*this);
	}
	template< class Iter >
	reverse_iterator<Iter>	reverse_iterator<Iter>::operator++(int)
	{
		reverse_iterator	ret;

		ret = *this;
		++(*this);
		return (ret);
	}

	/*Accessors*/
	template< class Iter >
	typename ft::iterator_traits<Iter>::reference
		reverse_iterator<Iter>::operator*(void) const
	{
		Iter	tmp;

		tmp = current;
		--tmp;
		return (*tmp);
	}

	template< class Iter >
	typename ft::iterator_traits<Iter>::pointer
		reverse_iterator<Iter>::operator->(void) const
	{
		return (&(operator*()));
	}

	template< class Iter >
	typename ft::iterator_traits<Iter>::reference
		reverse_iterator<Iter>::operator[](difference_type n) const
	{
		return(base()[-n - 1]);
	}

	/*maths operators*/
	template< class Iter >
	reverse_iterator<Iter>
		reverse_iterator<Iter>::operator+(difference_type n) const
	{
		return (reverse_iterator(base() - n));
	}

	template< class Iter >
	reverse_iterator<Iter>
		reverse_iterator<Iter>::operator-(difference_type n) const
	{
		return (reverse_iterator(base() + n));
	}

	template< class Iter>
	reverse_iterator<Iter>
		&reverse_iterator<Iter>::operator+=(difference_type n)
	{
		current = current - n;
		return (*this);
	}

	template< class Iter>
	reverse_iterator<Iter>
		&reverse_iterator<Iter>::operator-=(difference_type n)
	{
		current = current + n;
		return (*this);
	}
	/*non_member functions*/
	template< class Iterator1, class Iterator2 >
	bool
		operator==( const ft::reverse_iterator<Iterator1>& left,
		const ft::reverse_iterator<Iterator2>& right )
	{
		return (left.base() == right.base());
	}

	template< class Iterator1, class Iterator2 >
	bool
		operator!=( const ft::reverse_iterator<Iterator1>& left,
		const ft::reverse_iterator<Iterator2>& right )
	{
		return (left.base() != right.base());
	}

	template< class Iterator1, class Iterator2 >
	bool
		operator<( const ft::reverse_iterator<Iterator1>& left,
		const ft::reverse_iterator<Iterator2>& right )
	{
		return (left.base() > right.base());
	}

	template< class Iterator1, class Iterator2 >
	bool
		operator>( const ft::reverse_iterator<Iterator1>& left,
		const ft::reverse_iterator<Iterator2>& right )
	{
		return (left.base() < right.base());
	}

	template< class Iterator1, class Iterator2 >
	bool
		operator<=( const ft::reverse_iterator<Iterator1>& left,
		const ft::reverse_iterator<Iterator2>& right )
	{
		return (left.base() >= right.base());
	}

	template< class Iterator1, class Iterator2 >
	bool
		operator>=( const ft::reverse_iterator<Iterator1>& left,
		const ft::reverse_iterator<Iterator2>& right )
	{
		return (left.base() <= right.base());
	}

}

#endif
