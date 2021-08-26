#include <iostream>
#include <string>

//Task 2. Ask user for their name, age and if they like coffee

int main() {

	std::string name{};
	int age{};
	char answer{};

	std::cout << "What's your name?: ";
	std::getline(std::cin, name);

	std::cout << "How old are you? ";
	std::cin >> age;

	//Prints your name, age and wether they like coffee or not. After you've chosen Yes or No.
	std::cout << "Do you drink coffee?" << std::endl << "Y/y = Yes" << std::endl << "N/n = No" << std::endl;
	std::cin >> answer;
	if (answer == 'Y' || answer == 'y')
	{
		std::cout << "Your name is: " << name << std::endl;
		std::cout << "You are " << age << " years old" << std::endl;
		std::cout << "It seems you like coffee";
	}
	else if (answer == 'N' || answer == 'n')
	{
		std::cout << "Your name is: " << name << std::endl;
		std::cout << "You are " << age << " years old" << std::endl;
		std::cout << "Oh you don't like coffee";
	}
	else
	{
		std::cout << "Invalid input, please try again later";
	}



	return 0;
}
