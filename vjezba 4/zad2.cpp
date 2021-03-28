#include <iostream>
#include "zad2.hpp"
#include <string>
using namespace std;

Board::Board(){
    a= new int;
    b=new int;
    cout<<"Unesi sirinu i visina ploce"<<endl;
    cin>>*a>>*b;
    cout<<"Stvaranje ruba s znakom "<<rub<<endl;
    }
Board::Board(Board &ploca){
    cout<<"Kopiranje klase s znakom"<<rub<<endl;
    a=ploca.a;
    b=ploca.b;
    }
Board::Board(int* a,int* b){
    cout<<"U konstruktoru ploce s znakom "<<rub<<endl;
    cout<<"Sirina je "<<*a<<"\nVisina je  "<<*b<<endl;
     for (int i = 1; i <= *a; i++) 
    { 
        for (int j = 1; j <= *b; j++) 
        { 
            if ((i == 1 || i == *a) || (j == 1 || j == *b)) {cout << rub;}             
            else{cout << " ";}
        } 
        cout << endl;
    } 
  
}
Board::~Board(){
    cout<<"dekonstruktor"<<endl;
}

int main(){
    Board p;
    Board ploca1(p);
    Board ploca2(ploca1.a,ploca1.b);
    


return 0;
}