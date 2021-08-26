#include <iostream>

int main() {

	int age{};

	std::cout << "How old are you?: ";
	std::cin >> age;
	
	if (age <= 19)
	{
		std::cout << "You are young";
	}
	else if (age >= 20 && age <= 40)
	{
		std::cout << "You are a grown up";
	}
	else if (age >= 41 && age <= 59)
	{
		std::cout << "You are old";
	}
	else if (age >= 60)
	{
		std::cout << "You ARE really old";
	}
	else
	{
		std::cout << "Invalid input, please try again later";
	}







	/*if(age <= 19)
	{
		std::cout << "You are young";
	}
	else if (age >= 20)
	{
		std::cout << "You're a grown up";
	}
	else if (age >= 41)
	{
		std::cout << "You are old";
	}
	else if (age >= 60)
	{
		std::cout << "you ARE really old";
	}*/


	return 0;
}