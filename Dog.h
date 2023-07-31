#pragma once
#include "Animal.h"
class Dog : public Animal
{
public:
	enum BREED
	{
		Jindo,
		Malamute,
		SibaDog
	};

	enum Size
	{
		Small,
		middle,
		Large
	};

private:
	BREED mBreed;
	Size mSize;
public:
	Dog();
	~Dog();

	Dog::BREED GetBreed() const;
	Dog::Size GetSize() const;
	void SetBreed(Dog::BREED breed);
	void SetSize(Dog::Size Size);
	void Bark();

};

