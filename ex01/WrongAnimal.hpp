#ifndef WRONGANIMAL_CLASS
#define WRONGANIMAL_CLASS

#include <string>
#include <iostream>

class WrongAnimal
{
protected:
	std::string	type;
public:
	std::string	getType() const;

	WrongAnimal( void );
	WrongAnimal( const std::string& t );
	WrongAnimal( const WrongAnimal& a );
	virtual ~WrongAnimal( void );

	WrongAnimal&	operator=( const WrongAnimal& src );
	void			makeSound( void ) const;
};

#endif
