#include <iostream>
#include <string>
#include <ostream>
#include <cmath>
using namespace std;


class money{
    int kuna;
    int lipa;
public:
    money(){;}
    money(int a){
        kuna=a;
    }
    money(int a,int b){
        kuna=a;
        lipa=b;
    }
    int get_kuna(){

        return kuna;
    }
    int get_lipa(){
        
        return lipa;
    }
    money operator+(const money& m){
        money racun;
        racun.kuna=this->kuna+m.kuna;
        racun.lipa=this->lipa+m.lipa;
    return racun;
    }
    money operator-(const money& m){
        money racun;
        racun.kuna=this->kuna-m.kuna;
        racun.lipa=this->lipa-m.lipa;
    return racun;
    }
    void operator+=(money& m){
        kuna+=m.get_kuna();
        lipa+=m.get_lipa();
    }
    void operator-=(money& m){
        kuna-=m.get_kuna();
        lipa-=m.get_lipa();
    }
    friend ostream &operator<<( ostream &out, money& m){
      if(m.lipa>99){
            int pb;
            pb=trunc(m.lipa/100);
            m.kuna+=pb;
            m.lipa=m.lipa%100;
        }  
      out<<m.kuna<<" kune , "<<m.lipa<<" lipa";
      return out;
        
    }
    operator double() { 
    return double(kuna) + double(lipa) / 100; 
    }

    ~money(){;}

};