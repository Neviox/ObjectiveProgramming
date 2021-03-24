#include <iostream>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h> 
using namespace std;

//-------------------------------------------------Meta-----------------------------------------------//
class Meta{
public:
    int dx,dy;
    int gx,gy;
    int a,b;
private:
    bool pogodena;
};
//---------------------------------------------------Oruzje-------------------------------------------//
class Oruzje{
   public:
    double x,y,z;
    int spremnik;
    int trenutnimeci;
    int shoot;
    bool reload;
};

Meta* odredi_mete(Meta* meta,int n){
    Meta* mete=new Meta[n];
    for(int i=0;i<n;i++){
        cout<<"Donja lijeva tocka x:"<<"Donja lijeva tocka y:"<<"Gornja desna tocka x:"<<"Gornja desna tocka y:"<<"Duljina a stranice:"<<"Duljina b stranice:"<<endl;
        cin>>mete[i].dx>>mete[i].dy>>mete[i].gx>>mete[i].gy>>mete[i].a>>mete[i].b;
    }
return mete;
}
int pogodene_mete(Oruzje kalas,Meta* meta,int n){
    kalas.x=0;
    kalas.y=0;
    kalas.spremnik=30;
    kalas.trenutnimeci=5;
    while(kalas.trenutnimeci!=0){
        cout<<"Unesi putanju metka u kordinatnom sustavu(x,y)"<<""<<endl;
        cin>>kalas.x>>kalas.y;
        for(int i=0;i<n;i++){
            if(meta[i].dx>=kalas.x && meta[i].gx<=kalas.x && meta[i].dy<=kalas.y && meta[i].gy>=kalas.y){
                kalas.shoot++;
                kalas.trenutnimeci--;
            }
        }
        kalas.trenutnimeci--; 
    }
    kalas.reload=true;
    kalas.trenutnimeci=kalas.spremnik;
    return kalas.shoot;
}
// //---------------------------------------------------Klasa vektora------------------------------------//
// class Vector {                    
//     double* element;
//     int logicka;
//     int fizicka;
//   public:
//     void vector_new(){
//         logicka=0;
//         fizicka=1;
//         element= new double;
         
//     } 
//     void vector_delete(){
//         for(int i=0;i<logicka;i++){
//             delete &element[i];
//         }
//         delete[] element;
//         } 
//     void vector_push_back(int x){
//         // cout<<"Unesi novi element vektora";
//         // cin>>element[logicka];
//         element[logicka]=x;
//         logicka++;
//     } 
//     void vector_pop_back(){
//         double* temp=new double[logicka-1];
//         for(int i=0;i<(logicka-1);i++){
//             temp[i]=element[i];
//         }
//         delete[] element;
//         element=temp;
//         logicka--;
//     }
//     int vector_front(){return element[0];}
//     int vector_back(){return element[logicka-1];}
//     int vector_size(){return logicka;} 
//     void vector_print(){
//         for(int i=0;i<logicka;i++){
//             cout<<element[i]<<endl;
//         }
//     }
// };
// //--------------------------------Klasa Tocke--------------------------------//
// class Tocka {       
// private:             
//     double x;
//     double y;
//     double z;
// public:
//     void nula(){
//         x=0.0;
//         y=0.0;
//         z=0.0;
//     }
        
//         void asset(int min,int max){
//             x=rand() % max + min;
//             y=rand() % max + min;
//             z=rand() % max + min;
//         }
//         void value_get(double& rx,double& ry,double& rz){
//             rx=x;
//             ry=y;
//             rz=z;        
//         }
//         int twodistance(int testx,int testy){
//             int distance=sqrt((pow((testx-x),2)+(testy-y),2));
//         return distance;
//         }
//         int threedistance(int testx,int testy,int testz){
//             int distance=sqrt(pow((x-testx),2)+pow((y-testy),2)+pow((z-testz),2));
//         return distance;
//         }
        
        
//     };


int main(){
    //-----------------------------------------prvi zadatak-----------------------!!
    // Vector vector;
    // vector.vector_new();
    // vector.vector_push_back(2);
    // vector.vector_push_back(4);
    // vector.vector_push_back(2);
    // //vector.vector_pop_back();
    // //vector.vector_print();
    // cout<<vector.vector_front()<<vector.vector_back()<<endl;
    // vector.vector_delete();
    // vector.vector_print();
    
    //-----------------------------------------drugi zadatak---------------------!!
    // Tocka tocka;
    // srand (time(NULL));
    // int min=2;
    // int max=20;
    // double rx;
    // double ry;
    // double rz; 
    // //tocka.nula();
    // tocka.asset(min,max);
    // tocka.value_get(rx,ry,rz);
    // cout<<tocka.twodistance(22,94);
    // cout<<tocka.threedistance(2,2,2);
    //-----------------------------------------peti zadatak---------------------!!
    int n;
    Meta* meta;
    Oruzje kalas;
    cout<<"Broj meta:";
    cin>>n;
    cout<<n<<endl;
    meta=odredi_mete(meta,n);
    cout<<pogodene_mete(kalas,meta,n);
    
    
      
return 0;
}
