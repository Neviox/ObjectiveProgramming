#include "japanez.hpp"
#include "player.hpp"
#include <iostream>
using namespace std;

Japanez::Japanez(HumanPlayer p,ComputerPlayer c){
    _player=&p;
    _computer=&c;

}

void Japanez::start()
{
	while (!stop())
	{
        _player->ruka();
        _computer->rukacomp();
		getresult();
		printResult();
        reset();
	}

	cout << "----------GAME OVER------------- "<< endl;
		
}

bool Japanez::stop()
{
	string res;
	cout << "play [y]/[n]" << endl;
	cin >> res;
	return res == "n";

}

void Japanez::getresult()
{

	if (_player->zbrojruke == _computer->zbrojkomp)
		playerwon = true;
	else
		computerwon = true;
}

void Japanez::printResult() const
{
	cout << "----------------- RESULTS -----------------" << endl;
     if (playerwon){
		cout << "            Player "<<_player->getplayername()<<" won "<<endl;
        cout<<endl<<endl;}
	else if (computerwon){
		cout << "               Computer won"<<endl;
        cout <<endl;}
	cout <<"Player "<<_player->getplayername()<<" points: "<<_player->zbrojruke<<endl<<"Computer points: "<<_computer->zbrojkomp<<endl;
	cout << endl;
}

void Japanez::reset()
{	
	_player->zbrojruke=0;
    _computer->zbrojkomp=0;
	playerwon = false;
	computerwon = false;
}
