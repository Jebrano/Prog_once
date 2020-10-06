#include <iostream>
#include <string>
#include <memory>
//#include"Log.h"

struct Vector
{
	float x, y, z;
};

int main()
{
	int offset = (int)&((Vector*)nullptr)->y;
	std::cout << offset << std::endl;

	std::cin.get();
}