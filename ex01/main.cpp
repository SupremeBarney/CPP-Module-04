#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	std::cout << "\n===== Subject test =====" << std::endl;
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;//should not create a leak
	delete i;

	std::cout << "\n===== Array of Animals =====" << std::endl;
	Animal*	animals[10];
	for (int n = 0; n < 5; n++)
		animals[n] = new Dog();
	for (int n = 5; n < 10; n++)
		animals[n] = new Cat();
	for (int n = 0; n < 10; n++)
		delete animals[n];

	std::cout << "\n===== Cat copy constructor =====" << std::endl;
	Cat	original;
	original.setIdeas( 0, "Manger" );
	{
		Cat copy( original );
		std::cout << "copy idea : " << copy.getIdeas( 0 ) << std::endl;

		copy.setIdeas(0, "ideeB");
		std::cout << "copy idea : " << copy.getIdeas(0) << std::endl;
		std::cout << "original idea : " << original.getIdeas(0) << std::endl;
	}
	std::cout << "original idea : " << original.getIdeas(0) << std::endl;

	std::cout << "\n===== Dog copy constructor =====" << std::endl;
	Dog	original2;
	original2.setIdeas( 0, "Manger" );
	{
		Dog copy( original2 );
		std::cout << "copy idea : " << copy.getIdeas( 0 ) << std::endl;

		copy.setIdeas(0, "ideeB");
		std::cout << "copy idea : " << copy.getIdeas(0) << std::endl;
		std::cout << "original idea : " << original2.getIdeas(0) << std::endl;
	}
	std::cout << "original idea : " << original2.getIdeas(0) << std::endl;

	std::cout << "\n===== Dog assignment =====" << std::endl;
	{
		Dog assignment;
		assignment = original2;
		std::cout << "assignment idea : " << assignment.getIdeas( 0 ) << std::endl;

		assignment.setIdeas(0, "ideeB");
		std::cout << "assignment idea : " << assignment.getIdeas(0) << std::endl;
		std::cout << "original idea : " << original2.getIdeas(0) << std::endl;
	}
	std::cout << "original idea : " << original2.getIdeas(0) << std::endl;

	std::cout << "\n===== Cat assignment =====" << std::endl;
	{
		Cat assignment;
		assignment = original;
		std::cout << "assignment idea : " << assignment.getIdeas( 0 ) << std::endl;

		assignment.setIdeas(0, "ideeB");
		std::cout << "assignment idea : " << assignment.getIdeas(0) << std::endl;
		std::cout << "original idea : " << original.getIdeas(0) << std::endl;
	}
	std::cout << "original idea : " << original.getIdeas(0) << std::endl;

	std::cout << "\n===== Assignment on already filled destination =====" << std::endl;
	{
		Dog filled;
		filled.setIdeas( 1, "Dormir" );
		std::cout << "filled idea[0] before : " << filled.getIdeas( 0 ) << std::endl;
		std::cout << "filled idea[1] before : " << filled.getIdeas( 1 ) << std::endl;

		filled = original2;
		std::cout << "filled idea[0] after : " << filled.getIdeas( 0 ) << std::endl;
		std::cout << "filled idea[1] after : " << filled.getIdeas( 1 ) << std::endl;
	}

	std::cout << "\n===== Self assignment =====" << std::endl;
	{
		Cat	self;
		Cat&	ref = self;
		self.setIdeas( 0, "Chasser" );
		self = ref;
		std::cout << "self idea : " << self.getIdeas( 0 ) << std::endl;
		std::cout << "self type : " << self.getType() << std::endl;
	}

	std::cout << "\n===== End of main =====" << std::endl;

	return (0);
}
