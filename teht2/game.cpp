#include "game.h"

//Game::Game() {}

Game::Game(int x)
{
    cout << "GAME CONSTUCTOR: object initialized with " << x << " as a maximum value" << endl;
    maxNumbers = x;
}

Game::~Game()
{
    cout << "GAME DESTRUCTOR: object cleared from stack memory" << endl;
}

void Game::play()
{

    srand(time(NULL));
    randomNumbers = 1+(rand() % maxNumbers);
    for(;;)
    {
        cout << "give your guess between 1-" <<maxNumbers<<endl;
        cin >> playerGuess;

        if(playerGuess <randomNumbers)
        {
            cout << "your guess is too small" << endl;

            numOfGuesses++;
        }
        else if(playerGuess > randomNumbers)
        {
            cout << "your guess is too big" << endl;

            numOfGuesses++;
        }
        else if(playerGuess == randomNumbers)
        {
            cout << "your guess is right = " << playerGuess << endl;
            numOfGuesses++;

            printGameResult();
            break;
        }
    }
}

void Game::printGameResult()
{

    cout << "you guessed the right answer = " << randomNumbers << " with " << numOfGuesses << " guesses" << endl;
}
