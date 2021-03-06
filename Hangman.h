//
// Created by Evan King on 11/8/15.
//

#ifndef HANGMAN_HANGMAN_H
#define HANGMAN_HANGMAN_H

#include <iostream>
#include <set>

using namespace std;

class Hangman{
public:
    Hangman(int difficulty);
    string getWord(int difficulty);
    bool isInWord(char c);
    void removeLetter(char c);
    bool isEnd();
    bool hasWon();
    bool hasLost();
    void reduceLife();
    void createWordSet();
    int getLives();
    void print(char c);
    void printWord();

private:
    multiset<char> letters;
    string word;
	string fin;
    int lives;
};

#endif //HANGMAN_HANGMAN_H