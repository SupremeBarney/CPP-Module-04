#include "Dog.hpp"

Dog::Dog( void ) : Animal( "Dog" )
{
	std::cout << "Dog's default constructor called" << std::endl;
	_brain = new Brain;
}

Dog::Dog( const Dog& cpy ) : Animal( cpy ), _brain( new Brain( *cpy._brain ))
{
	std::cout << "Dog's copy constructor called" << std::endl;
}

Dog::~Dog( void )
{
	std::cout << "Dog's destructor called" << std::endl;
	delete _brain;
}

Dog&	Dog::operator=( const Dog& src )
{
	std::cout << "Dog's copy assignment called" << std::endl;
	if(this != &src)
	{
		Animal::operator=( src );
		*_brain = *src._brain;
	}
	return (*this);
}

void	Dog::makeSound( void ) const
{
	std::cout << "Waf" << std::endl;
}

std::string	Dog::getIdeas( int index ) const
{
	return (_brain->getIdeas( index ));
}

void	Dog::setIdeas( int index, const std::string& idea )
{
	_brain->setIdeas( index, idea );
}
