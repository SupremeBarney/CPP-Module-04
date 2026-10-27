#include "WrongCat.hpp"

WrongCat::WrongCat( void ) : WrongAnimal( "WrongCat" )
{
	std::cout << "WrongCat's default constructor called" << std::endl;
}

WrongCat::WrongCat( const WrongCat& a ) : WrongAnimal( a )
{
	std::cout << "WrongCat's copy constructor called" << std::endl;
}

WrongCat::~WrongCat( void )
{
	std::cout << "WrongCat's destructor called" << std::endl;
}

WrongCat&	WrongCat::operator=( const WrongCat& src )
{
	std::cout << "WrongCat's copy assignment called" << std::endl;
	if(this != &src)
		WrongAnimal::operator=( src );
	return (*this);
}

void	WrongCat::makeSound( void ) const
{
	std::cout << "Miaou" << std::endl;
}
