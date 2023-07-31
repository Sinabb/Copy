#pragma once
#include "Animal.h"
class Cat : public Animal
{
public:
	enum BREED
	{
		KoreaShort,
		RussianBlue,
		Munckin,
		TurkishAngora
	};

private:
	BREED mBreed;
public:
	Cat();
	~Cat();

	Cat::BREED GetBreed() const;
	void SetBreed(BREED breed);
	void Grooming();
};

