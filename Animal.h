#pragma once
class Animal
{
protected:
	int mAge;
	int mWeight;

public:
	Animal();
	Animal(int age, int weight);
	~Animal();

	int GetAge() const;
	int GetWeight() const;
	void setAge(int age);
	void SetWeight(int wegiht);

	void Sound();
};

