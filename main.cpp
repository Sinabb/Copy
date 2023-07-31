#include <iostream>
#include "cat.h" // 자식을 가져오면 부모 헤더까지 가져올 수 있음
#include "Dog.h"

int main()
{
	Cat nabi;
	nabi.setAge(2);
	nabi.SetBreed(Cat::BREED::TurkishAngora);
	nabi.Sound();
	nabi.Grooming();

	Dog marry;
	marry.setAge(2);
	marry.SetBreed(Dog::BREED::Jindo);
	marry.SetSize(Dog::Size::Large);
	marry.Sound();
	marry.Bark();

}

/*
#include <iostream>

class MyClass
{

private:
	int mValue;

public:
	MyClass(int x) :mValue(x)
	{
		std::cout << "일반 생성자" << std::endl;
	}
	MyClass(const MyClass& target)
	{
		mValue = target.mValue;
		std::cout << "복사 생성자" << std::endl;
	}
	~MyClass()
	{
		std::cout << "없어짐" << std::endl;
	}

};

int main()
{
	MyClass c1{ 1 };
	MyClass c2{ c1 };

	MyClass c3(MyClass(1));
}
*/