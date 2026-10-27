#ifndef DOG_CLASS
#define DOG_CLASS

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:
	Brain*	_brain;
public:
	std::string	getIdeas( int index ) const;
	void		setIdeas( int index, const std::string& idea );

	Dog( void );
	Dog( const Dog& cpy );
	~Dog( void );

	Dog&	operator=( const Dog& src );
	void	makeSound( void ) const;
};

#endif
