#include "Hangman.h"

void game() {
	if (hasWon()) {
		restart();
	}
}