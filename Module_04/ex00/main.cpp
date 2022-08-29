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
i->makeSound(); //will output the cat sound!
j->makeSound();
meta->makeSound();
meta->makeSound();
delete(meta);
delete(j);
delete(i);

std::cout << "\n ==================================== \n";

const WrongAnimal* meeta = new WrongAnimal();
const WrongAnimal* ii = new WrongCat();
std::cout << "\n ==================================== \n";
std::cout << ii->getType() << " " << std::endl;
std::cout << "\n ==================================== \n";
ii->makeSound(); //will output the cat sound!
std::cout << "\n ==================================== \n";
meeta->makeSound();
std::cout << "\n ==================================== \n";
delete(meeta);
delete(ii);
return 0;
}
