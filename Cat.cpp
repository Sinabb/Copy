#include <iostream>
#include "Cat.h"

Cat::Cat() :Animal(0,1),mBreed{BREED::KoreaShort}
{
    std::cout << "\t + Cat" << std::endl;
}

Cat::~Cat()
{
    std::cout << "\t - Cat" << std::endl;
}

Cat::BREED Cat::GetBreed() const
{
    return mBreed;
}

void Cat::SetBreed(BREED breed)
{
    mBreed = breed;
}

void Cat::Grooming()
{
    std::cout << "ÇÓÂ¦" << std::endl;
}
