#include "Dog.hpp"

Dog::Dog( void ) : Animal( "Dog" )
{
	std::cout << "Dog's default constructor called" << std::endl;
}

Dog::Dog( const Dog& a ) : Animal( a )
{
	std::cout << "Dog's copy constructor called" << std::endl;
}

Dog::~Dog( void )
{
	std::cout << "Dog's destructor called" << std::endl;
}

Dog&	Dog::operator=( const Dog& src )
{
	std::cout << "Dog's copy assignment called" << std::endl;
	if(this != &src)
		Animal::operator=( src );
	return (*this);
}

void	Dog::makeSound( void ) const
{
	std::cout << "Waf" << std::endl;
}
