#ifndef IS_INTEGRAL_HPP
# define IS_INTEGRAL_HPP

namespace ft {

	/******************************/
	/*Integral constant definition*/
	/******************************/

	template< class T, T v >
	struct integral_constant	{

		typedef				T								value_type;
		typedef typename	ft::integral_constant<T, v>		type;
	
		const static T		value = v;

		/*Returns value and does not throw exeption*/

		operator value_type(void) const throw()
		{ return (value); }
		
	};
		typedef				ft::integral_constant<bool, true>	true_type;
		typedef				ft::integral_constant<bool, false>	false_type;

	/*************************************/
	/*remove_cv to make it 4 times faster*/
	/*************************************/
	
	template< class T >
	struct remove_cv	{ 
		typedef		T	type;	};

	template< class T >
	struct remove_cv< const T >	{ 
		typedef		T	type;	};
	
	template< class T >
	struct remove_cv< volatile T >	{ 
		typedef		T	type;	};
	
	template< class T >
	struct remove_cv< const volatile T >	{ 
		typedef		T	type;	};


	/***************************/
	/*Is integral specifcations*/
	/***************************/

	template< typename T >
	struct _is_integral : public false_type { };
	
	template< >
	struct _is_integral<bool> : public true_type { };

	template< >
	struct _is_integral<char> : public true_type { };	
	
	template< >
	struct _is_integral<short int> : public true_type { };

	template< >
	struct _is_integral<int> : public true_type { };
	
	template< >
	struct _is_integral<long int> : public true_type { };
	
	template< >
	struct _is_integral<long long int> : public true_type { };
	
	template< >
	struct _is_integral<signed char> : public true_type { };
	
	template< >
	struct _is_integral<unsigned char> : public true_type { };
	
	template< >
	struct _is_integral<unsigned short int> : public true_type { };

	template< >
	struct _is_integral<unsigned int> : public true_type { };
	
	template< >
	struct _is_integral<unsigned long int> : public true_type { };
	
	template< >
	struct _is_integral<unsigned long long int> : public true_type { };

	/******************/
	/*actual prototype*/
	/******************/
	
	template< class T >
	struct is_integral : public _is_integral<typename remove_cv<T>::type>	{
	};


}

#endif
