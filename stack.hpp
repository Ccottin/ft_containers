#ifndef STACK_HPP
# define STACK_HPP

template< class T, class Container >
	class	stack {
		
		public :
			value_type	<T>;
			size_type	size_t;

	/*Constructors*/

			stack(const stack & ref);
			stack(const Container & ctnr = Container() );
		
		protected :
			Container c;
	};

# include "stack.tpp"

#endif
