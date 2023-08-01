#include <iostream>
#include "Dog.h"

Dog::Dog():mBreed{BREED::Jindo}
{
	std::cout << "\t + Dog" << std::endl;
}

Dog::~Dog()
{
	std::cout << "\t - Dog" << std::endl;
}

Dog::BREED Dog::GetBreed() const
{
	return mBreed;
}

Dog::Size Dog::GetSize() const
{
	return mSize;
}

void Dog::SetBreed(Dog::BREED breed)
{
	mBreed = breed;
}

void Dog::SetSize(Dog::Size Size)
{
	mSize = Size;
}

void Dog::Bark()
{
std::cout << "¸Û¸Û" << std::endl;
}
