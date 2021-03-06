//
// Created by Evan King on 11/10/15.
//

#include "Controller.h"
#include "Hangman.h"
#include <vector>


void Controller::runGame() {

    cout << "Choose a difficulty. 1, 2, or 3" << endl;
    int difficulty;
    cin >> difficulty;
    Hangman game = Hangman(difficulty);
	vector<char> used;
    while(!game.isEnd()) {
        cout << "Guess a letter!" << endl;
        char c;
        cin >> c;

        if (game.isInWord(c)) {
            game.removeLetter(c);
            cout << "nice guess!" << endl;
            game.print(c);
        } 
		else {
            cout << "sorry, that letter isn't in the word" << endl;
            game.reduceLife();
            cout << "you only have " << game.getLives() << " lives left" << endl;
            game.print(c);
        }
    }
    game.printWord();
}