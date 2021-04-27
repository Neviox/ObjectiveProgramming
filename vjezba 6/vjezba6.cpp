#include "vjezba6.hpp"
#include <iostream>
using namespace std;

Zivotinja::~Zivotinja(){

}

int main(){
    Zohar tukac;
    tukac.print();
    Tarantula tarantino;
    tarantino.print();
    Orao kopao;
    kopao.print();
    Brojac c;
    c.set_zbroj(tukac);
    c.set_zbroj(tarantino);
    c.set_zbroj(kopao);
    cout<<"Broj nogu :"<<c.get_zbroj();
    return 0;
}