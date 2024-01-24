#ifndef GAME_H
#define GAME_H
#include <iostream>

using namespace std;

class Game
{
public:
    Game(int x);
    ~Game();
    void play();


private:
    int maxNumbers;
    int playerGuess;
    int randomNumbers;
    int numOfGuesses;
    void printGameResult();


};


#endif // GAME_H
