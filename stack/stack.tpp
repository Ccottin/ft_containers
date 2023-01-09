#ifndef STACK_TPP
# define STACK_TPP

# include <vector>

namespace ft {

	template< class T, class Container >
	stack<T, Container>::stack( const Container & ctnr )
	{
		this->c = ctnr;
	}

	template< class T, class Container > //keepit or nooooooooo
	stack<T, Container>& stack<T, Container>::operator=( const stack& other )
	{
		this->c = other.c;
		return (*this);
	}

	template< class T, class Container >
	stack<T, Container>::~stack( void )
	{ }

		/**********/
		/*utilites*/
		/**********/

	template< class T, class Container >
	bool									stack<T, Container>::empty(void) const
	{
		return (c.empty());
	}

	template< class T, class Container >
	typename Container::size_type  			stack<T, Container>::size(void) const
	{
		return (c.size());
	}
	
	template< class T, class Container >
	typename Container::value_type &		stack<T, Container>::top(void)
	{
		return (c.back());
	}
	template< class T, class Container >
	const typename Container::value_type &	stack<T, Container>::top(void) const
	{
		return (c.back());
	}

	template< class T, class Container >
	void		stack<T, Container>::push(const value_type& value)
	{
		c.push_back(value);
	}

	template< class T, class Container >
	void		stack<T, Container>::pop(void)
	{
		c.pop_back();
	}
	
	/**********************/
	/*non-member overloads*/
	/**********************/

	template< class E, class Contain >
	bool	operator==( const ft::stack< E, Contain > & lhs,
		const ft::stack< E, Contain > & rhs )
	{
		return (lhs.c == rhs.c);
	}

	template< class E, class Contain >
	bool	operator!=( const ft::stack< E, Contain > & lhs,
		const ft::stack< E, Contain > & rhs )
	{
		return (lhs.c != rhs.c);
	}

	template< class E , class Contain  >
	bool operator<( const ft::stack< E, Contain >& lhs,
		const ft::stack< E, Contain > & rhs )
	{
		return (lhs.c < rhs.c);
	}

	template< class E, class Contain >
	bool operator<=( const ft::stack< E, Contain >& lhs,
		const ft::stack<E, Contain > & rhs )
	{
		return (lhs.c <= rhs.c);
	}
	
	template< class E, class Contain >
	bool operator>( const ft::stack< E, Contain >& lhs,
		const ft::stack< E, Contain > & rhs )
	{
		return (lhs.c > rhs.c);
	}

	template< class E, class Contain >
	bool operator>=( const ft::stack<E, Contain >& lhs,
		const ft::stack< E, Contain > & rhs )
	{
		return (lhs.c >= rhs.c);
	}
}

#endif
