#include <iostream>
#include "player.hpp"
#include <ctime>
using namespace std;

HumanPlayer::HumanPlayer(string name)
{
	playername = name;
}

void HumanPlayer::ruka(){
    const int jedinica=1;
    const int duja=2;
    const int petica=5;
    int unos, _zbroj=0;
    for(int i=0;i<3;i++){
    cout<<"Insert nickle value:"<<endl;
    cin>>unos;
        if(unos==1){
            _zbroj+=jedinica;
        }
        else if(unos==2){
            _zbroj+=duja;
        }
        else if(unos==5){
            _zbroj+=petica;
        }
        else if(unos==0){
            _zbroj+=0;
        }
        else{--i;}
    }
    zbrojruke=_zbroj;

}
void ComputerPlayer::rukacomp(){
    int compsum=rand()%15+1;
    zbrojkomp=compsum;
}


string HumanPlayer::getplayername(){
    return playername;
}

HumanPlayer::~HumanPlayer(){;}