#include <vector>
#include <stack>
#include <deque>
#include <list>
#include <iostream>
#include "stack.hpp"

/*ideas = try to see what happend on the real stack when you try to give em map for exqample (innapropriate underlying containter*/

void	test_wlist(void)
{
	std::list<int> list;
	list.push_back(1);
	list.push_back(3);
	list.push_back(2);
	list.push_back(7);
	list.push_back(0);
	list.push_back(8);

	{
		/*constructors testings*/
	ft::stack<int, std::list<int> > test;
	std::stack<int, std::list<int> > test1;
	ft::stack<int, std::list<int> > test2(list);
	std::stack<int, std::list<int> > test3(list);
//	ft::stack<int, std::deque<int> > test4(list); not working so its good
//	std::stack<int> test5(list);
	ft::stack<int, std::list<int> > test6 = test2;
	std::stack<int,std::list<int> > test7 = test3;
	
//	ft::stack<int, std::list<std::string> > test8; //more testing here is definitel mandatory
//	std::stack<int, std::list<std::string> > test9;
	}

	ft::stack<int, std::list<int> > test;
	std::stack<int, std::list<int> > test1;

	std::cout << "output 1\n";

	std::cout << test.empty() << std::endl;
	std::cout << test.size() << std::endl;
//	std::cout << test.top() << std::endl;
	test.push(1);
	std::cout << test.top() << std::endl;
	test.push(2);
	std::cout << test.top() << std::endl;
	std::cout << test.empty() << std::endl;
	std::cout << test.size() << std::endl << std::endl;

	ft::stack<int, std::list<int> > test2;
	
	std::cout << (test == test2) << std::endl;
	std::cout << (test != test2) << std::endl;
	std::cout << (test > test2) << std::endl;
	std::cout << (test >= test2) << std::endl;
	std::cout << (test < test2) << std::endl;
	std::cout << (test <= test2) << std::endl;

	std::cout << "output 2\n";

	std::cout << test1.empty() << std::endl;
	std::cout << test1.size() << std::endl;
	//std::cout << test1.top() << std::endl; this line makes a segv for both o/
	test1.push(1);
	std::cout << test1.top() << std::endl;
	test1.push(2);
	std::cout << test1.top() << std::endl;
	std::cout << test1.empty() << std::endl;
	std::cout << test1.size() << std::endl << std::endl;

	std::stack<int, std::list<int> > test3;

	std::cout << (test1 == test3) << std::endl;
	std::cout << (test1 != test3) << std::endl;
	std::cout << (test1 > test3) << std::endl;
	std::cout << (test1 >= test3) << std::endl;
	std::cout << (test1 < test3) << std::endl;
	std::cout << (test1 <= test3) << std::endl;

}

void	test_wqeue(void)
{
	std::deque<int> deque;
	deque.push_back(1);
	deque.push_back(3);
	deque.push_back(2);
	deque.push_back(7);
	deque.push_back(0);
	deque.push_back(8);

	{
		/*constructors testings*/
	ft::stack<int> test;
	std::stack<int> test1;
	ft::stack<int, std::deque<int> > test2(deque);
	std::stack<int, std::deque<int> > test3(deque);
//	ft::stack<int, std::deque<int> > test4(deque); not working so its good
//	std::stack<int> test5(deque);
	ft::stack<int,std::deque<int> > test6 = test2;
	std::stack<int> test7 = test3;
	
//	ft::stack<int, std::deque<std::string> > test8; //more testing here is definitel mandatory
//	std::stack<int, std::deque<std::string> > test9;
	}

	ft::stack<int, std::deque<int> > test;
	std::stack<int> test1;

	std::cout << "output 1\n";

	std::cout << test.empty() << std::endl;
	std::cout << test.size() << std::endl;
//	std::cout << test.top() << std::endl;
	test.push(1);
	std::cout << test.top() << std::endl;
	test.push(2);
	std::cout << test.top() << std::endl;
	std::cout << test.empty() << std::endl;
	std::cout << test.size() << std::endl << std::endl;

	ft::stack<int, std::deque<int> > test2;
	
	std::cout << (test == test2) << std::endl;
	std::cout << (test != test2) << std::endl;
	std::cout << (test > test2) << std::endl;
	std::cout << (test >= test2) << std::endl;
	std::cout << (test < test2) << std::endl;
	std::cout << (test <= test2) << std::endl;

	std::cout << "output 2\n";

	std::cout << test1.empty() << std::endl;
	std::cout << test1.size() << std::endl;
	//std::cout << test1.top() << std::endl; this line makes a segv for both o/
	test1.push(1);
	std::cout << test1.top() << std::endl;
	test1.push(2);
	std::cout << test1.top() << std::endl;
	std::cout << test1.empty() << std::endl;
	std::cout << test1.size() << std::endl << std::endl;

	std::stack<int > test3;

	std::cout << (test1 == test3) << std::endl;
	std::cout << (test1 != test3) << std::endl;
	std::cout << (test1 > test3) << std::endl;
	std::cout << (test1 >= test3) << std::endl;
	std::cout << (test1 < test3) << std::endl;
	std::cout << (test1 <= test3) << std::endl;


}


void	stack_testing(void)
{

	std::vector<int> vector;
	vector.push_back(1);
	vector.push_back(3);
	vector.push_back(2);
	vector.push_back(7);
	vector.push_back(0);
	vector.push_back(8);

	{
		/*constructors testings*/
	ft::stack<int> test;
	std::stack<int> test1;
	ft::stack<int, std::vector<int> > test2(vector);
	std::stack<int, std::vector<int> > test3(vector);
//	ft::stack<int, std::deque<int> > test4(vector); not working so its good
//	std::stack<int> test5(vector);
	ft::stack<int> test6 = test2;
	std::stack<int,std::vector<int> > test7 = test3;
	
//	ft::stack<int, std::vector<std::string> > test8; //more testing here is definitel mandatory
//	std::stack<int, std::vector<std::string> > test9;
	}

	ft::stack<int> test;
	std::stack<int, std::vector<int> > test1;

	std::cout << "output 1\n";

	std::cout << test.empty() << std::endl;
	std::cout << test.size() << std::endl;
//	std::cout << test.top() << std::endl;
	test.push(1);
	std::cout << test.top() << std::endl;
	test.push(2);
	std::cout << test.top() << std::endl;
	std::cout << test.empty() << std::endl;
	std::cout << test.size() << std::endl << std::endl;

	ft::stack<int> test2;
	
	std::cout << (test == test2) << std::endl;
	std::cout << (test != test2) << std::endl;
	std::cout << (test > test2) << std::endl;
	std::cout << (test >= test2) << std::endl;
	std::cout << (test < test2) << std::endl;
	std::cout << (test <= test2) << std::endl;

	std::cout << "output 2\n";

	std::cout << test1.empty() << std::endl;
	std::cout << test1.size() << std::endl;
	//std::cout << test1.top() << std::endl; this line makes a segv for both o/
	test1.push(1);
	std::cout << test1.top() << std::endl;
	test1.push(2);
	std::cout << test1.top() << std::endl;
	std::cout << test1.empty() << std::endl;
	std::cout << test1.size() << std::endl << std::endl;

	std::stack<int, std::vector<int> > test3;

	std::cout << (test1 == test3) << std::endl;
	std::cout << (test1 != test3) << std::endl;
	std::cout << (test1 > test3) << std::endl;
	std::cout << (test1 >= test3) << std::endl;
	std::cout << (test1 < test3) << std::endl;
	std::cout << (test1 <= test3) << std::endl;

	test_wqeue();
	test_wlist();
}
