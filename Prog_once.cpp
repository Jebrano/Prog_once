#include <iostream>
#include <string>
#include <vector>

template<typename T, int N>
class Array {
private:
	T m_array[N];
public:
	T getsize() const { return N; }
};

int main()
{
	Array<int, 5> obj;
	std::cout << obj.getsize() << std::endl;
	std::cin.get();
}