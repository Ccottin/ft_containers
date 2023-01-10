#include "ft_containers.hpp"
#include "iterator_traits.hpp"
#include "reverse_iterator.hpp"
#include "enable_if.hpp"
#include <iterator>
#include <list>
#include <iostream>
#include <typeinfo>
#include <fstream>
#include "test.hpp"
#include "is_integral.hpp"
#include "pair.hpp"
#include "lexicographical_compare.hpp"
#include <algorithm>
#include <iostream>
#include <vector>

int	main(  )
{	
	std::vector<int> v;

	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);

	std::vector<int> f = v;
	std::vector<int>::iterator it = f.begin(); 
	std::vector<int>::iterator itt = f.begin();
	while (it == itt)
	{
		std::cout << *it << "  " << *itt << std::endl;
		it++;
		itt++;
	}

//	stack_testing();
//	pair_testing();
//	test_is_integral();
//	reverse_iterator_testing();
}
