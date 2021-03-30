#include <iostream>
#include "zad2.hpp"
#include <string>
#include <cmath>
using namespace std;

Board::Board(){
    
    matrix = new char*[a];
    cout<<"Unesi sirinu i visina ploce"<<endl;
    cin>>a>>b;
    cout<<"Stvaranje ruba s znakom "<<rub<<endl;
    for(int i = 0; i < a; i++){
        matrix[i] = new char[b];
    }
}
Board::Board(Board &ploca){ //---------------------Copy constructor---------------//
    cout<<"Kopiranje klase s znakom"<<rub<<endl;
    a=ploca.a;
    b=ploca.b;
    }
Board::Board(int z,int p){ //------------------Izrada Ploce-----------------//
    cout<<"Constructor izrade ploce"<<endl;
    a=z;
    b=p;
    matrix = new char*[a];

    // this.printBoard();
     for(int i = 0; i < a; i++){
        matrix[i] = new char[b];
    }
     for (int i = 1; i <= a; i++) 
    { 
        for (int j = 1; j <= b; j++) 
        { 
            if ((i == 1 || i == a) || (j == 1 || j == b)) {cout << rub;}   
            else if (matrix[i][j] == 1) {
                cout << "x";
            }          
            else{cout << " ";}
        } 
        cout << endl;
    } 
  
}
Board::~Board(){//-----------------deconstructor----------//
    cout<<"Board deconstructor"<<endl;
    for(int i = 0; i < a; i++){
        delete [] matrix[i];
        delete [] matrix;
    }
}

 void Board::draw_char(Point p,char ch){
    int xx=round(p.x);
    int yy=round(p.y);
    matrix[xx][yy] == 1;
    // print_board()
    
}
Point::Point(double ar1,double ar2){
    x=ar1;
    y=ar2;
    cout<<"Point constructor"<<endl;
    
}

Point::~Point(){
    cout<<"Point decostructor"<<endl;
}
int main(){
    //  Board ploca;
    //  Board ploca2(ploca.a,ploca.b);
    Point p1(2,2), p2(8, 8), p3(2,8),p4(16, 8);
    Board b(20, 10);
    b.draw_char(p2,'x');


return 0;
}