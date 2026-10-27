#include "Animal.hpp"

Animal::Animal( void ) : type("default animal")
{
	std::cout << "Animal's default constructor called" << std::endl;
}

Animal::Animal( const std::string& t ) : type(t)
{
	std::cout << "Animal's constructor called" << std::endl;
}

Animal::Animal( const Animal& a ) : type(a.type)
{
	std::cout << "Animal's copy constructor called" << std::endl;
}

Animal::~Animal( void )
{
	std::cout << "Animal's destructor called" << std::endl;
}

std::string	Animal::getType( void ) const
{
	return (type);
}

Animal&	Animal::operator=( const Animal& src )
{
	std::cout << "Animal's copy assignment called" << std::endl;
	if (this == &src)
		return (*this);
	type = src.type;
	return (*this);
}

