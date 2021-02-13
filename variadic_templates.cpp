#include<iostream>
#include<string>

//@auther: olcay atabey
void func(int x)
{
	std::cout << x << "\n";
}

void func(int x, int y)
{
	std::cout << x <<" "<< y<<"\n";
}
void func(int x, const std::string s)
{
	std::cout << x<<" " << s<<"\n";
}
void func(int i, double d)
{
	std::cout << i <<" "<< d<<"\n";
}
void func(int i, int x, double d, const std::string s)
{
	std::cout << i<<" " << x <<" "<< d <<" "<< s<<"\n";
}

template<typename ...Args>
void calling(Args...args)
{
	std::cout << "the calling function param pack's has got a " << sizeof...(args) << " size\n";
	func(args...);
}
int main()
{
	calling(42);
	calling(1, 2);
	calling(1, 2.2); // int double is preferred overload
	calling(1, std::string("Hello"));
	calling(1, "Hello"); // string literal converts to string variable
	calling(1, 2, 3.14, "Goodbye");
	//  calling(1, 2, 3); // compile fails because there is no matching function
	//  calling(std::string("Hello")); // compile fails because there is no matching function
}
