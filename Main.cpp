#include "Main.h"
void addLetter(char matrix[][runningLineLength], char letterMatrix[][letterWidth]);
void addSpace(char matrix[][runningLineLength], size_t spaceNumber);
void getMatrixLetter(char letter, char letterMatrix[][letterWidth]);


int main() {
	char runningLineLetter[letterHeigth][letterWidth]{};
	char runningLine[runningLineHeigth][runningLineLength];

	for (int i = 0; i < runningLineHeigth; i++) {
		for (int j = 0; j < runningLineLength; j++) {
			runningLine[i][j] = ' ';
		}
	}

	std::string runningLineString;
	std::cout << "Enter string : ";
	std::getline(std::cin, runningLineString);

	while(true) {
		for (size_t i = 0; i < runningLineString.length(); i++) {
			getMatrixLetter(runningLineString[i], runningLineLetter);
			addLetter(runningLine, runningLineLetter);
			addSpace(runningLine, 1);
		}
			addSpace(runningLine, 20);
	}

}

void addLetter(char matrix[][runningLineLength], char letter[][letterWidth])
{
	size_t runningLineTextIterator = 0;

	while (runningLineTextIterator < letterWidth)
	{
		//clearing console
		system("cls");
		//Printing matrix
		for (int i = 0; i < runningLineHeigth; i++) {
			for (int j = 0; j < runningLineLength; j++) {
				std::cout << matrix[i][j];
			}
			std::cout << std::endl;
		}

		//Shifting one symbol on left
		for (int i = 0; i < runningLineHeigth; i++) {
			for (int j = 0; j < runningLineLength - 1; j++) {
				matrix[i][j] = matrix[i][j + 1];
			}
		}

		//Filling last column with letter column
		for (int i = 0; i < runningLineHeigth; i++) {
			matrix[i][runningLineLength - 1] = letter[i][runningLineTextIterator];
		}
		runningLineTextIterator++;

		std::this_thread::sleep_for(delayMs);
	}
}

void addSpace(char matrix[][runningLineLength], size_t spaceNumber)
{
	size_t runningLineTextIterator = 0;

	while (runningLineTextIterator < spaceNumber)
	{
		//clearing console
		system("cls");

		//Printing matrix
		for (int i = 0; i < runningLineHeigth; i++) {
			for (int j = 0; j < runningLineLength; j++) {
				std::cout << matrix[i][j];
			}
			std::cout << std::endl;
		}

		//Shifting one symbol on left
		for (int i = 0; i < runningLineHeigth; i++) {
			for (int j = 0; j < runningLineLength - 1; j++) {
				matrix[i][j] = matrix[i][j + 1];
			}
		}

		//Filling last column with letter column
		for (int i = 0; i < runningLineHeigth; i++) {
			matrix[i][runningLineLength - 1] = ' ';
		}
		runningLineTextIterator++;

		std::this_thread::sleep_for(delayMs);
	}
}

