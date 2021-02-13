#include<iostream>
#include<algorithm>
#include<string>

int main()
{
	std::string s1{ "AA" };
	std::string s2{ "AA"};

	const auto &smax{ std::max(s1, s2) };
	const auto &smin{ std::min(s1, s2) };
	s1 += "a";
	s2 += "b";
	std::cout << "smax :" << smax << "\nsmin :" << smin << "\n";
}
/*
output:
smax :AAa
smin :AAa
*/
