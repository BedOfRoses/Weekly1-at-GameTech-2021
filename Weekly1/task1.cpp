#include <iostream>
#include <string>
//write a program that asks a user to enter their full name, 
//initial of their name(use char)(for example meisam is ‘m’), age, phone number (use longint), 
//date of birth (exp:01/12/2020). 
//define variable for each input and print the output on console. 



int main() {

	std::string fullname{};
	char initial{};
	int age{};
	long int phonenumber{};
	int day{};
	int month{};
	int year{};



	std::cout << "what is your fullname?: ";
	std::getline(std::cin, fullname);

	std::cout << "please enter your initial: ";
	std::cin >> initial;

	std::cout << "what is your age?";
	std::cin >> age;

	std::cout << "what is your phone number? ";
	std::cin >> phonenumber;

	std::cout << "what day were you born?: ";
	std::cin >> day;

	std::cout << "what month?: ";
	std::cin >> month;

	std::cout << "what year?: ";
	std::cin >> year;


	std::cout << "----------------------------" << std::endl;
	std::cout << '|' << "name\t\t" << '|' << " " << fullname << std::endl;
	std::cout << '|' << "initial\t" << '|' << " " << initial << std::endl;
	std::cout << '|' << "age\t\t" << '|' << " " << age << std::endl;
	std::cout << '|' << "phonenumber\t" << '|' << " " << phonenumber << std::endl;
	std::cout << '|' << "birthday\t" << '|' << " " << day << '/' << month << '/' << year <<std::endl;
	std::cout << "----------------------------";

	


	return 0;
}