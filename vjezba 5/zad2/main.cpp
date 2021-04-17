#include <iostream>
#include <string>
#include "player.cpp"
#include "japanez.cpp"
using namespace std;

int main(){
    ComputerPlayer c;
	string n;
    cout<<"Your username:"<<endl;
    cin>>n;
	HumanPlayer player(n);
    	

	Japanez japanez(player,c);
	japanez.start();
    


    return 0;
}