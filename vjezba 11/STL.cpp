#include "STL.hpp"
#include <iostream>
#include <ctime>
using namespace std;

void unos (vector<int> &vektor, int brojelem){
    int unos;
    for (int i = 0; i < brojelem; i++) {
        cout << "Unesite broj: " << endl;
        cin >> unos;
        vektor.push_back(unos);
    }
}

void generiraj(vector<int>& vektor, int min, int max, int brojelem){
    int random;
    srand(time(NULL));
    for (int i = 0; i < brojelem; i++) {
        random = (rand() % max) + min;
        vektor.push_back(random);
    }
}

void ispis(vector<int> vektor){
    for (int element:vektor){
        cout << element << endl;
    }
}
vector<int> razlikavektora(vector<int> &vektor1,vector<int> &vektor2){
    vector<int> novivek;
    for(int i:vektor1){
    int flag=0;
        for(int j:vektor2){
            if(i==j){flag=1;}
        }
        if(flag==0){novivek.push_back(i);}
    }
return novivek;
}
void popravistring(string &s){
    string praznina = " ";
    for (int i = 0; i < s.size(); i++) {
        if (s[i + 1] == ',' && s[i] == ' ')
            s.erase(s.begin() + i);
        if (s[i] == ',' && s[i + 1] != ' ')
            s.insert(i + 1, praznina);
    }

}

void unosulistu(list<string> &lista){
    int x;
    string s;
    cout<<"Zeljeni broj elemenata liste:";
    cin>>x;
    for(int i=0;i<x;++i){
        cout<<"Unesite string:";
        cin>>s;
        lista.push_back(s);
    }
}

int brojslova(list<string> lista)
{
    int br_slova = 0;
    string temp;
    for (list<string>::iterator i = lista.begin(); i != lista.end(); i++){
        temp = *i;
        br_slova += temp.size();
    }
    return br_slova;
}
double avg(list<string> lista){
    list<int> velicine;
    int velicina;
    for (list<string>::iterator i = lista.begin(); i != lista.end(); i++) {
        std::string temp = *i;
        velicina = temp.size();
        velicine.push_back(velicina);
    }
    double avg = 0;
    for (list<int>::iterator i = velicine.begin(); i != velicine.end(); i++)
        avg += *i;
    avg = avg / velicine.size();
    return avg;
}
void ukloni_najdulji(list<string>& lista){
    int max = 0;
    string s;
    string temp;
    for (list<string>::iterator i = lista.begin(); i != lista.end(); i++){
        temp = *i;
        if (temp.size() > max) {
            max = temp.size();
            s = *i;
        }
    }
    lista.remove(s);
    return;
}
void ispisliste(list<string> lista){
    for (list<string>::iterator i = lista.begin(); i != lista.end(); i++)
        cout << *i << endl;
    return;
}
