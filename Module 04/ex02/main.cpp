#include "AnimalA.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main(void){
    // Animal animal;
    // animal.makeSound();

    AnimalA *i = new Cat();
    AnimalA *j = new Dog();
    // *i = *j;
    delete i;
    delete j;

    Cat cat;
    cat.makeSound();
    cat.setBrIdea("test", 0);
    Cat tmp1 = cat;
    std::cout << "\n<<<Cat deep copy test>>>" << std::endl;
    if (&(tmp1.getBrIdea(0)) != &(cat.getBrIdea(0)))
        std::cout << "Deep copy succeeded!" << std::endl;
    else
        std::cout << "Deep copy failed!" << std::endl;
    std::cout << "-------------------" << std::endl;
    Dog dog;
    dog.setBrIdea("test", 0);
    dog.makeSound();
    Dog tmp2 = dog;
    std::cout << "\n<<<Dog deep copy test>>>" << std::endl;
    if (&(tmp2.getBrIdea(0)) != &(dog.getBrIdea(0)))
        std::cout << "Deep copy succeeded!" << std::endl;
    else
        std::cout << "Deep copy failed!" << std::endl;
    std::cout << "-------------------" << std::endl;
}