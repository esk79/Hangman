#pragma once

using namespace std;
#include <string>
#include <set>

class Hangman {
public:
	string getWord();
	bool isInWord(string);
	void removeLetter(char);
	bool isEnd();
	bool hasWon();
	bool hasLost();
	void reduceLife();
	void restart();

private:
	int lives;
	multiset<char> letters;
	string word;
	string guesses;
};