// Tetris.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <fcntl.h>
#include <stdlib.h> 

using namespace std;

int tab1[15][10];

int x = 10;
int y = 15;

void reset(int op) {

	switch (op)
	{
	case 1:
		break;
	case 2:
		break;

	default:

		break;
	}

	for (int a = 0; a < y; a++) {
		for (int b = 0; b < x; b++) {
			tab1[a][b] = 0;
		}
	}

}

void jeu() {

	int ra = rand() % 7;

	switch (ra)
	{
	case 1:
		break;

	case 2:
		break;

	case 3:
		break;

	case 4:
		break;

	case 5:
		break;

	case 6:
		break;

	case 7:
		break;

	default:

		break;
	}
}

int main()
{
	reset(1);

	reset(2);
} 



