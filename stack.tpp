#ifndef STACK_TPP
# define STACK_TPP

# include "ft_containers.hpp"

namespace ft {
	template< class T, class Container >
	stack::stack ( const Container& ctnr = Containter() )
	{
		this->c = ctnr;
	}
}

#endif
