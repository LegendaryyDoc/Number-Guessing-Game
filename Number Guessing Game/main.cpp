#include <iostream>

int main()
{
	int turnCounter;
	int min;
	int startGuess;
	int max;
	int guess;
	char userInput;

	std::cout << "Choose a range of numbers for me to guess from!" << std::endl;
	std::cout << "What would you like the min to be?" << std::endl;
	std::cin >> min;
	std::cout << "What would you like the max to be?" << std::endl;
	std::cin >> max;
	startGuess = (max - min) / 2;
	std::cout << startGuess << std::endl;

	while (true)
	{
		turnCounter++;

		std::cout << "Was that guess h, l, or c? (higher, lower, or correct)" << std::endl;
		std::cin >> userInput;
		if (userInput == 'h')
		{
			
		}
		if (userInput == 'l')
		{

		}
		if (userInput == 'c')
		{

		}
	}

	return 0;
}