#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;


class Vehicle{                          //------------------------bazna klasa----------------------------//
    unsigned num_passangers;
    public:
    virtual string get_type()=0;
    virtual int get_num_passangers(){return num_passangers;}
    virtual ~Vehicle(){
    }
};

class Watercraft:virtual public Vehicle{        //---------------------vodeni tip vozila----------------------------//
    string type="water";
    public:
    string get_type(){return type;}

};

class Aircraft:virtual public Vehicle{          //------------------------zracni tip vozila----------------------//
    string type="air";
    public:
    string get_type(){return type;}

};

class Seaplane:public Vehicle{          //------------------------------hidroavion-------------------------//
    string type="air-water";
    unsigned num_passagers;
    public:
    Seaplane(int n){
        num_passagers=n;
        cout<<get_type()<< " putnika "<<get_num_passangers()<<endl;
    }
    string get_type(){return type;}
    int get_num_passangers(){return num_passagers;}
    ~Seaplane(){
    }

};

class Catamaran:public Watercraft{          //-----------------------------katamaran(vjerojatno za hvar,na hvaru je ludnica)--------------------//
    string type="water";
    unsigned num_passagers;
    public:
    Catamaran(int n){
        num_passagers=n;
        cout<<get_type()<< " putnika "<<get_num_passangers()<<endl;
    }
    string get_type(){return type;}
    int get_num_passangers(){return num_passagers;}
    ~Catamaran(){
    }

};
class Ferry:public Vehicle{                 //------------------------------------trajekt(zimska linija ocito)--------------------------------//
    string type="water";
    unsigned num_passagers;
    unsigned setaci;
    unsigned bicikle;
    unsigned automobil;
    public:
    Ferry(int n,int k,int z){
        setaci=n;
        bicikle=k;
        automobil=z*5;
        num_passagers=setaci+bicikle+automobil;
        cout<<get_type()<< " putnika "<<get_num_passangers()<<" od toga u automobilu "<<get_automobil()<< " i na bicikli "<<get_bicikle()<<endl;
    }
    string get_type(){return type;}
    int get_num_passangers(){return num_passagers;}
    int get_bicikle(){return bicikle;}
    int get_automobil(){return automobil;}
    ~Ferry(){
    }

};

class Counter{                                    //----------------------------------broji glave---------------------//
    protected:
    int zbroj;
    public:
    Counter(){
        
    }
    void ukupno(Vehicle* v){
        zbroj+=v->get_num_passangers();
    }
    int get_zbroj(){return zbroj;}
    ~Counter(){
    
    }
};