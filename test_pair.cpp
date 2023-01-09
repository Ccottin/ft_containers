#include <iterator>
#include "pair.hpp"
#include <vector>

/*The assignment operator is implicitly declared. Using this assignment operator makes the program ill-formed if either T1 or T2 is a const-qualified type, or a reference type, or a class type with an inaccessible copy assignment operator, or an array type of such class. TO TRY MAYBE MOre*/

void	pair_testing(void)
{
	std::cout << "output 1 = \n";
	{
	std::vector<int> v;

	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);

	std::vector<int> f = v;

	ft::pair<std::vector<int>, std::vector<int> > p(f, v);
	ft::pair<std::vector<int>, std::vector<int> > pp(p);

	if (p == pp)
		std::cout << "works\n";
	if (!(p == pp))
		std::cout << "works not\n";
	
	p.first.push_back(5);
	if (p == pp)
		std::cout << "worksi noty\n";
	if (!(p == pp))
		std::cout << "also works\n";
		
	for (std::vector<int>::iterator it = p.first.begin(); it != p.first.end(); it++)
		 std::cout << *it << " " ;
	for (std::vector<int>::iterator it = p.second.begin(); it != p.second.end(); it++)
		 std::cout << *it << " " ;
	for (std::vector<int>::iterator it = pp.first.begin(); it != pp.first.end(); it++)
		 std::cout << *it << " " ;
	for (std::vector<int>::iterator it = pp.second.begin(); it != pp.second.end(); it++)
		 std::cout << *it << " " ;
	if (p != pp)
		std::cout << "workey\n";
	if (p < pp)
		std::cout << "case 1\n";
	if (p > pp)
		std::cout << "case 2\n";

	const ft::pair<std::vector<int>, std::vector<int> > & o(p);
	const ft::pair<std::vector<int>, std::vector<int> > ppp = o;

	if (ppp < p)
		std::cout << "case 3\n";
	if (ppp > p)
		std::cout << "case 4\n";
	if (p < ppp)
		std::cout << "case 5\n";
	if (p > ppp)
		std::cout << "case 6\n";
	
	if (ppp <= p)
		std::cout << "case 7\n";
	if (ppp >= p)
		std::cout << "case 8\n";
	if (p <= ppp)
		std::cout << "case 9\n";
	if (p >= ppp)
		std::cout << "case 10\n";

	if (pp >= ppp)
		std::cout << "case 11 \n";
	if (pp <= ppp)
		std::cout << "case 12 \n";
	if (ppp >= pp)
		std::cout << "case 13 \n";
	if (ppp <= pp)	
		std::cout << "case 14 \n";

	}std::cout << "output 2 = \n"; {
	std::vector<int> v;

	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);

	std::vector<int> f = v;

	std::pair<std::vector<int>, std::vector<int> > p(f, v);
	std::pair<std::vector<int>, std::vector<int> > pp(p);

	if (p == pp)
		std::cout << "works\n";
	if (!(p == pp))
		std::cout << "works no\n";
	
	p.first.push_back(5);
	if (p == pp)
		std::cout << "worksi noty\n";
	if (!(p == pp))
		std::cout << "also works\n";
	for (std::vector<int>::iterator it = p.first.begin(); it != p.first.end(); it++)
		 std::cout << *it << " " ;
	for (std::vector<int>::iterator it = p.second.begin(); it != p.second.end(); it++)
		 std::cout << *it << " " ;
	for (std::vector<int>::iterator it = pp.first.begin(); it != pp.first.end(); it++)
		 std::cout << *it << " " ;
	for (std::vector<int>::iterator it = pp.second.begin(); it != pp.second.end(); it++)
		 std::cout << *it << " " ;
	if (p != pp)
		std::cout << "workey\n";
	if (p < pp)
		std::cout << "case 1\n";
	if (p > pp)
		std::cout << "case 2\n";

	const std::pair<std::vector<int>, std::vector<int> > & o(p);
	const std::pair<std::vector<int>, std::vector<int> > ppp = o;
	if (ppp < p)
		std::cout << "case 3\n";
	if (ppp > p)
		std::cout << "case 4\n";
	if (p < ppp)
		std::cout << "case 5\n";
	if (p > ppp)
		std::cout << "case 6\n";
	
	if (ppp <= p)
		std::cout << "case 7\n";
	if (ppp >= p)
		std::cout << "case 8\n";
	if (p <= ppp)
		std::cout << "case 9\n";
	if (p >= ppp)
		std::cout << "case 10\n";

	if (pp >= ppp)
		std::cout << "case 11 \n";
	if (pp <= ppp)
		std::cout << "case 12 \n";
	if (ppp >= pp)
		std::cout << "case 13 \n";
	if (ppp <= pp)	
		std::cout << "case 14 \n";
	}
}
