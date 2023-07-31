#include <iostream>
#include "Dog.h"

Dog::Dog():mBreed{BREED::Jindo}
{
	
}

Dog::~Dog()
{
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
