#include "Cat.hpp"

Cat::Cat( void ) : Animal( "Cat" )
{
	std::cout << "Cat's default constructor called" << std::endl;
}

Cat::Cat( const Cat& a ) : Animal( a )
{
	std::cout << "Cat's copy constructor called" << std::endl;
}

Cat::~Cat( void )
{
	std::cout << "Cat's destructor called" << std::endl;
}

Cat&	Cat::operator=( const Cat& src )
{
	std::cout << "Cat's copy assignment called" << std::endl;
	if(this != &src)
		Animal::operator=( src );
	return (*this);
}

void	Cat::makeSound( void ) const
{
	std::cout << "Miaou" << std::endl;
}
