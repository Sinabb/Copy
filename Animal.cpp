#include <iostream>
#include "Animal.h"

Animal::Animal(): mAge{}, mWeight{1}
{
	std::cout << "+ Animal" << std::endl;
}

Animal::Animal(int age, int weight):mAge{age},mWeight{weight}
{

}

Animal::~Animal()
{
	std::cout << "- Animal" << std::endl;
}

int Animal::GetAge() const
{
	return mAge;
}

int Animal::GetWeight() const
{
	return mWeight;
}

void Animal::setAge(int age)
{
	mAge = age;
}

void Animal::SetWeight(int wegiht)
{
	mWeight = wegiht;
}

void Animal::Sound()
{
	std::cout << "Sound" << std::endl;
}
