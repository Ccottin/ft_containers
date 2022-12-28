#include "ft_containers.hpp"
#include "iterator_traits.hpp"
#include "reverse_iterator.hpp"
#include <iterator>
#include <list>
#include <iostream>
#include <typeinfo>

int	main(  )
{
	std::list<int> list;
	list.push_back(1);
	list.push_back(3);
	list.push_back(2);
	std::list<int>::iterator it = list.end();
//	std::list<int>::iterator ite = list.end();

	ft::reverse_iterator<std::list<int>::iterator> rit (it);
	std::reverse_iterator<std::list<int>::iterator> ritt (it);
	std::cout << *rit << ";" << *ritt << std::endl;

	std::list<int>::iterator i = rit.base();
	std::list<int>::iterator ii = ritt.base();
	std::cout << *i<< ";" << *ii << std::endl;
/*	std::cout << typeid(ft::iterator_traits< std::list<int>::iterator >::iterator_category).name() << std::endl;
	std::cout << typeid(std::iterator_traits< std::list<int>::iterator >::iterator_category).name() << std::endl;*/
}
