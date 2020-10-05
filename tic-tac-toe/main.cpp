#include <iostream>
#include <Windows.h>
#include <conio.h>

int main() {

	//------------ Variables ------------
	char user_input, player;
	int player_turn{ 0 };
	char box[] { ' ',' ',' ',
				 ' ',' ',' ',
				 ' ',' ',' ' };

	//------------ Game loop ------------
	//	Q  W  E					0  1  2
	//	A  S  D					3  4  5
	//	Z  X  C					6  7  8

	while (player_turn < 10) {

		system("cls");
		
		//	Determine which player turn.
		if (player_turn % 2 == 0)
			player = 'X';
		else
			player = 'O';

		std::cout << " +-------+-------+-------+" << std::endl;
		std::cout << " +  Tic     Tac     Toe  +" << std::endl;
		std::cout << " +-------+-------+-------+" << std::endl;
		std::cout << " +       +       +       +" << std::endl;
		std::cout << " +   " << box[0] << "   +   " << box[1] << "   +   " << box[2] << "   +" << std::endl;
		std::cout << " +       +       +       +" << std::endl;
		std::cout << " +-------+-------+-------+" << std::endl;
		std::cout << " +       +       +       +" << std::endl;
		std::cout << " +   " << box[3] << "   +   " << box[4] << "   +   " << box[5] << "   +" << std::endl;
		std::cout << " +       +       +       +" << std::endl;
		std::cout << " +-------+-------+-------+" << std::endl;
		std::cout << " +       +       +       +" << std::endl;
		std::cout << " +   " << box[6] << "   +   " << box[7] << "   +   " << box[8] << "   +" << std::endl;
		std::cout << " +       +       +       +" << std::endl;
		std::cout << " +-------+-------+-------+" << std::endl;
		std::cout << " +     Player " << player << " turn     +" << std::endl;
		std::cout << " +-------+-------+-------+" << std::endl;

		//	Check winning status
		if ((box[0] == 'X' && box[1] == 'X' && box[2] == 'X') ||
			(box[3] == 'X' && box[4] == 'X' && box[5] == 'X') ||
			(box[6] == 'X' && box[7] == 'X' && box[8] == 'X') ||
			(box[0] == 'X' && box[3] == 'X' && box[6] == 'X') ||
			(box[1] == 'X' && box[4] == 'X' && box[7] == 'X') ||
			(box[2] == 'X' && box[5] == 'X' && box[8] == 'X') ||
			(box[0] == 'X' && box[4] == 'X' && box[8] == 'X') ||
			(box[2] == 'X' && box[4] == 'X' && box[6] == 'X')) {
			std::cout << "\n Player X win!!" << std::endl;
			return 0;
		}

		if ((box[0] == 'O' && box[1] == 'O' && box[2] == 'O') ||
			(box[3] == 'O' && box[4] == 'O' && box[5] == 'O') ||
			(box[6] == 'O' && box[7] == 'O' && box[8] == 'O') ||
			(box[0] == 'O' && box[3] == 'O' && box[6] == 'O') ||
			(box[1] == 'O' && box[4] == 'O' && box[7] == 'O') ||
			(box[2] == 'O' && box[5] == 'O' && box[8] == 'O') ||
			(box[0] == 'O' && box[4] == 'O' && box[8] == 'O') ||
			(box[2] == 'O' && box[4] == 'O' && box[6] == 'O')) {
			std::cout << "\n Player O win!!" << std::endl;
			return 0;
		}


		//	Declare the game is draw/out of turn!
		if (player_turn == 9) {
			std::cout << "\n\t   DRAW!!" << std::endl;
			return 0;
		}

		std::cout << "\n Press a key of selected box to Tick!" << std::endl;
		user_input = _getch();
		user_input = toupper(user_input);


		switch (user_input) {
		case 'Q': {
			if (box[0] == ' ') {			// To check if the box is occupied or not.
				if (player_turn % 2 == 0)	// Determie which symbol turn
					box[0] = 'X';
				else
					box[0] = 'O';
			}
			else {
				std::cout << "\n Box taken!" << std::endl;
				player_turn--;
				Sleep(500);
			}
		
			break;
		}
		case 'W': {
			if (box[1] == ' ') {			// To check if the box is occupied or not.
				if (player_turn % 2 == 0)	// Determie which symbol turn
					box[1] = 'X';
				else
					box[1] = 'O';
			}
			else {
				std::cout << "\n Box taken!" << std::endl;
				player_turn--;
				Sleep(500);
			}

			break;
		}
		case 'E': {
			if (box[2] == ' ') {			// To check if the box is occupied or not.
				if (player_turn % 2 == 0)	// Determie which symbol turn
					box[2] = 'X';
				else
					box[2] = 'O';
			}
			else {
				std::cout << "\n Box taken!" << std::endl;
				player_turn--;
				Sleep(500);
			}

			break;
		}
		case 'A': {
			if (box[3] == ' ') {			// To check if the box is occupied or not.
				if (player_turn % 2 == 0)	// Determie which symbol turn
					box[3] = 'X';
				else
					box[3] = 'O';
			}
			else {
				std::cout << "\n Box taken!" << std::endl;
				player_turn--;
				Sleep(500);
			}

			break;
		}
		case 'S': {
			if (box[4] == ' ') {			// To check if the box is occupied or not.
				if (player_turn % 2 == 0)	// Determie which symbol turn
					box[4] = 'X';
				else
					box[4] = 'O';
			}
			else {
				std::cout << "\n Box taken!" << std::endl;
				player_turn--;
				Sleep(500);
			}

			break;
		}
		case 'D': {
			if (box[5] == ' ') {			// To check if the box is occupied or not.
				if (player_turn % 2 == 0)	// Determie which symbol turn
					box[5] = 'X';
				else
					box[5] = 'O';
			}
			else {
				std::cout << "\n Box taken!" << std::endl;
				player_turn--;
				Sleep(500);
			}

			break;
		}
		case 'Z': {
			if (box[6] == ' ') {			// To check if the box is occupied or not.
				if (player_turn % 2 == 0)	// Determie which symbol turn
					box[6] = 'X';
				else
					box[6] = 'O';
			}
			else {
				std::cout << "\n Box taken!" << std::endl;
				player_turn--;
				Sleep(500);
			}

			break;
		}
		case 'X': {
			if (box[7] == ' ') {			// To check if the box is occupied or not.
				if (player_turn % 2 == 0)	// Determie which symbol turn
					box[7] = 'X';
				else
					box[7] = 'O';
			}
			else {
				std::cout << "\n Box taken!" << std::endl;
				player_turn--;
				Sleep(500);
			}

			break;
		}
		case 'C': {
			if (box[8] == ' ') {			// To check if the box is occupied or not.
				if (player_turn % 2 == 0)	// Determie which symbol turn
					box[8] = 'X';
				else
					box[8] = 'O';
			}
			else {
				std::cout << "\n Box taken!" << std::endl;
				player_turn--;
				Sleep(500);
			}

			break;
		}
		case 'J': {
			return 0;
		}
		default: {
			std::cout << "\n Something must be wrong somewhere..." << std::endl;
			player_turn--;
		}

		}
		player_turn++;		
	}

	return 0;
}