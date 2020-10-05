#include <iostream>
#include <fstream>
#include <string>
#include <ctime>

int main() {

	/*-------------------- Start --------------------*/

	char start{};

	std::cout << " +---------------+" << std::endl;
	std::cout << " |    Hangman    |" << std::endl;
	std::cout << " +---------------+" << std::endl;
	std::cout << " |       !       	" << std::endl;
	std::cout << " |       O       	" << std::endl;
	std::cout << " |      /|\\      " << std::endl;
	std::cout << " |     / | \\     " << std::endl;
	std::cout << " |      / \\      " << std::endl;
	std::cout << " |     /   \\     " << std::endl;
	std::cout << " +---------------+" << std::endl;

	std::cout << "\n Enter any key to proceed: ";
	std::cin >> start;

	/*-------------------- Setup variables --------------------*/

	int tries = { 6 };			// 7 tries before death.
	char guess;					// Guessed word.
	char prevGuess[7];			// An array of guesses needs to be 1 longer than the user can guess.
	bool correctGuess;			// Guess is TRUE/FALSE

	// Setup for display guessed letter.
	prevGuess[0] = '\0';		
	for (int i = 1; i < 6; i++) {
		prevGuess[i] = '-';
	}
	prevGuess[6] = '\0';

	std::string Word;			// Word need to be guessed.
	std::string WordList[100];	// Array of 100 Strings

	/*-------------------- Get random word --------------------*/

	srand(time(NULL));				// Generate random seed to get a random word from the list.
	std::ifstream RandomWord;		// This file stream reads in the variables
	RandomWord.open("Words.txt");	// Read the word list inside the file.

	for (int i = 0; i < 100; i++) {
		RandomWord >> WordList[i];	// Filling the array with words from the list.
		// std::cout << " " << WordList[i] << std::endl;	// Test only.
	}
	
	int RandomNum = rand() % 100;	// Return any value from 1 to 100.
	Word = WordList[RandomNum];

	// Convert lowercase letter to uppercase.
	for (int y = 0; y < Word.length(); y++) {
		Word[y] = toupper(Word[y]);
	}

	// std::cout << " " << Word << std::endl;	// Display the chosen word (Answer). USE TO CHEAT

	RandomWord.close();	// Close text file.

	/*-------------------- Hide word --------------------*/

	std::string HiddenWord(Word.length(), '*');		// Replace each character with * and store in HiddenWord.
	// std::cout << " " << HiddenWord << std::endl;	// Display the word with * for each character.



	/*-------------------- Trial loop --------------------*/

	while (tries >= 0) {

		correctGuess = false; // Reset bool

		/*-------------------- Display info --------------------*/

		std::cout << " The word you have to guess is << ";
		std::cout << HiddenWord << " >>\n\n";
		std::cout << " You have " << tries << " guesses left.\n\n";

		if (prevGuess[0] == '\0') {	// Skipped during first loop
			std::cout << std::endl;
		}
		else {
			std::cout << " You have guessed: " << prevGuess << std::endl;
		}

		std::cout << " Enter a word to guess: ";
		std::cin >> guess;
		guess = toupper(guess);	// Conver guessed word to uppercase.

		/*-------------------- TRUE/FALSE --------------------*/

		for (int x = 0; x < HiddenWord.length(); x++) {
			if (Word[x] == guess) {
				HiddenWord[x] = guess;
				correctGuess = true;
			}

		}

		if (Word == HiddenWord) {
			std::cout << " Good, you have guessed the word correctly! \n\n << " << HiddenWord << " >>\n\n";
			break;
		}

		if (correctGuess == false) {
			tries--;
			std::cout << " Wrong! The letter " << guess << " does not exist in this word.\n\n";
		}
		else {
			std::cout << " Nice! " << guess << " is one of the letter from the word\n\n";
		}

		//std::cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n";
		system("cls");

		switch (tries) {

		case 6: {
			std::cout << " +---------------+" << std::endl;
			std::cout << " |       6       |" << std::endl;
			std::cout << " +---------------+" << std::endl;
			std::cout << " |       !       	" << std::endl;
			std::cout << " |               	" << std::endl;
			std::cout << " |                " << std::endl;
			std::cout << " |                " << std::endl;
			std::cout << " |                " << std::endl;
			std::cout << " |                " << std::endl;
			std::cout << " +---------------+" << std::endl;
			break;
		}

		case 5: {
			std::cout << " +---------------+" << std::endl;
			std::cout << " |       5       |" << std::endl;
			std::cout << " +---------------+" << std::endl;
			std::cout << " |       !       	" << std::endl;
			std::cout << " |       O       	" << std::endl;
			std::cout << " |                " << std::endl;
			std::cout << " |                " << std::endl;
			std::cout << " |                " << std::endl;
			std::cout << " |                " << std::endl;
			std::cout << " +---------------+" << std::endl;
			if (correctGuess == false) {
				prevGuess[0] = guess;
			}
			break;
		}

		case 4: {
			std::cout << " +---------------+" << std::endl;
			std::cout << " |       4       |" << std::endl;
			std::cout << " +---------------+" << std::endl;
			std::cout << " |       !       	" << std::endl;
			std::cout << " |       O       	" << std::endl;
			std::cout << " |       |        " << std::endl;
			std::cout << " |       |        " << std::endl;
			std::cout << " |                " << std::endl;
			std::cout << " |                " << std::endl;
			std::cout << " +---------------+" << std::endl;
			if (correctGuess == false) {
				prevGuess[1] = guess;
			}
			break;
		}

		case 3: {
			std::cout << " +---------------+" << std::endl;
			std::cout << " |       3       |" << std::endl;
			std::cout << " +---------------+" << std::endl;
			std::cout << " |       !       	" << std::endl;
			std::cout << " |       O       	" << std::endl;
			std::cout << " |      /|        " << std::endl;
			std::cout << " |     / |        " << std::endl;
			std::cout << " |             	" << std::endl;
			std::cout << " |                " << std::endl;
			std::cout << " +---------------+" << std::endl;
			if (correctGuess == false) {
				prevGuess[2] = guess;
			}
			break;
		}

		case 2: {
			std::cout << " +---------------+" << std::endl;
			std::cout << " |       2       |" << std::endl;
			std::cout << " +---------------+" << std::endl;
			std::cout << " |       !       	" << std::endl;
			std::cout << " |       O       	" << std::endl;
			std::cout << " |      /|\\      " << std::endl;
			std::cout << " |     / | \\     " << std::endl;
			std::cout << " |              	" << std::endl;
			std::cout << " |                " << std::endl;
			std::cout << " +---------------+" << std::endl;
			if (correctGuess == false) {
				prevGuess[3] = guess;
			}
			break;
		}

		case 1: {
			std::cout << " +---------------+" << std::endl;
			std::cout << " |       1       |" << std::endl;
			std::cout << " +---------------+" << std::endl;
			std::cout << " |       !       	" << std::endl;
			std::cout << " |       O       	" << std::endl;
			std::cout << " |      /|\\      " << std::endl;
			std::cout << " |     / | \\     " << std::endl;
			std::cout << " |      /         " << std::endl;
			std::cout << " |     /          " << std::endl;
			std::cout << " +---------------+" << std::endl;
			if (correctGuess == false) {
				prevGuess[4] = guess;
			}
			break;
		}

		case 0: {
			std::cout << " +---------------+" << std::endl;
			std::cout << " |   GAME OVER   |" << std::endl;
			std::cout << " +---------------+" << std::endl;
			std::cout << " |       !       	" << std::endl;
			std::cout << " |       O       	" << std::endl;
			std::cout << " |      /|\\      " << std::endl;
			std::cout << " |     / | \\     " << std::endl;
			std::cout << " |      / \\      " << std::endl;
			std::cout << " |     /   \\     " << std::endl;
			std::cout << " +---------------+" << std::endl;
			std::cout << "   YOU ARE DEAD!	" << std::endl;
			tries = -1;
			break;
		}

		default:
			std::cout << "\n\n Something is wrong somewhere...\n";	//	Error message in case something is wrong

		}

	}

	return 0;
}