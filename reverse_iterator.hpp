#ifndef REVERSE_ITERATOR_HPP
# define REVERSE_ITERATOR_HPP

# include "iterator_traits.hpp"

namespace ft {
//enable if  legacybirectionalIterator or random access
	template< class Iter >
	class reverse_iterator {

		public :

		/*member types*/
			typedef				Iter		 									iterator_type;
			typedef typename	ft::iterator_traits<Iter>::iterator_category	iterator_category;
			typedef typename	ft::iterator_traits<Iter>::value_type			value_type;
			typedef typename	ft::iterator_traits<Iter>::difference_type		difference_type;
			typedef typename	ft::iterator_traits<Iter>::pointer				pointer;
			typedef typename	ft::iterator_traits<Iter>::reference			reference;

		/*constructors & destructors*/
			reverse_iterator(void);
			explicit reverse_iterator(iterator_type x);
			template< class U >
			reverse_iterator(const reverse_iterator<U>& other);
			virtual ~reverse_iterator(void);

		/*operator overload*/
			reverse_iterator	&operator=(reverse_iterator const &ref);
			reference			operator*(void) const;	
			pointer				operator->(void) const;
			reference			operator[](difference_type n) const;
			
			reverse_iterator	operator--(int);
			reverse_iterator	&operator--(void);
			reverse_iterator	operator++(int);
			reverse_iterator	&operator++(void);
			reverse_iterator	operator+(difference_type n) const;
			reverse_iterator	operator-(difference_type n) const;
			reverse_iterator	&operator+=(difference_type n);
			reverse_iterator	&operator-=(difference_type n);

		/*member functions*/
			iterator_type	base(void) const;

		
		protected :
			Iter	current;

	};
	template< class Iterator1, class Iterator2 >
	bool operator==( const std::reverse_iterator<Iterator1>& left,
                 const std::reverse_iterator<Iterator2>& right );
	template< class Iterator1, class Iterator2 >
	bool operator!=( const std::reverse_iterator<Iterator1>& left,
                 const std::reverse_iterator<Iterator2>& right );

	template< class Iterator1, class Iterator2 >
	bool operator<( const std::reverse_iterator<Iterator1>& left,
                const std::reverse_iterator<Iterator2>& right );

	template< class Iterator1, class Iterator2 >
	bool operator>( const std::reverse_iterator<Iterator1>& left,
                const std::reverse_iterator<Iterator2>& right );

	template< class Iterator1, class Iterator2 >
	bool operator<=( const std::reverse_iterator<Iterator1>& left,
                const std::reverse_iterator<Iterator2>& right );

	template< class Iterator1, class Iterator2 >
	bool operator>=( const std::reverse_iterator<Iterator1>& left,
                const std::reverse_iterator<Iterator2>& right );

}

# include "reverse_iterator.tpp"

#endif
