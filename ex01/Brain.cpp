#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain's default constructor called" << std::endl;
}

Brain::Brain( const Brain& cpy )
{
	std::cout << "Brain's copy constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		ideas[i] = cpy.ideas[i];
}

Brain::~Brain()
{
	std::cout << "Brain's destructor called" << std::endl;
}

Brain&	Brain::operator=( const Brain& src )
{
	std::cout << "Brain's copy assignment called" << std::endl;
	if (this == &src)
		return (*this);
	for (int i = 0; i < 100; i++)
		ideas[i] = src.ideas[i];
	return (*this);
}

std::string	Brain::getIdeas( int index ) const
{
	return (ideas[index]);
}

void	Brain::setIdeas( int index, const std::string& idea )
{
	ideas[index] = idea;
}
