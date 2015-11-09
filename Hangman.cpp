#include "Hangman.h"
#include <string>
using namespace std;

bool Hangman::isInWord(string letter) {
	if (word.find(letter) != std::string::npos) {
		return true;
	}
	return false;
}

void Hangman::removeLetter(char c) {
	letters.erase(c);
	guesses += c;
}