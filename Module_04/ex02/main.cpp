#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
const Animal* j = new Dog();
const Animal* i = new Cat();
j->makeSound();
i->makeSound();
delete j;//should not create a leak
delete i;

std::cout << "\n====================================\n";
Dog basic;
{
	Dog tmp = basic;
}

std::cout << "\n====================================\n";
//Animal test;
//Animal ola;
return 0;
}
