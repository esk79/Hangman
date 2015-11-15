#include <iostream>
#include <locale>

#include "Hangman.h"
#include "Controller.h"

using namespace std;

int main() {

    bool play = true;
    while (play){
        Controller::runGame();
        cout << "Do you want to play again? Yes or No" << endl;
        string answer;
        cin >> answer;
        string lowerAnswer;
        locale loc;
        for (string::size_type i=0; i<answer.length(); ++i)
            lowerAnswer += tolower(answer[i],loc);
        if (lowerAnswer.compare("no") == 0){
            play = false;
        }
    }
}