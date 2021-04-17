#include "Book.hpp"
#include <iostream>
#include <fstream>
using namespace std;

int main(){
   
    ifstream file("knjige.txt");
    string line;
    string books;
    Book b[10]={};
    b->Bookset();
    int i=0;
    while (getline(file, line)) {
            books = line.substr(0);
                b[i].knjige=books;
                i++;

    }
    for(int i=0;i<10;i++){
        cout<<b[i].knjige<<endl;
    }

}