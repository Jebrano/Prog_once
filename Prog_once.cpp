#include <iostream>
#include <string>
#include <memory>
//#include"Log.h"

class Entity
{
public:
	void print()const { std::cout << "Hello!" << std::endl; }
};

class scoped
{
private:
	Entity* m_obj;
public:
	scoped(Entity* entity)
		:m_obj(entity)
	{}
	~scoped() {
		delete m_obj;
	}
	Entity* operator->() {
		return m_obj;
	}
};

int main()
{
	scoped obj = new Entity();
	obj->print();

	std::cin.get();
}