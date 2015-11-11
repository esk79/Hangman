//
// Created by Evan King on 11/8/15.
//

#include <vector>
#include <fstream>
#include "Hangman.h"

string Hangman::getWord(int difficulty) {
    srand(time(NULL));
    vector<string> words;

    string file;
    switch(difficulty){
        case 1  :
            file = "/Users/EvanKing/Documents/Dev/Academic/Fall2015/CS2024/Hangman/easyWord.txt";
            break;
        case 2 :
            file = "/Users/EvanKing/Documents/Dev/Academic/Fall2015/CS2024/Hangman/mediumWords.txt";
            break;
        case 3 :
            file = "/Users/EvanKing/Documents/Dev/Academic/Fall2015/CS2024/Hangman/hardWords.txt";
            break;
        default :
            file = "/Users/EvanKing/Documents/Dev/Academic/Fall2015/CS2024/Hangman/easyWord.txt";
    }

    ifstream in;
    in.open(file);
    string s;

    if (!in.is_open()) {
        cout << "cannot open file" << endl;
    }else{
        while (getline(in, s))
            words.push_back(s);
    }

    int random = rand() % words.size() + 1;

    word = words.at(random);
}

void Hangman::createWordSet() {
    for (char c : word){
        letters.insert(c);
    }
}

Hangman::Hangman(int difficulty) {
    getWord(difficulty); //Test
    createWordSet();
    lives = 7;
}

bool Hangman::isInWord(char c){
    return word.find(c) != string::npos;
}

bool Hangman::isEnd(){
    if (hasWon() || hasLost()){
        return true; 
    }
    return false;
};

bool Hangman::hasWon(){
    if (letters.empty()){
        return true;
    }
    return false;
};

bool Hangman::hasLost(){
    if (lives == 0){
        return true;
    }
    return false;
};

void Hangman::reduceLife(){
    lives--;
    isEnd();
};

int Hangman::getLives(){
    return lives;
}

void Hangman::removeLetter(char c){
    letters.erase(c);
}

void Hangman::print() {
    //TODO Faadhil
    //print the state of the game as _ r _ a _ _ _ a _ <-- like that for example
}

void Hangman::printWord(){
    cout << "The word was: " << word << endl;
}