#ifndef TEST_HPP
# define TEST_HPP

# include "enable_if.hpp"
# include "is_integral.hpp"

void	test_raIterator(void);
void	test_is_integral(void);
void	reverse_iterator_testing(void);
void	pair_testing(void);
void	stack_testing(void);



template< class T >
typename ft::enable_if<!ft::is_integral<T>::value,bool>::type
	do_things (T t)
	{
		(void) t;
		std::cout << "its false" << std::endl;
		return (false);
		}


template< class T >
typename ft::enable_if<ft::is_integral<T>::value,bool>::type
	do_things (T t)
	{
		(void) t;
		std::cout << "it works" << std::endl;
		return (true);
		}

#endif
