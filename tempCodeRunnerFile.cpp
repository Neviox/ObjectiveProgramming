#include <iostream>
#include "zad2.hpp"
#include <string>
#include <cmath>
using namespace std;

void pretvorba(char* niz){
    for(int i=0;i<10;i++){
        if(isalpha(niz[i])&& islower(niz[i])){
            toupper(niz[i]);
        }
        else if(isalpha(niz[i])&& isupper(niz[i])){
                tolower(niz[i]);
        }
        else{continue;}
    }
}


int main(){
 char niz[10]={1,'abc',2,'DFEG',3,'KOKI',5,'loki',11,9};
 cout<<pretvorba(niz);

    return 0;
}