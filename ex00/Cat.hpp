#ifndef CAT_CLASS
#define CAT_CLASS

#include "Animal.hpp"

class Cat : public Animal
{
public:
	Cat( void );
	Cat( const Cat& a );
	~Cat( void );

	Cat&	operator=( const Cat& src );
	void	makeSound( void ) const;
};

#endif
