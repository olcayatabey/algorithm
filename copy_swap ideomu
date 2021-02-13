#include<iostream>
#include<vector>
//@auther olcay atabey
template<typename T>
void swap(T &x, T &y)
{
	T temp(std::move(x));
	x = std::move(y);
	y = std::move(temp);
}

int main()
{
	
	std::vector<int> ivec1{ 1,3,5 };
	std::vector<int> ivec2{ 2,4,6 };
	
	std::cout << "\n\nivec1 : ";
	for (const auto &i : ivec1)
	{
		std::cout << i << " ";
	}
	std::cout << "\n\nivec2 : ";
	for (const auto &i : ivec2)
	{
		std::cout << i << " ";
	}

	//...
	ivec1.swap(ivec2); //template swap   (specialization)
	std::cout << "\n\n template swap \nivec1 : ";
	for (const auto &i : ivec1)
	{
		std::cout << i << " ";
	}
	std::cout << "\n\nivec2 : ";
	for (const auto &i : ivec2)
	{
		std::cout << i << " ";
	}

    std::swap(ivec1, ivec2); // function swap

	std::cout << "\n\n function swap \nivec1 : ";
	for (const auto &i : ivec1)
	{
		std::cout << i << " ";
	}
	std::cout << "\nivec2 : ";
	for (const auto &i : ivec2)
	{
		std::cout << i << " ";
	}

}
