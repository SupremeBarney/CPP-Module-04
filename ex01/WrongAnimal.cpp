#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void )
{
	std::cout << "WrongAnimal's default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal( const std::string& t ) : type(t)
{
	std::cout << "WrongAnimal's constructor called" << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal& a ) : type(a.type)
{
	std::cout << "WrongAnimal's copy constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal( void )
{
	std::cout << "WrongAnimal's destructor called" << std::endl;
}

std::string	WrongAnimal::getType( void ) const
{
	return (type);
}

WrongAnimal&	WrongAnimal::operator=( const WrongAnimal& src )
{
	std::cout << "WrongAnimal's copy assignment called" << std::endl;
	if (this == &src)
		return (*this);
	type = src.type;
	return (*this);
}

void	WrongAnimal::makeSound( void ) const
{
	std::cout << "WrongAnimaaal" << std::endl;
}
