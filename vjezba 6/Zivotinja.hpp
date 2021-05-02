#include <iostream>
#include <string>
using namespace std;


class Zivotinja{
        unsigned noge;
        string nova_zivotinja="dodan:";
    public:
        Zivotinja(){
            cout<<"Dodan:";
        }
        virtual int broj_nogu()=0;
        virtual string vrsta(){return nova_zivotinja;}
        virtual void print(){cout<<vrsta();}
        virtual ~Zivotinja();
};
class Kukac : public Zivotinja{
    public:
         int broj_nogu()=0;

};
class Pauk : public Zivotinja{
    public:
         int broj_nogu()=0;
};
class Ptica :public Zivotinja{
    public:
         int broj_nogu()=0;
};
class Zohar : public Kukac{
    string ime="Zohar";
    int noge=8;
    public:
         int broj_nogu(){return noge;}
         string vrsta(){return ime;}
        void print(){cout<<vrsta()<<"\n";}
};
class Tarantula : public Pauk{
        string ime="Tarantula";
        int noge=4;
    public:
         int broj_nogu(){return noge;};
         string vrsta(){return ime;}
         void print(){cout<<vrsta()<<"\n";}
};
class Orao : public Ptica{
    string ime="Orao";
    int noge=2;
    public:
         int broj_nogu(){return noge;}
         string vrsta(){return ime;}
         void print(){cout<<vrsta()<<"\n";}
};

class Brojac{
    unsigned zbroj;
    public:
        void reset(){zbroj=0;}
        void set_zbroj(Zivotinja &ziv){zbroj+=ziv.broj_nogu();}
        int get_zbroj(){return zbroj;}
        
};