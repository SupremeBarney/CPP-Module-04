#ifndef CAT_CLASS
#define CAT_CLASS

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
	Brain*	_brain;
public:
	std::string	getIdeas( int index ) const;
	void		setIdeas( int index, const std::string& idea );

	Cat( void );
	Cat( const Cat& cpy );
	~Cat( void );

	Cat&	operator=( const Cat& src );
	void	makeSound( void ) const;
};

#endif
