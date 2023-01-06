#include <iostream>
#include "is_integral.hpp"
#include "test.hpp"


void	test_is_integral(void)
{
{
	using namespace ft;
	int		ii = 0;
	{
	bool	a = true;
	std::cout << std::endl << ii++ << std::endl;
	do_things(a);
	char	e = 't';
	std::cout << std::endl << ii++ << std::endl;
	do_things(e);
	signed char	f = 't';
	std::cout << std::endl << ii++ << std::endl;
	do_things(f);
	unsigned char	g = 't';
	std::cout << std::endl << ii++ << std::endl;
	do_things(g);
	short int	h = 6;
	std::cout << std::endl << ii++ << std::endl;
	do_things(h);
	unsigned short int	i = -6;
	std::cout << std::endl << ii++ << std::endl;
	do_things(i);
	int		j = 0;
	std::cout << std::endl << ii++ << std::endl;
	do_things(j);
	unsigned int		k = 0;
	std::cout << std::endl << ii++ << std::endl;
	do_things(k);
	long int	l = 432;
	std::cout << std::endl << ii++ << std::endl;
	do_things(l);
	unsigned long int	m = -432;
	std::cout << std::endl << ii++ << std::endl;
	do_things(m);
	std::cout << std::endl << ii++ << std::endl;
	long long int	n = 90;
	std::cout << std::endl << ii++ << std::endl;
	do_things(n);
	unsigned long long int	o = -90;
	std::cout << std::endl << ii++ << std::endl;
	do_things(o);
	} 
	std::cout  << std::endl << std::endl;
	{
	const bool	a = true;
	std::cout << std::endl << ii++ << std::endl;
	do_things(a);
	const char	e = 't';
	std::cout << std::endl << ii++ << std::endl;
	do_things(e);
	const signed char	f = 't';
	std::cout << std::endl << ii++ << std::endl;
	do_things(f);
	const unsigned char	g = 't';
	std::cout << std::endl << ii++ << std::endl;
	do_things(g);
	const short int	h = 6;
	std::cout << std::endl << ii++ << std::endl;
	do_things(h);
	const unsigned short int	i = -6;
	std::cout << std::endl << ii++ << std::endl;
	do_things(i);
	const int		j = 0;
	std::cout << std::endl << ii++ << std::endl;
	do_things(j);
	const unsigned int		k = 0;
	std::cout << std::endl << ii++ << std::endl;
	do_things(k);
	const long int	l = 432;
	std::cout << std::endl << ii++ << std::endl;
	do_things(l);
	const unsigned long int	m = -432;
	std::cout << std::endl << ii++ << std::endl;
	do_things(m);
	const long long int	n = 90;
	std::cout << std::endl << ii++ << std::endl;
	do_things(n);
	const unsigned long long int	o = -90;
	std::cout << std::endl << ii++ << std::endl;
	do_things(o);
	} 
	std::cout  << std::endl << std::endl;
	{ 
	volatile bool	a = true;
	std::cout << std::endl << ii++ << std::endl;
	do_things(a);
	volatile char	e = 't';
	std::cout << std::endl << ii++ << std::endl;
	do_things(e);
	volatile signed char	f = 't';
	std::cout << std::endl << ii++ << std::endl;
	do_things(f);
	volatile unsigned char	g = 't';
	std::cout << std::endl << ii++ << std::endl;
	do_things(g);
	volatile short int	h = 6;
	std::cout << std::endl << ii++ << std::endl;
	do_things(h);
	volatile unsigned short int	i = -6;
	std::cout << std::endl << ii++ << std::endl;
	do_things(i);
	volatile int		j = 0;
	std::cout << std::endl << ii++ << std::endl;
	do_things(j);
	volatile unsigned int		k = 0;
	std::cout << std::endl << ii++ << std::endl;
	do_things(k);
	volatile long int	l = 432;
	std::cout << std::endl << ii++ << std::endl;
	do_things(l);
	volatile unsigned long int	m = -432;
	std::cout << std::endl << ii++ << std::endl;
	do_things(m);
	volatile long long int	n = 90;
	std::cout << std::endl << ii++ << std::endl;
	do_things(n);
	volatile unsigned long long int	o = -90;
	std::cout << std::endl << ii++ << std::endl;
	do_things(o);
	}
	std::cout << std::endl << std::endl;
	{
	const volatile bool	a = true;
	std::cout << std::endl << ii++ << std::endl;
	do_things(a);
	const volatile char	e = 't';
	std::cout << std::endl << ii++ << std::endl;
	do_things(e);
	const volatile signed char	f = 't';
	std::cout << std::endl << ii++ << std::endl;
	do_things(f);
	const volatile unsigned char	g = 't';
	std::cout << std::endl << ii++ << std::endl;
	do_things(g);
	const volatile short int	h = 6;
	std::cout << std::endl << ii++ << std::endl;
	do_things(h);
	const volatile unsigned short int	i = -6;
	std::cout << std::endl << ii++ << std::endl;
	do_things(i);
	const volatile int		j = 0;
	std::cout << std::endl << ii++ << std::endl;
	do_things(j);
	const volatile unsigned int		k = 0;
	std::cout << std::endl << ii++ << std::endl;
	do_things(k);
	const volatile long int	l = 432;
	std::cout << std::endl << ii++ << std::endl;
	do_things(l);
	const volatile unsigned long int	m = -432;
	std::cout << std::endl << ii++ << std::endl;
	do_things(m);
	const volatile long long int	n = 90;
	std::cout << std::endl << ii++ << std::endl;
	do_things(n);
	const volatile unsigned long long int	o = -90;
	std::cout << std::endl << ii++ << std::endl;
	do_things(o);
	}

	{
	std::string a;
	std::cout << std::endl << ii++ << std::endl;
	do_things(a);
	float	b = 3.14;
	std::cout << std::endl << ii++ << std::endl;
	do_things(b);
	float	c = 4;
	std::cout << std::endl << ii++ << std::endl;
	do_things(c);

	}
}
//testing with std, should be in c++11 or it wont compile
{
	using namespace std;
	
	int		ii = 0;
	{
	bool	a = true;
	std::cout << std::endl << ii++ << std::endl;
	do_things(a);
	char	e = 't';
	std::cout << std::endl << ii++ << std::endl;
	do_things(e);
	signed char	f = 't';
	std::cout << std::endl << ii++ << std::endl;
	do_things(f);
	unsigned char	g = 't';
	std::cout << std::endl << ii++ << std::endl;
	do_things(g);
	short int	h = 6;
	std::cout << std::endl << ii++ << std::endl;
	do_things(h);
	unsigned short int	i = -6;
	std::cout << std::endl << ii++ << std::endl;
	do_things(i);
	int		j = 0;
	std::cout << std::endl << ii++ << std::endl;
	do_things(j);
	unsigned int		k = 0;
	std::cout << std::endl << ii++ << std::endl;
	do_things(k);
	long int	l = 432;
	std::cout << std::endl << ii++ << std::endl;
	do_things(l);
	unsigned long int	m = -432;
	std::cout << std::endl << ii++ << std::endl;
	do_things(m);
	std::cout << std::endl << ii++ << std::endl;
	long long int	n = 90;
	std::cout << std::endl << ii++ << std::endl;
	do_things(n);
	unsigned long long int	o = -90;
	std::cout << std::endl << ii++ << std::endl;
	do_things(o);
	} 
	std::cout  << std::endl << std::endl;
	{
	const bool	a = true;
	std::cout << std::endl << ii++ << std::endl;
	do_things(a);
	const char	e = 't';
	std::cout << std::endl << ii++ << std::endl;
	do_things(e);
	const signed char	f = 't';
	std::cout << std::endl << ii++ << std::endl;
	do_things(f);
	const unsigned char	g = 't';
	std::cout << std::endl << ii++ << std::endl;
	do_things(g);
	const short int	h = 6;
	std::cout << std::endl << ii++ << std::endl;
	do_things(h);
	const unsigned short int	i = -6;
	std::cout << std::endl << ii++ << std::endl;
	do_things(i);
	const int		j = 0;
	std::cout << std::endl << ii++ << std::endl;
	do_things(j);
	const unsigned int		k = 0;
	std::cout << std::endl << ii++ << std::endl;
	do_things(k);
	const long int	l = 432;
	std::cout << std::endl << ii++ << std::endl;
	do_things(l);
	const unsigned long int	m = -432;
	std::cout << std::endl << ii++ << std::endl;
	do_things(m);
	const long long int	n = 90;
	std::cout << std::endl << ii++ << std::endl;
	do_things(n);
	const unsigned long long int	o = -90;
	std::cout << std::endl << ii++ << std::endl;
	do_things(o);
	} 
	std::cout  << std::endl << std::endl;
	{ 
	volatile bool	a = true;
	std::cout << std::endl << ii++ << std::endl;
	do_things(a);
	volatile char	e = 't';
	std::cout << std::endl << ii++ << std::endl;
	do_things(e);
	volatile signed char	f = 't';
	std::cout << std::endl << ii++ << std::endl;
	do_things(f);
	volatile unsigned char	g = 't';
	std::cout << std::endl << ii++ << std::endl;
	do_things(g);
	volatile short int	h = 6;
	std::cout << std::endl << ii++ << std::endl;
	do_things(h);
	volatile unsigned short int	i = -6;
	std::cout << std::endl << ii++ << std::endl;
	do_things(i);
	volatile int		j = 0;
	std::cout << std::endl << ii++ << std::endl;
	do_things(j);
	volatile unsigned int		k = 0;
	std::cout << std::endl << ii++ << std::endl;
	do_things(k);
	volatile long int	l = 432;
	std::cout << std::endl << ii++ << std::endl;
	do_things(l);
	volatile unsigned long int	m = -432;
	std::cout << std::endl << ii++ << std::endl;
	do_things(m);
	volatile long long int	n = 90;
	std::cout << std::endl << ii++ << std::endl;
	do_things(n);
	volatile unsigned long long int	o = -90;
	std::cout << std::endl << ii++ << std::endl;
	do_things(o);
	}
	std::cout << std::endl << std::endl;
	{
	const volatile bool	a = true;
	std::cout << std::endl << ii++ << std::endl;
	do_things(a);
	const volatile char	e = 't';
	std::cout << std::endl << ii++ << std::endl;
	do_things(e);
	const volatile signed char	f = 't';
	std::cout << std::endl << ii++ << std::endl;
	do_things(f);
	const volatile unsigned char	g = 't';
	std::cout << std::endl << ii++ << std::endl;
	do_things(g);
	const volatile short int	h = 6;
	std::cout << std::endl << ii++ << std::endl;
	do_things(h);
	const volatile unsigned short int	i = -6;
	std::cout << std::endl << ii++ << std::endl;
	do_things(i);
	const volatile int		j = 0;
	std::cout << std::endl << ii++ << std::endl;
	do_things(j);
	const volatile unsigned int		k = 0;
	std::cout << std::endl << ii++ << std::endl;
	do_things(k);
	const volatile long int	l = 432;
	std::cout << std::endl << ii++ << std::endl;
	do_things(l);
	const volatile unsigned long int	m = -432;
	std::cout << std::endl << ii++ << std::endl;
	do_things(m);
	const volatile long long int	n = 90;
	std::cout << std::endl << ii++ << std::endl;
	do_things(n);
	const volatile unsigned long long int	o = -90;
	std::cout << std::endl << ii++ << std::endl;
	do_things(o);
	}

	{
	std::string a;
	std::cout << std::endl << ii++ << std::endl;
	do_things(a);
	float	b = 3.14;
	std::cout << std::endl << ii++ << std::endl;
	do_things(b);
	float	c = 4;
	std::cout << std::endl << ii++ << std::endl;
	do_things(c);
	}
} //namespace
}
