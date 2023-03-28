#include "Player.hpp"

class Game
{
private:
    std::string *Turns;

public:
    Game(Player a, Player b);
    void playAll();
    void printWinner();
    void printLog();
    void printStats();
    void playTurn();
    void printLastTurn();
};
namespace ariel{};