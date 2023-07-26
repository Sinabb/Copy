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