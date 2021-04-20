#pragma once
#include <iostream>
#include <string>
#include "player.hpp"
using namespace std;

class Japanez{
    bool playerwon;
    bool computerwon;
    void getresult();
    void printResult () const;
    void reset();
    bool stop();
 public: 
    Japanez(HumanPlayer p,ComputerPlayer c);
    void start();
    HumanPlayer *_player;
	ComputerPlayer *_computer;
};