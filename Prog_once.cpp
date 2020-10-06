#include <iostream>
#include <string>
//#include"Log.h"

class Entity {
public:
	Entity() {
		std::cout << "created ENtity!" << std::endl;
	}
	~Entity() {
		std::cout << "destroied Entity!" << std::endl;
	}
};

class scopedptr {
private:
	Entity* m_ptr;
public:
	scopedptr(Entity* ptr)
		:m_ptr(ptr)
	{
	}
	~scopedptr() {
		delete m_ptr;
	}
};

int main()
{
	{
		scopedptr e = new Entity();
	}

	std::cin.get();
}