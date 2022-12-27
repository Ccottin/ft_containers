#include "ft_containers.hpp"
#include "iterator_traits.hpp"
#include <iterator>
#include <list>
#include <iostream>

int	main(  )
{
	std::list<int> list;
	list.push_back(1);
	list.push_back(2);
	std::list<int>::iterator it = list.begin();
	std::list<int>::iterator ite = list.end();
	std::cout << ft::iterator_traits<std::list<int>::iterator>::difference_type << std::endl;
	std::cout << std::iterator_traits<std::list<int>::iterator>::difference_type << std::endl;
// 	std::stack<int, std::vector<int> > stack;
//	ft::stack<int, std::vector<int> > stack1;
}
