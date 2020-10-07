#include <iostream>
#include <string>
#include <vector>

struct matrix
{
	float x, y, z;
};

std::ostream& operator<< (std::ostream& stream, const matrix& entity) {
	stream << entity.x << ", " << entity.y << ", " << entity.z << ", ";
	return stream;
}

void function(const std::vector<matrix> matat) {

}

int main()
{
	std::vector<matrix> matrixes;
	matrixes.push_back({ 1, 2, 3 });
	matrixes.push_back({ 4, 5, 6 });
	function(matrixes);

	for (int i = 0; i < matrixes.size(); i++)
	{
		std::cout << matrixes[i] << std::endl;
	}

	matrixes.erase(matrixes.end() - 1);

	for (matrix& m : matrixes) {
		std::cout << m << std::endl;
	}


	std::cin.get();
}