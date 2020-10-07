#include <iostream>
#include <string>
#include <vector>

struct matrix
{
	float m_x, m_y, m_z;

	matrix(float x, float y, float z)
		:m_x(x), m_y(y), m_z(z)
	{
	}
	matrix(const matrix& matt)
		:m_x(matt.m_x), m_y(matt.m_y), m_z(matt.m_z)
	{
		std::cout << "Copied!" << std::endl;
	}
};

int main()
{
	std::vector<matrix> matrixes;
	matrixes.reserve(3);
	matrixes.emplace_back(1, 2, 3);
	matrixes.emplace_back(4, 5, 6);
	matrixes.emplace_back(7, 8, 9);

	std::cin.get();
}