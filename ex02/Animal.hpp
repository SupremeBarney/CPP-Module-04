#ifndef ANIMAL_CLASS
#define ANIMAL_CLASS

#include <string>
#include <iostream>

class Animal
{
protected:
	std::string	type;
public:
	std::string	getType() const;

	Animal( void );
	Animal( const std::string& t );
	Animal( const Animal& a );
	virtual ~Animal( void );

	Animal&			operator=( const Animal& src );
	virtual void	makeSound( void ) const = 0;
};

#endif
