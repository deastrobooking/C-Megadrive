// Student Name - Randolph Chabot
// Date - _____ - 7/03/22
// Course - ___ - ITCS 2530 C++ 1
// Assignment - - LAB 2 
// Reference -__- None

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{ 
	int num, guess, tries = 0; // declares 3 int variables
	srand(time(0)); //      https://cplusplus.com/reference/cstdlib/srand/
	num = rand() % 100 + 1; // random number between 1 and 100
	cout << "Guess My Number Game\n\n"; // printing...

	do
	{
		cout << "Enter a guess between 1 and 100 : ";
		cin >> guess;
		tries++;

		if (guess > num)
			cout << "Too high!\n\n";
		else if (guess < num)
			cout << "Too low!\n\n";
		else
			cout << "\nCorrect! You got it in " << tries << " guesses!\n";
	} while (guess != num);

	return 0;
}
