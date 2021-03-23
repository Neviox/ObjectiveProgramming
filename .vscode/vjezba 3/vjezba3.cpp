#include <iostream>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h> 
using namespace std;

//-------------------------------------------------Meta-----------------------------------------------//
class Meta{
    int dl,ur;
    int a,b;
    bool pogodena;
};
//---------------------------------------------------Oruzje-------------------------------------------//
class Oruzje{
    double x,y,z;
    int spremnik;
    int trenutni;
    bool shoot;
    bool reload;
};

void odredi_mete(Meta* meta,int a,int b,int dl,int ur,int n){
    Meta* meta=new Meta[n];
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
    cin>>"Broj meta:">>n;
    cout<<n<<endl;
    broj_meta(n);    
return 0;
}
