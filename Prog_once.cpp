#include <iostream>
#include <string>
#include <memory>
//#include"Log.h"

class Entity
{
private:
	char* m_buffer;
	unsigned int m_size;
public:
	Entity(const char* string) {
		m_size = strlen(string);
		m_buffer = new char[m_size + 1];
		memcpy(m_buffer, string, m_size);
		m_buffer[m_size] = 0;
	}

	Entity(const Entity& other)
		:m_size(other.m_size)
	{
		m_buffer = new char[m_size + 1];
		memcpy(m_buffer, other.m_buffer, m_size + 1);

	}
	~Entity() {
		delete[] m_buffer;
	}

	char& operator[](unsigned int index) {
		return m_buffer[index];
	}

	friend std::ostream& operator<< (std::ostream& stream, const Entity en);
};
	std::ostream& operator<< (std::ostream & stream, const Entity en) {
		std::cout << en.m_buffer << std::endl;
		return stream;
	}

int main()
{
	Entity obj = "joubran";
	Entity obj2 = obj;
	std::cout << obj << std::endl;
	std::cout << obj2 << std::endl;
	obj2[3] = 'z';




	std::cin.get();
}