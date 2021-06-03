#include <vector>
#include <string>
#include <list>
#include <iostream>
using namespace std;

void unos(vector<int> &vektor, int brojelem);
void generiraj(vector<int> &vect,int min,int max,int brojelem);
void ispis(vector<int> vektor);
vector<int> razlikavektora(vector<int> &vektor1,vector<int> &vektor2);
void popravistring(string &s);
void unosulistu(list<string> &lista);
int brojslova(list<string> lista);
double avg(list<string> lista);
void ukloni_najdulji(list<string>& lista);
void ispisliste(list<string> lista);

class trokut{
public:
    int a;
    int b;
    int c;
    int opseg;
    trokut(int a,int b,int c){
        this->a=a;
        this->b=b;
        this->c=c;
        this->opseg=a+b+c;
    }
    trokut(){}
    void print() { cout <<"a="<< a << " " <<"b="<< b << " " <<"c="<< c <<" Opseg="<< opseg << endl; }
};

class listatrokuta{
    public:
    vector<trokut> v;
    void upis(trokut t){v.push_back(t);}
    void ispis(){
        for(auto i:v){
            i.print();
        }
    }
    trokut& najveci(){
        int temp = 0;
        trokut& najvecitrokut = v[0];
        for (auto i:v) {
            if (i.opseg > temp) {
                temp = i.opseg;
                najvecitrokut = i;
            }
        }
        return najvecitrokut;
    }
};
