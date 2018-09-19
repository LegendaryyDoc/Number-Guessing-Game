#include <iostream>

int main()
{
	int attempts = 0; // tracks number of guesses
	int min; // holds the min number
	int max; // holds the max number
	int guess; // holds the computers guess
	char userInput;

	std::cout << "Choose a range of numbers for me to guess from!" << std::endl;

	while (true)
	{
		std::cout << "What would you like the min to be?" << std::endl; // setting starting min
		std::cin >> min;
		std::cout << "\n" << std::endl;

		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(10000, '\n');
			
			std::cout << "Try again!" << std::endl;

			continue;
		}
		break;
	}
	while (true)
	{
		std::cout << "What would you like the max to be?" << std::endl; // setting starting max
		std::cin >> max;
		std::cout << "\n" << std::endl;

		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(10000, '\n');

			std::cout << "Try again!" << std::endl;

			continue;
		}
		break;
	}

	guess = (max - min) / 2;


	while (true)
	{
		std::cout << "Is your number "<< guess << "?"<<std::endl;

		attempts++;

		std::cout << "Was that guess h, l, or c? (higher, lower, or correct)" << std::endl;
		std::cin >> userInput;
		std::cout << "\n" << std::endl;

		if (userInput == 'h') // if higher 
		{
			min = guess;
			guess = (max - ((max - min) / 2));
			std::cout << "Min now equals " << min << "\n" << std::endl;
		}

		if (userInput == 'l') // if lower
		{
			max = guess;
			guess = (max - ((max - min) / 2));
			std::cout << "Max now equals " << max << "\n" << std::endl;
		}

		if (userInput == 'c') // if correct
		{
			std::cout << "Your number was " << guess << "! It took " << attempts << " tries!" << std::endl;
			system("pause");
			return -1;
		}
	}

	return 0;
}