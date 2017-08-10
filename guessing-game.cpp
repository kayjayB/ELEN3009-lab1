#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	srand(time(0)); // Generate seed for random number generator based on current time
	int randomNumber = rand() % 100 +1; // Generate random number between 1 and 100
	int guessedNumber; // Initiate variable for guessed number
	
	cout << "Guess a random integer between 1 and 100. You have five guesses." << endl;
	
	cin >> guessedNumber ; // Input the user's guessed number
	
	int numberOfGuesses =1; // Initiate the number of guesses used to 1
	
	// While the user has not had 5 guesses and has not guessed the correct number, do the following:
	while (numberOfGuesses < 5 and guessedNumber != randomNumber)
	{
		// If the user guesses a number that is lower than the random number, tell the user to guess higher
		if (guessedNumber < randomNumber)
		{
			cout << "Guess Higher" << endl;
			cout << "You have " << 5-numberOfGuesses << " guesses left" << endl;
			cin >> guessedNumber;
		}
		// If the user guesses a number that is higher than the random number, tell the user to guess lower
		else
		{
			cout << "Guess Lower" << endl;
			cout << "You have " << 5-numberOfGuesses << " guesses left" << endl;
			cin >> guessedNumber;
		}
		numberOfGuesses++; // Increment the number of guesses used by the user
	}
	
	// If the user guesses the correct number within 5 guesses, tell that user that thy have won
	if (guessedNumber == randomNumber)
	{
		cout << "You win." << endl;
	}
	// If not, tell the user that they have lost
	else
	{
		cout << "You lose." << endl;
		cout << "The correct number was " << randomNumber << endl;
	} 
	
	return 0;
}
