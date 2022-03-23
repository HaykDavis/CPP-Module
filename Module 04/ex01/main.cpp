#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main(void){
    Animal *i[10];

    std::cout << "<<<<<<Creating an array of Animal>>>>>>>>\n" << std::endl;
    for(int j = 0; j < 5; j++){
        i[j] = new Cat();
    }
    for (int j = 5; j < 10; j++){
        i[j] = new Dog();
    }
    std::cout << "\n<<<<<<Deleting an array of Animal>>>>>>>>\n" << std::endl;
    for(int j = 0; j < 10; j++){
        delete i[j];
    }
    std::cout << "---------------------" << std::endl;

    std::cout << "\n<<<<<<Cat deep copy test>>>>>>>>\n" << std::endl;
    Cat cat;
    for (int i = 0; i < 10; i++)
        cat.setBrIdea("Cat test", i);
    for (int i = 0; i < 10; i++){
        std::cout << cat.getBrIdea(i) << "  Index is " << i << std::endl;
        cat.makeSound();
    }
    Cat tmp;
    tmp = cat;
    if (&(tmp.getBrIdea(0)) != &(cat.getBrIdea(0)))
        std::cout << "Deep copy succeeded!" << std::endl;
    else
        std::cout << "Deep copy failed!" << std::endl;
    std::cout << "---------------------" << std::endl;
    
    std::cout << "\n<<<<<<Dog deep copy test>>>>>>>>\n" << std::endl;
    
    Dog dog;
    for (int i = 0; i < 10; i++)
        dog.setBrIdea("Dog test", i);
    for (int i = 0; i < 10; i++){
        std::cout << dog.getBrIdea(i) << "  Index is " << i << std::endl;
        dog.makeSound();
    }
    Dog tmp2;
    tmp2 = dog;

    if (&(tmp2.getBrIdea(0)) != &(dog.getBrIdea(0)))
        std::cout << "Deep copy succeeded!" << std::endl;
    else
        std::cout << "Deep copy failed!" << std::endl;
    std::cout << "---------------------" << std::endl;
}