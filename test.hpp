#ifndef TEST_HPP
# define TEST_HPP

# include <type_traits>

template< class T >
typename ft::enable_if<std::is_integral<T>::value,bool>::type
	do_things (T t)
	{
		(void) t;
		std::cout << "it works" << std::endl;
		return (true);
		}

#endif
