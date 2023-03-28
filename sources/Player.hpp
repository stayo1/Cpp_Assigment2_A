#pragma once
#include <string>

class Player
{
private:
    std ::string name;

public:
    Player(std ::string name);
    int cardesTaken();
    int stacksize();
};