void getMatrixLetter(char letter, char letterMatrix[][letterWidth])
{
	switch (letter)
	{
	case 'a':
	case 'A': {
		char letterA[letterHeigth][letterWidth] = {
			{' ', '#', '#', ' ', ' '},
			{'#', ' ', ' ', '#', ' '},
			{'#', ' ', ' ', '#', ' '},
			{'#', ' ', ' ', '#', ' '},
			{'#', '#', '#', '#', ' '},
			{'#', '#', '#', '#', ' '},
			{'#', ' ', ' ', '#', ' '},
			{'#', ' ', ' ', '#', ' '}
		};

		for (size_t matrixString = 0; matrixString < letterHeigth; matrixString++) {
			for (size_t matrixColumns = 0; matrixColumns < letterWidth; matrixColumns++) {
				letterMatrix[matrixString][matrixColumns] = letterA[matrixString][matrixColumns];
			}
		}

		break;
	}

	case 'b':
	case 'B':
	{
		char letterB[letterHeigth][letterWidth] = {
			{' ', '#', '#', ' ', ' '},
			{'#', ' ', ' ', '#', ' '},
			{'#', ' ', ' ', '#', ' '},
			{'#', ' ', '#', ' ', ' '},
			{'#', '#', '#', ' ', ' '},
			{'#', ' ', ' ', '#', ' '},
			{'#', ' ', ' ', '#', ' '},
			{'#', '#', '#', '#', ' '}
		};

		for (size_t matrixString = 0; matrixString < letterHeigth; matrixString++) {
			for (size_t matrixColumns = 0; matrixColumns < letterWidth; matrixColumns++) {
				letterMatrix[matrixString][matrixColumns] = letterB[matrixString][matrixColumns];
			}
		}
		break;
	}

	case 'c':
	case 'C':
	{
		char letterC[letterHeigth][letterWidth] = {
			{' ', '#', '#', ' ', ' '},
			{'#', ' ', ' ', '#', ' '},
			{'#', ' ', ' ', ' ', ' '},
			{'#', ' ', ' ', ' ', ' '},
			{'#', ' ', ' ', ' ', ' '},
			{'#', ' ', ' ', ' ', ' '},
			{'#', ' ', ' ', '#', ' '},
			{' ', '#', '#', ' ', ' '}
		};

		for (size_t matrixString = 0; matrixString < letterHeigth; matrixString++) {
			for (size_t matrixColumns = 0; matrixColumns < letterWidth; matrixColumns++) {
				letterMatrix[matrixString][matrixColumns] = letterC[matrixString][matrixColumns];
			}
		}
		break;
	}

	case 'd':
	case 'D':
	{
		char letterD[letterHeigth][letterWidth] = {
			{'#', '#', '#', ' ', ' '},
			{'#', ' ', ' ', '#', ' '},
			{'#', ' ', ' ', '#', ' '},
			{'#', ' ', ' ', '#', ' '},
			{'#', ' ', ' ', '#', ' '},
			{'#', ' ', ' ', '#', ' '},
			{'#', ' ', ' ', '#', ' '},
			{'#', '#', '#', ' ', ' '}
		};

		for (size_t matrixString = 0; matrixString < letterHeigth; matrixString++) {
			for (size_t matrixColumns = 0; matrixColumns < letterWidth; matrixColumns++) {
				letterMatrix[matrixString][matrixColumns] = letterD[matrixString][matrixColumns];
			}
		}
		break;
	}

	case 'e':
	case 'E':
	{
		char letterE[letterHeigth][letterWidth] = {
			{'#', '#', '#', '#', ' '},
			{'#', ' ', ' ', ' ', ' '},
			{'#', ' ', ' ', ' ', ' '},
			{'#', '#', '#', '#', ' '},
			{'#', '#', '#', '#', ' '},
			{'#', ' ', ' ', ' ', ' '},
			{'#', ' ', ' ', ' ', ' '},
			{'#', '#', '#', '#', ' '}
		};

		for (size_t matrixString = 0; matrixString < letterHeigth; matrixString++) {
			for (size_t matrixColumns = 0; matrixColumns < letterWidth; matrixColumns++) {
				letterMatrix[matrixString][matrixColumns] = letterE[matrixString][matrixColumns];
			}
		}
		break;
	}

	case 'f':
	case 'F':
	{
		char letterF[letterHeigth][letterWidth] = {
			{'#', '#', '#', '#', ' '},
			{'#', ' ', ' ', ' ', ' '},
			{'#', ' ', ' ', ' ', ' '},
			{'#', '#', '#', '#', ' '},
			{'#', '#', '#', '#', ' '},
			{'#', ' ', ' ', ' ', ' '},
			{'#', ' ', ' ', ' ', ' '},
			{'#', ' ', ' ', ' ', ' '}
		};

		for (size_t matrixString = 0; matrixString < letterHeigth; matrixString++) {
			for (size_t matrixColumns = 0; matrixColumns < letterWidth; matrixColumns++) {
				letterMatrix[matrixString][matrixColumns] = letterF[matrixString][matrixColumns];
			}
		}
		break;
	}

	case 'g':
	case 'G':
	{
		char letterG[letterHeigth][letterWidth] = {
			{' ', '#', '#', ' ', ' '},
			{'#', ' ', ' ', '#', ' '},
			{'#', ' ', ' ', ' ', ' '},
			{'#', ' ', ' ', ' ', ' '},
			{'#', ' ', '#', '#', ' '},
			{'#', ' ', ' ', '#', ' '},
			{'#', ' ', ' ', '#', ' '},
			{' ', '#', '#', ' ', ' '}
		};

		for (size_t matrixString = 0; matrixString < letterHeigth; matrixString++) {
			for (size_t matrixColumns = 0; matrixColumns < letterWidth; matrixColumns++) {
				letterMatrix[matrixString][matrixColumns] = letterG[matrixString][matrixColumns];
			}
		}
		break;
	}

	case 'h':
	case 'H':
	{
		char letterH[letterHeigth][letterWidth] = {
			{'#', ' ', ' ', '#', ' '},
			{'#', ' ', ' ', '#', ' '},
			{'#', ' ', ' ', '#', ' '},
			{'#', '#', '#', '#', ' '},
			{'#', '#', '#', '#', ' '},
			{'#', ' ', ' ', '#', ' '},
			{'#', ' ', ' ', '#', ' '},
			{'#', ' ', ' ', '#', ' '}
		};

		for (size_t matrixString = 0; matrixString < letterHeigth; matrixString++) {
			for (size_t matrixColumns = 0; matrixColumns < letterWidth; matrixColumns++) {
				letterMatrix[matrixString][matrixColumns] = letterH[matrixString][matrixColumns];
			}
		}
		break;
	}

	case 'i':
	case 'I':
	{
		char letterI[letterHeigth][letterWidth] = {
			{' ', '#', '#', ' ', ' '},
			{' ', '#', '#', ' ', ' '},
			{' ', ' ', ' ', ' ', ' '},
			{' ', '#', '#', ' ', ' '},
			{' ', '#', '#', ' ', ' '},
			{' ', '#', '#', ' ', ' '},
			{' ', '#', '#', ' ', ' '},
			{' ', '#', '#', ' ', ' '}
		};

		for (size_t matrixString = 0; matrixString < letterHeigth; matrixString++) {
			for (size_t matrixColumns = 0; matrixColumns < letterWidth; matrixColumns++) {
				letterMatrix[matrixString][matrixColumns] = letterI[matrixString][matrixColumns];
			}
		}
		break;
	}

	case 'j':
	case 'J':
	{
		char letterJ[letterHeigth][letterWidth] = {
			{' ', ' ', '#', '#', ' '},
			{' ', ' ', '#', '#', ' '},
			{' ', ' ', '#', '#', ' '},
			{' ', ' ', '#', '#', ' '},
			{' ', ' ', '#', '#', ' '},
			{'#', ' ', '#', '#', ' '},
			{'#', '#', '#', '#', ' '},
			{' ', '#', '#', ' ', ' '}
		};

		for (size_t matrixString = 0; matrixString < letterHeigth; matrixString++) {
			for (size_t matrixColumns = 0; matrixColumns < letterWidth; matrixColumns++) {
				letterMatrix[matrixString][matrixColumns] = letterJ[matrixString][matrixColumns];
			}
		}
		break;
	}

	case 'k':
	case 'K':
	{
		char letterK[letterHeigth][letterWidth] = {
			{'#', ' ', ' ', '#', ' '},
			{'#', ' ', '#', ' ', ' '},
			{'#', ' ', '#', ' ', ' '},
			{'#', '#', ' ', ' ', ' '},
			{'#', '#', ' ', ' ', ' '},
			{'#', ' ', '#', ' ', ' '},
			{'#', ' ', ' ', '#', ' '},
			{'#', ' ', ' ', '#', ' '}
		};

		for (size_t matrixString = 0; matrixString < letterHeigth; matrixString++) {
			for (size_t matrixColumns = 0; matrixColumns < letterWidth; matrixColumns++) {
				letterMatrix[matrixString][matrixColumns] = letterK[matrixString][matrixColumns];
			}
		}
		break;
	}

	case 'l':
	case 'L':
	{
		char letterL[letterHeigth][letterWidth] = {
			{'#', '#', ' ', ' ', ' '},
			{'#', '#', ' ', ' ', ' '},
			{'#', '#', ' ', ' ', ' '},
			{'#', '#', ' ', ' ', ' '},
			{'#', '#', ' ', ' ', ' '},
			{'#', '#', ' ', ' ', ' '},
			{'#', '#', '#', '#', ' '},
			{'#', '#', '#', '#', ' '}
		};

		for (size_t matrixString = 0; matrixString < letterHeigth; matrixString++) {
			for (size_t matrixColumns = 0; matrixColumns < letterWidth; matrixColumns++) {
				letterMatrix[matrixString][matrixColumns] = letterL[matrixString][matrixColumns];
			}
		}
		break;
	}

	case 'm':
	case 'M':
	{
		char letterM[letterHeigth][letterWidth] = {
			{'#', ' ', ' ', ' ', '#'},
			{'#', '#', ' ', '#', '#'},
			{'#', ' ', '#', ' ', '#'},
			{'#', ' ', ' ', ' ', '#'},
			{'#', ' ', ' ', ' ', '#'},
			{'#', ' ', ' ', ' ', '#'},
			{'#', ' ', ' ', ' ', '#'},
			{'#', ' ', ' ', ' ', '#'}
		};

		for (size_t matrixString = 0; matrixString < letterHeigth; matrixString++) {
			for (size_t matrixColumns = 0; matrixColumns < letterWidth; matrixColumns++) {
				letterMatrix[matrixString][matrixColumns] = letterM[matrixString][matrixColumns];
			}
		}
		break;
	}

	case 'n':
	case 'N':
	{
		char letterN[letterHeigth][letterWidth] = {
			{'#', ' ', ' ', '#', ' '},
			{'#', '#', ' ', '#', ' '},
			{'#', '#', ' ', '#', ' '},
			{'#', '#', ' ', '#', ' '},
			{'#', ' ', '#', '#', ' '},
			{'#', ' ', '#', '#', ' '},
			{'#', ' ', '#', '#', ' '},
			{'#', ' ', ' ', '#', ' '}
		};

		for (size_t matrixString = 0; matrixString < letterHeigth; matrixString++) {
			for (size_t matrixColumns = 0; matrixColumns < letterWidth; matrixColumns++) {
				letterMatrix[matrixString][matrixColumns] = letterN[matrixString][matrixColumns];
			}
		}
		break;
	}

	case 'o':
	case 'O':
	{
		char letterO[letterHeigth][letterWidth] = {
			{' ', '#', '#', ' ', ' '},
			{'#', ' ', ' ', '#', ' '},
			{'#', ' ', ' ', '#', ' '},
			{'#', ' ', ' ', '#', ' '},
			{'#', ' ', ' ', '#', ' '},
			{'#', ' ', ' ', '#', ' '},
			{'#', ' ', ' ', '#', ' '},
			{' ', '#', '#', ' ', ' '}
		};

		for (size_t matrixString = 0; matrixString < letterHeigth; matrixString++) {
			for (size_t matrixColumns = 0; matrixColumns < letterWidth; matrixColumns++) {
				letterMatrix[matrixString][matrixColumns] = letterO[matrixString][matrixColumns];
			}
		}
		break;
	}

	case 'p':
	case 'P':
	{
		char letterP[letterHeigth][letterWidth] = {
			{'#', '#', '#', ' ', ' '},
			{'#', ' ', ' ', '#', ' '},
			{'#', ' ', ' ', '#', ' '},
			{'#', ' ', ' ', '#', ' '},
			{'#', ' ', ' ', '#', ' '},
			{'#', '#', '#', ' ', ' '},
			{'#', ' ', ' ', ' ', ' '},
			{'#', ' ', ' ', ' ', ' '}
		};

		for (size_t matrixString = 0; matrixString < letterHeigth; matrixString++) {
			for (size_t matrixColumns = 0; matrixColumns < letterWidth; matrixColumns++) {
				letterMatrix[matrixString][matrixColumns] = letterP[matrixString][matrixColumns];
			}
		}
		break;
	}

	case 'q':
	case 'Q':
	{
		char letterQ[letterHeigth][letterWidth] = {
			{' ', '#', '#', ' ', ' '},
			{'#', ' ', ' ', '#', ' '},
			{'#', ' ', ' ', '#', ' '},
			{'#', ' ', ' ', '#', ' '},
			{'#', ' ', ' ', '#', ' '},
			{'#', ' ', '#', '#', ' '},
			{'#', ' ', ' ', '#', ' '},
			{' ', '#', '#', '#', ' '}
		};

		for (size_t matrixString = 0; matrixString < letterHeigth; matrixString++) {
			for (size_t matrixColumns = 0; matrixColumns < letterWidth; matrixColumns++) {
				letterMatrix[matrixString][matrixColumns] = letterQ[matrixString][matrixColumns];
			}
		}
		break;
	}

	case 'r':
	case 'R':
	{
		char letterR[letterHeigth][letterWidth] = {
			{' ', '#', '#', ' ', ' '},
			{'#', ' ', ' ', '#', ' '},
			{'#', ' ', ' ', '#', ' '},
			{'#', ' ', ' ', '#', ' '},
			{'#', '#', '#', ' ', ' '},
			{'#', '#', '#', ' ', ' '},
			{'#', ' ', ' ', '#', ' '},
			{'#', ' ', ' ', '#', ' '}
		};

		for (size_t matrixString = 0; matrixString < letterHeigth; matrixString++) {
			for (size_t matrixColumns = 0; matrixColumns < letterWidth; matrixColumns++) {
				letterMatrix[matrixString][matrixColumns] = letterR[matrixString][matrixColumns];
			}
		}
		break;
	}

	case 's':
	case 'S':
	{
		char letterS[letterHeigth][letterWidth] = {
			{' ', '#', '#', ' ', ' '},
			{'#', ' ', ' ', '#', ' '},
			{'#', ' ', ' ', ' ', ' '},
			{'#', ' ', ' ', ' ', ' '},
			{' ', '#', '#', '#', ' '},
			{' ', ' ', ' ', '#', ' '},
			{' ', ' ', ' ', '#', ' '},
			{'#', '#', '#', ' ', ' '}
		};

		for (size_t matrixString = 0; matrixString < letterHeigth; matrixString++) {
			for (size_t matrixColumns = 0; matrixColumns < letterWidth; matrixColumns++) {
				letterMatrix[matrixString][matrixColumns] = letterS[matrixString][matrixColumns];
			}
		}
		break;
	}

	case 't':
	case 'T':
	{
		char letterT[letterHeigth][letterWidth] = {
			{'#', '#', '#', '#', '#'},
			{' ', ' ', '#', ' ', ' '},
			{' ', ' ', '#', ' ', ' '},
			{' ', ' ', '#', ' ', ' '},
			{' ', ' ', '#', ' ', ' '},
			{' ', ' ', '#', ' ', ' '},
			{' ', ' ', '#', ' ', ' '},
			{' ', ' ', '#', ' ', ' '}
		};

		for (size_t matrixString = 0; matrixString < letterHeigth; matrixString++) {
			for (size_t matrixColumns = 0; matrixColumns < letterWidth; matrixColumns++) {
				letterMatrix[matrixString][matrixColumns] = letterT[matrixString][matrixColumns];
			}
		}
		break;
	}

	case 'u':
	case 'U':
	{
		char letterU[letterHeigth][letterWidth] = {
			{'#', ' ', ' ', '#', ' '},
			{'#', ' ', ' ', '#', ' '},
			{'#', ' ', ' ', '#', ' '},
			{'#', ' ', ' ', '#', ' '},
			{'#', ' ', ' ', '#', ' '},
			{'#', ' ', ' ', '#', ' '},
			{'#', ' ', ' ', '#', ' '},
			{' ', '#', '#', ' ', ' '}
		};

		for (size_t matrixString = 0; matrixString < letterHeigth; matrixString++) {
			for (size_t matrixColumns = 0; matrixColumns < letterWidth; matrixColumns++) {
				letterMatrix[matrixString][matrixColumns] = letterU[matrixString][matrixColumns];
			}
		}
		break;
	}

	case 'v':
	case 'V':
	{
		char letterV[letterHeigth][letterWidth] = {
			{'#', ' ', ' ', ' ', '#'},
			{'#', ' ', ' ', ' ', '#'},
			{'#', ' ', ' ', ' ', '#'},
			{' ', '#', ' ', '#', ' '},
			{' ', '#', ' ', '#', ' '},
			{' ', '#', '#', '#', ' '},
			{' ', ' ', '#', ' ', ' '},
			{' ', ' ', '#', ' ', ' '}
		};

		for (size_t matrixString = 0; matrixString < letterHeigth; matrixString++) {
			for (size_t matrixColumns = 0; matrixColumns < letterWidth; matrixColumns++) {
				letterMatrix[matrixString][matrixColumns] = letterV[matrixString][matrixColumns];
			}
		}
		break;
	}

	case 'w':
	case 'W':
	{
		char letterW[letterHeigth][letterWidth] = {
			{'#', ' ', ' ', ' ', '#'},
			{'#', ' ', ' ', ' ', '#'},
			{'#', ' ', ' ', ' ', '#'},
			{'#', ' ', ' ', ' ', '#'},
			{'#', ' ', '#', ' ', '#'},
			{'#', ' ', '#', ' ', '#'},
			{'#', ' ', '#', ' ', '#'},
			{' ', '#', ' ', '#', ' '}
		};

		for (size_t matrixString = 0; matrixString < letterHeigth; matrixString++) {
			for (size_t matrixColumns = 0; matrixColumns < letterWidth; matrixColumns++) {
				letterMatrix[matrixString][matrixColumns] = letterW[matrixString][matrixColumns];
			}
		}
		break;
	}

	case 'x':
	case 'X':
	{
		char letterX[letterHeigth][letterWidth] = {
			{'#', ' ', ' ', ' ', '#'},
			{'#', '#', ' ', '#', '#'},
			{' ', '#', ' ', '#', ' '},
			{' ', ' ', '#', ' ', ' '},
			{' ', ' ', '#', ' ', ' '},
			{' ', '#', '#', '#', ' '},
			{'#', '#', ' ', '#', '#'},
			{'#', ' ', ' ', ' ', '#'}
		};

		for (size_t matrixString = 0; matrixString < letterHeigth; matrixString++) {
			for (size_t matrixColumns = 0; matrixColumns < letterWidth; matrixColumns++) {
				letterMatrix[matrixString][matrixColumns] = letterX[matrixString][matrixColumns];
			}
		}
		break;
	}

	case 'y':
	case 'Y':
	{
		char letterY[letterHeigth][letterWidth] = {
			{'#', ' ', ' ', ' ', '#'},
			{'#', '#', ' ', '#', '#'},
			{' ', '#', ' ', '#', ' '},
			{' ', ' ', '#', ' ', ' '},
			{' ', ' ', '#', ' ', ' '},
			{' ', '#', '#', ' ', ' '},
			{'#', '#', ' ', ' ', ' '},
			{'#', ' ', ' ', ' ', ' '}
		};

		for (size_t matrixString = 0; matrixString < letterHeigth; matrixString++) {
			for (size_t matrixColumns = 0; matrixColumns < letterWidth; matrixColumns++) {
				letterMatrix[matrixString][matrixColumns] = letterY[matrixString][matrixColumns];
			}
		}
		break;
	}

	case 'z':
	case 'Z':
	{
		char letterZ[letterHeigth][letterWidth] = {
			{'#', '#', '#', '#', ' '},
			{' ', ' ', ' ', '#', ' '},
			{' ', ' ', '#', '#', ' '},
			{' ', '#', '#', ' ', ' '},
			{' ', '#', ' ', ' ', ' '},
			{'#', ' ', ' ', ' ', ' '},
			{'#', ' ', ' ', ' ', ' '},
			{'#', '#', '#', '#', ' '}
		};

		for (size_t matrixString = 0; matrixString < letterHeigth; matrixString++) {
			for (size_t matrixColumns = 0; matrixColumns < letterWidth; matrixColumns++) {
				letterMatrix[matrixString][matrixColumns] = letterZ[matrixString][matrixColumns];
			}
		}
		break;
	}

	case' ':
	{
		char space[letterHeigth][letterWidth] = {
			{' ', ' ', ' ', ' ', ' '},
			{' ', ' ', ' ', ' ', ' '},
			{' ', ' ', ' ', ' ', ' '},
			{' ', ' ', ' ', ' ', ' '},
			{' ', ' ', ' ', ' ', ' '},
			{' ', ' ', ' ', ' ', ' '},
			{' ', ' ', ' ', ' ', ' '},
			{' ', ' ', ' ', ' ', ' '}
		};

		for (size_t matrixString = 0; matrixString < letterHeigth; matrixString++) {
			for (size_t matrixColumns = 0; matrixColumns < letterWidth; matrixColumns++) {
				letterMatrix[matrixString][matrixColumns] = space[matrixString][matrixColumns];
			}
		}
		break;
	}

	default:
		break;
	}
}
