#include "STL.cpp"
#include <iostream>
using namespace std;

int main(){
vector<int> vektor1;
vector<int> vektor2;
vector<int> vektor;
// generiraj(vektor1,0,100,10);
// ispis(vektor1);
// generiraj(vektor2,0,50,10);
// cout<<"----------------------------------------------"<<endl;
// ispis(vektor2);
// cout<<"----------------------------------------------"<<endl;
// vektor=razlikavektora(vektor1,vektor2);
// ispis(vektor);
// string s = "Ja bih ,ako ikako mogu , ovu recenicu napisa ispravno .";
// popravistring(s);
// cout<<s<<endl;
// list<string>lista;
// unosulistu(lista);
// cout<<"avg="<<avg(lista)<<endl;
// cout<<"broj slova="<<brojslova(lista)<<endl;
// ukloni_najdulji(lista);
// ispisliste(lista);
listatrokuta vek;
trokut t(2,2,2),t1(5,5,5),rez;
vek.upis(t);
vek.upis(t1);
vek.ispis();
rez=vek.najveci();
rez.print();
}