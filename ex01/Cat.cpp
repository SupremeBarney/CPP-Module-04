#include "Cat.hpp"

Cat::Cat( void ) : Animal( "Cat" )
{
	std::cout << "Cat's default constructor called" << std::endl;
	_brain = new Brain;
}

Cat::Cat( const Cat& cpy ) : Animal( cpy ), _brain( new Brain( *cpy._brain ))
{
	std::cout << "Cat's copy constructor called" << std::endl;
}

Cat::~Cat( void )
{
	std::cout << "Cat's destructor called" << std::endl;
	delete _brain;
}

Cat&	Cat::operator=( const Cat& src )
{
	std::cout << "Cat's copy assignment called" << std::endl;
	if(this != &src)
	{
		Animal::operator=( src );
		*_brain = *src._brain;
	}
	return (*this);
}

void	Cat::makeSound( void ) const
{
	std::cout << "Miaou" << std::endl;
}

std::string	Cat::getIdeas( int index ) const
{
	return (_brain->getIdeas( index ));
}

void	Cat::setIdeas( int index, const std::string& idea )
{
	_brain->setIdeas( index, idea );
}
