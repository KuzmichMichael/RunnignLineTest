#include "Main.h"
void addLetter(char matrix[][RUNNING_LINE_LENGTH], char letter[][LETTER_SIZE]);
void addSpace(char matrix[][RUNNING_LINE_LENGTH], size_t spaceNumber);

int main() {
	char runningLineLetter[LETTER_SIZE][LETTER_SIZE] = {
		{'#','#','#','#','#','#','#','#'},
		{'#',' ',' ',' ',' ',' ',' ','#'},
		{'#',' ',' ',' ',' ',' ',' ','#'},
		{'#',' ',' ',' ',' ',' ',' ','#'},
		{'#',' ',' ',' ',' ',' ',' ','#'},
		{'#',' ',' ',' ',' ',' ',' ','#'},
		{'#',' ',' ',' ',' ',' ',' ','#'},
		{'#',' ',' ',' ',' ',' ',' ','#'}
	};
	
	char runningLine[RUNNING_LINE_HEIGTH][RUNNING_LINE_LENGTH];

	for (int i = 0; i < RUNNING_LINE_HEIGTH; i++) {
		for (int j = 0; j < RUNNING_LINE_LENGTH; j++) {
			runningLine[i][j] = ' ';
		}
	}

	while(true) {
		addLetter(runningLine, runningLineLetter);
		addSpace(runningLine, 2);
	}

}

void addLetter(char matrix[][RUNNING_LINE_LENGTH], char letter[][LETTER_SIZE])
{
	size_t runningLineTextIterator = 0;

	while (runningLineTextIterator < LETTER_SIZE)
	{
		//clearing console
		system("cls");
		//Printing matrix
		for (int i = 0; i < RUNNING_LINE_HEIGTH; i++) {
			for (int j = 0; j < RUNNING_LINE_LENGTH; j++) {
				std::cout << matrix[i][j];
			}
			std::cout << std::endl;
		}

		//Shifting one symbol on left
		for (int i = 0; i < RUNNING_LINE_HEIGTH; i++) {
			for (int j = 0; j < RUNNING_LINE_LENGTH - 1; j++) {
				matrix[i][j] = matrix[i][j + 1];
			}
		}

		//Filling last column with letter column
		for (int i = 0; i < RUNNING_LINE_HEIGTH; i++) {
			matrix[i][RUNNING_LINE_LENGTH - 1] = letter[i][runningLineTextIterator];
		}
		runningLineTextIterator++;

		std::this_thread::sleep_for(delayMs);
	}
}

void addSpace(char matrix[][RUNNING_LINE_LENGTH], size_t spaceNumber)
{
	size_t runningLineTextIterator = 0;

	while (runningLineTextIterator < spaceNumber)
	{
		//clearing console
		system("cls");

		//Printing matrix
		for (int i = 0; i < RUNNING_LINE_HEIGTH; i++) {
			for (int j = 0; j < RUNNING_LINE_LENGTH; j++) {
				std::cout << matrix[i][j];
			}
			std::cout << std::endl;
		}

		//Shifting one symbol on left
		for (int i = 0; i < RUNNING_LINE_HEIGTH; i++) {
			for (int j = 0; j < RUNNING_LINE_LENGTH - 1; j++) {
				matrix[i][j] = matrix[i][j + 1];
			}
		}

		//Filling last column with letter column
		for (int i = 0; i < RUNNING_LINE_HEIGTH; i++) {
			matrix[i][RUNNING_LINE_LENGTH - 1] = ' ';
		}
		runningLineTextIterator++;

		std::this_thread::sleep_for(delayMs);
	}
}
