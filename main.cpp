#include <iostream>
#include "cat.h" // 자식을 가져오면 부모 헤더까지 가져올 수 있음
#include "Dog.h"


class Player
{
public:
	virtual void Attack()
	{
		std::cout << "무기를 꺼냇다" << std::endl;
	}
};

class Warrior :public Player
{
public:
	void Attack() override
	{
		Player::Attack();
		std::cout << "칼 휘두르기" << std::endl;
	}
};

class Ranger :public Player
{
public:
	void Attack() override
	{
		Player::Attack();
		std::cout << "칼 휘두르기" << std::endl;
	}
};


class Wizard :public Player
{
public:
	void Attack() override
	{
		Player::Attack();
		std::cout << "마법 주문" << std::endl;
	}
};

int main()
{
	Player* party[5]
	{
		new Warrior,
		new Wizard,
		new Ranger,
		new Warrior,
		new Wizard
	};

	/*Player* p1 = new Warrior;
	Player* p2 = new Wizard;
	Player* p3 = new Ranger;

	p1->Attack();
	p2->Attack();*/
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

/*
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
*/

/*
	class Parent
{
public:
	void Function()
	{
		std::cout << "Parent::Function" << std::endl;
	}
};

class Child :public Parent
{
public:
	void Function()
	{
		std::cout << "Child::Function" << std::endl;
	}
};

int main()
{
	Parent p;
	p.Function();

	Child c;
	c.Function();

}
*/

/*
	class Player
{
public:
	void Attack()
	{
		std::cout << "무기를 꺼냇다" << std::endl;
	}
};

class Warrior :public Player
{
public:
	void Attack()
	{
		Player::Attack();
		std::cout << "칼 휘두르기" << std::endl;
	}
};

class Wizard : public Player
{
public:
	void Attack()
	{
		Player::Attack();
		std::cout << "마법 시전" << std::endl;
	}
};

int main()
{
	Warrior p1;
	Wizard p2;

	p1.Attack();
	p2.Attack();

}
*/

/*
	class ClassA
{
public:
	void f(int i)
	{
		std::cout << "ClassA::f(int)" << std::endl;
	}

	void f(float f,int i)
	{
		std::cout << "ClassA::f(float)" << std::endl;
	}
};

class ClassB :public ClassA
{
public:
	void f(int i)
	{
		std::cout << "ClassB::f(int)" << std::endl;
	}
	void f(float f, int i)
	{
		std::cout << "ClassB::f(float)" << std::endl;
	}
};

int main()
{
	ClassA c1;
	
	c1.f(1);
	c1.f(1.1f, 1);

}
*/

/*
	int main()
{
	Cat c1;
	Cat* p = new Cat;

	Animal* pAnimal = new Cat;
}

*/