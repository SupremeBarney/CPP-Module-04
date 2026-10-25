#ifndef DOG_CLASS
#define DOG_CLASS

#include "Animal.hpp"

class Dog : public Animal
{
public:
	Dog( void );
	Dog( const Dog& a );
	~Dog( void );

	Dog&	operator=( const Dog& src );
	void	makeSound( void ) const;
};

#endif
