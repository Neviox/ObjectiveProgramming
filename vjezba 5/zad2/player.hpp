#pragma once
#include <iostream>
#include <string>
using namespace std;

class Player{
 public:
    int zbrojruke;
    

};

class HumanPlayer : public Player{
    string playername;
  public:
    string getplayername();
    HumanPlayer(string name);
    void ruka();
    ~HumanPlayer();
    
};

class ComputerPlayer : public Player{
    const string komp = "Computer";
    
 public:
    int zbrojkomp;
    void rukacomp();

};

