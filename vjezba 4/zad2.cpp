#include <iostream>
#include "zad2.hpp"
#include <string>
#include <cmath>
using namespace std;

Board::Board(){
    
    matrix = new int*[a];
    cout<<"Unesi sirinu i visina ploce"<<endl;
    cin>>a>>b;
    cout<<"Stvaranje ruba s znakom "<<rub<<endl;
    for(int i = 0; i < a; i++){
        matrix[i] = new int[b];
    }
}
Board::Board(Board &ploca){ //---------------------Copy constructor---------------//
    cout<<"Kopiranje klase s znakom"<<rub<<endl;
    vrijednosti=new double[a*b];
    for(int i = 0; i < a*b; i++){
        vrijednosti[i]=ploca.vrijednosti[i];
    }
    }
Board::Board(int z,int p){ //------------------Izrada Ploce-----------------//
    cout<<"Constructor izrade ploce"<<endl;
    a=z;
    b=p;
    matrix = new int*[a];
    for(int i = 0; i < a; i++){
        matrix[i] = new int[b];
    }
}


 void Board::draw_char(Point& p,char ch){//----------------------iscrtava znak na odredenoj kordinati(pointu)---------//
    znak=ch;
    xb=p.x;
    yb=p.y;
    matrix[xb][yb] = 1;
    
    
}
void Board::draw_up_line(Point& p,char ch){ //----------------------pravi vertikalu od tocke---------------------//
    znak=ch;
    xb=p.x;
    yb=p.y;
    for(int i=1;i<a;i++){
        for(int j=1;j<b;j++){
            if(xb>i){
                matrix[i][yb]=2;      
            }
        } 
              
    }  
}
void Board::draw_line(Point& p,Point& p1,char ch){ //-------------------spaja znakovima 2 tocke----------------------//
    znak=ch;
    xb=p.x;
    yb=p.y;
    int xc=p1.x;
    int yc=p1.y;
    int temp=0;
    if(xb>xc){
        temp=xb;
        xb=xc;
        xc=temp;
        temp=0;
    }
    if(yb>yc){
        temp=yb;
        yb=yc;
        yc=temp;
        temp=0;
    }
    for(int i=xb;i<xc;i++){
        for(int j=yb;j<yc;j++){
                matrix[i][j]=3;
                i++;
        } 
              
    }  
}
Point::Point(double ar1,double ar2){
    x=round(ar1);
    y=round(ar2);
    cout<<"Point constructor"<<endl;
    
}

Point::~Point(){}//----------------deconstructor-----------//

Board::~Board(){//-----------------deconstructor----------//
    cout<<"Board deconstructor"<<endl;
    for(int i = 0; i < a; i++){
        delete [] matrix[i];
        delete [] matrix;
    }
}


void Board::display(Point& p){ //--------------------------display zadane metode klase------------------//
    int x=p.x;
    int y=p.y;
    char ch=znak;
     for (int i = 0; i < a; i++) 
    { 
        for (int j = 0; j < b; j++) 
        { 
            if(matrix[i][j]==1){cout<<znak;}
            else if(matrix[i][j]==2){cout<<znak;}
            else if(matrix[i][j]==3){cout<<znak;}
            else if ((i == 0 || i == a-1) || (j == 0 || j == b-1)) {cout << rub;}             
            else{cout << " ";}
        } 
        cout << endl;
    } 
}
int main(){
    Board ploca;
    Board ploca2(ploca.a,ploca.b);
    Point p1(2,2), p2(8, 8), p3(2,8),p4(16, 8);
    Board b(20, 10);
    b.draw_char(p1,'x');
    b.draw_up_line(p2,'x');
    b.draw_line(p1,p2,'x');
    b.display(p2);


return 0;
}