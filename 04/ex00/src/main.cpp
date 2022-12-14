#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	meta->makeSound();
	i->makeSound(); //will output the cat sound!
	j->makeSound();

	delete meta;
	delete j;
	delete i;

	std::cout << "---- wrong ones ---" << std::endl;
	WrongCat	wc;
	wc.makeSound();
	WrongAnimal	*wa = new WrongCat();
	wa->makeSound();
	delete wa;
	return 0;
}