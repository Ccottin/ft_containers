#ifndef STACK_HPP
# define STACK_HPP

namespace ft {

	template< class T, class Container = std::vector<T> > //change here
	class	stack {
		
		/**************/
		/*Member types*/
		/**************/

	typedef				Container					container_type;
	typedef typename	Container::value_type		value_type;
	typedef typename	Container::size_type		size_type;

		public :

	/**************/
	/*Constructors*/
	/**************/

			stack( const Container & ctnr = Container() );
			stack& operator=( const stack& other );
			/*operator = is implicitely declared should i keep it?*/
			~stack(void);
	
	/**********/
	/*utilites*/
	/**********/
			bool				empty(void) const;
			size_type			size(void) const;
			value_type &		top(void);
			const value_type &	top(void) const;
			
	/***********/
	/*modifiers*/
	/***********/

			void		push( const value_type& value );
			void		pop(void);

		protected :
			Container c;

	/**********************/
	/*non-member overloads*/
	/**********************/

	template< class E, class Contain >
	friend bool	operator==( const ft::stack< E, Contain > & lhs,
		const ft::stack< E, Contain > & rhs );
	
	template< class E, class Contain >
	friend bool operator!=( const ft::stack< E, Contain > & lhs,
		const ft::stack< E, Contain > & rhs );
	
	template< class E, class Contain  >
	friend bool operator<( const ft::stack< E, Contain >& lhs,
		const ft::stack< E, Contain > & rhs );
	
	template< class E, class Contain  >
	friend bool operator<=( const ft::stack< E ,Contain >& lhs,
		const ft::stack< E, Contain > & rhs );
	
	template< class E,  class Contain >
	friend bool operator>( const ft::stack< E ,Contain >& lhs,
		const ft::stack< E, Contain > & rhs );
	
	template< class E, class Contain >
	friend bool operator>=( const ft::stack<E ,Contain >& lhs,
		const ft::stack< E, Contain > & rhs );

	}; //class stack
}	//namespace

# include "stack.tpp"

#endif
