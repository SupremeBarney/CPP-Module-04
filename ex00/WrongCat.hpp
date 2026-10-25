#ifndef WRONGCAT_CLASS
#define WRONGCAT_CLASS

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
	WrongCat( void );
	WrongCat( const WrongCat& a );
	~WrongCat( void );

	WrongCat&	operator=( const WrongCat& src );
	void		makeSound( void ) const;
};

#endif
