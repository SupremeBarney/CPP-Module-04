#ifndef BRAIN_CLASS
#define BRAIN_CLASS

#include <string>
#include <iostream>

class Brain
{
private:
	std::string	ideas[100];
public:
	std::string	getIdeas( int index ) const;
	void		setIdeas( int index, const std::string& idea );

	Brain();
	Brain( const Brain& cpy );
	~Brain();

	Brain&	operator=( const Brain& src );
};


#endif
