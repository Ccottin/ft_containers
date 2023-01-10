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
#include "random_access_iterator.hpp"

int	main(  )
{	
	std::vector<int> v;

	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);

	std::vector<int> f = v;
	std::vector<int>::iterator it; 
	std::vector<int>::iterator itr(it); 
//	std::vector<int>::iterator itt = f.begin();
	it++;
	std::cout << (it != itr) << "  " << (it == itr) ;
//	std::cout << *it ;
	ft::random_access_iterator<int> itt;
	ft::random_access_iterator<int> ittr(itt);
	ittr++;
	std::cout << (itt != ittr) << "  " << (itt == ittr) << std::endl;
//	std::cout << *itt ; segv so its ok

	ft::random_access_iterator<int> truc;
	//truc = &(v[0]); //ici j ai pa d erreur de compil los aue je devrais en avoir
	truc._ptr = &(v[0]);
	
//didnt get it, didnt test it 
	//std::cout << truc->_ptr << std::endl; 
	truc++;
	std::cout << *truc << std::endl;
	++truc;
	std::cout << *truc << std::endl;
	*truc++;
	std::cout << *truc << std::endl;
	ft::random_access_iterator<int> truc1(truc);
	ft::random_access_iterator<int> truc2 = truc1;

	std::cout << (truc == truc1) << " " << (truc1 == truc2) << std::endl;
	std::cout << (truc != truc1) << " " << (truc1 != truc2) << std::endl;
	
	(void)truc++;
	std::cout << *truc << std::endl;

	std::cout << *truc-- << std::endl;
	std::cout << *truc << std::endl;
	truc--;
	std::cout << *truc << std::endl;
	--truc;
	std::cout << *truc << std::endl;
	std::cout << *truc++ << std::endl;
	
	std::cout << "🍔 Separator repetitor 🍔" << std::endl;
	truc -= 1;
	std::cout << *truc << std::endl;
	truc -= 0;
	std::cout << *truc << std::endl;
	truc += 0;
	std::cout << *truc << std::endl;
	truc += 1;
	std::cout << *truc << std::endl;

	std::cout << *(truc - 1) << std::endl;
	std::cout << *(truc - 0) << std::endl;
	std::cout << *(truc + 1) << std::endl;
	std::cout << *(1 + truc) << std::endl;
	std::cout << *(truc + 0) << std::endl;

	std::cout << "🐐 Separator terminator 🐐" << std::endl;
	std::vector<int>::iterator	machin; 
	machin = v.begin();
//didnt get it, didnt test it 
//	std::cout << machin->_ptr << std::endl; 
	machin++;
	std::cout << *machin << std::endl;
	++machin;
	std::cout << *machin << std::endl;
	*machin++;
	std::cout << *machin << std::endl;
	std::vector<int>::iterator machin1(machin);
	std::vector<int>::iterator	machin2 = machin1;

	std::cout << (machin == machin1) << " " << (machin1 == machin2) << std::endl;
	std::cout << (machin != machin1) << " " << (machin1 != machin2) << std::endl;
	
	(void)machin++;
	std::cout << *machin << std::endl;

	std::cout << *machin-- << std::endl;
	std::cout << *machin << std::endl;
	machin--;
	std::cout << *machin << std::endl;
	--machin;
	std::cout << *machin << std::endl;
	std::cout << *machin++ << std::endl;

	std::cout << "🍔 Separator repetitor 🍔" << std::endl;
	machin -= 1;
	std::cout << *machin << std::endl;
	machin -= 0;
	std::cout << *machin << std::endl;
	machin += 0;
	std::cout << *machin << std::endl;
	machin += 1;
	std::cout << *machin << std::endl;

	std::cout << *(machin - 1) << std::endl;
	std::cout << *(machin - 0) << std::endl;
	std::cout << *(machin + 1) << std::endl;
	std::cout << *(1 + machin) << std::endl;
	std::cout << *(machin + 0) << std::endl;

//	stack_testing();
//	pair_testing();
//	test_is_integral();
//	reverse_iterator_testing();
}
