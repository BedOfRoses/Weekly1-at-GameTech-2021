#include <iostream>

int main() {

	char answer{};

	std::cout << "What is your favourite drink?" << std::endl << "1. Coffee" <<
		std::endl << "2. Tea" << std::endl << "3. Coca Cola" << std::endl;
	
	std::cout << "Select from 1 to 3: ";
	std::cin >> answer;
	
	//Here I used a switch, appearantly its more efficient and i tried using it
	//on a calculator i was making, tips from Johannes actually :D! Props to him!
	switch(answer) {
	case '1':
		std::cout << "Coffee is delicious";
		break;

	case '2':
		std::cout << "Tea gives you peace of mind";
		break;

	case '3':
		std::cout << "Coke will give you a white smile";
		break;

	default:
		std::cout << "ERROR: Invalid input. Please try again later";
	}



	return 0;
}