#include "Book.hpp"
#include <iostream>
using namespace std;

void Book::Bookset(){
    cout<<"Konstruktor klase book"<<endl;
    while(!knjige.empty()){
        for(int i=0;i<3;i++){
            if(knjige!=";" && i==0){
                author=knjige;
                i++;
            }
            if(knjige!=";" && i==1){
                title=knjige;
                i++;
            }
            if(knjige!=";" && i==2){
                nrpages=knjige;
            }
        }

    }
  }

//  Book::~Book(){
//      cout<<"Book dekonstruktor"<<endl;
//  }