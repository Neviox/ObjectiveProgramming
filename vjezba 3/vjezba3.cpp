#include <iostream>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h> 
using namespace std;

////-------------------------------------------------Meta-----------------------------------------------//
class Meta{
        int dx,dy;
        int gx,gy;
        int a,b;
          
    public: 
        void setMeta(int q,int w,int e,int r,int t,int z);
        int getMeta_dx();
        int getMeta_dy();
        int getMeta_gx();
        int getMeta_gy();
        int getMeta_a();
        int getMeta_b();
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
void Meta::setMeta(int q,int w,int e,int r,int t,int z) {
        dx=q;
        dy=w;
        gx=e;
        gy=r;
        a=t;
        b=z;
}

int Meta::getMeta_a(){return a;}
int Meta::getMeta_b(){return b;}
int Meta::getMeta_dx(){return dx;}
int Meta::getMeta_dy(){return dy;}
int Meta::getMeta_gx(){return gx;}
int Meta::getMeta_gy(){return gy;}

int pogodene_mete(Oruzje kalas,Meta* meta,int n){
    kalas.x=0;
    kalas.y=0;
    kalas.spremnik=30;
    kalas.trenutnimeci=5;
    while(kalas.trenutnimeci!=0){
        cout<<"Unesi putanju metka u kordinatnom sustavu(x,y)"<<""<<endl;
        cin>>kalas.x>>kalas.y;
        for(int i=0;i<n;i++){
            if(meta[i].getMeta_dx()>=kalas.x && meta[i].getMeta_gx()<=kalas.x && meta[i].getMeta_dy()<=kalas.y && meta[i].getMeta_gy()>=kalas.y){
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
class Vector {                    
    double* element;
    int logicka;
    int fizicka;
  public:
    void vector_new(){
        logicka=0;
        fizicka=1;
        element= new double;
         
    } 
    void vector_delete(){
        if(element!=0){
            for(int i=0;i<logicka;i++){
                delete &element[i];
            }
        delete[] element;
        }
    } 
    void vector_push_back(int x){
        // cout<<"Unesi novi element vektora";
        // cin>>element[logicka];
        element[logicka]=x;
        logicka++;
    } 
    void vector_pop_back(){
        if(element[logicka-1]!= 0){
            double* temp=new double[logicka-1];
            for(int i=0;i<(logicka-1);i++){
                temp[i]=element[i];
            }
        delete[] element;
        element=temp;
        logicka--;
        }
    }
    int vector_front(){
      if(element[0]!= 0){  
        return element[0];
        }
    }  
    int vector_back(){
      if(element[logicka-1]!=0){  
        return element[logicka-1];
        }
    }  
    int vector_size(){return logicka;} 
    void vector_print(){
      if(element!=0){  
        for(int i=0;i<logicka;i++){
            cout<<element[i]<<endl;
        }
      }  
    }
};
// //--------------------------------Klasa Tocke--------------------------------//
class Tocka {       
private:             
    double x;
    double y;
    double z;
public:
    void nula(){
        x=0.0;
        y=0.0;
        z=0.0;
    }
        
        void asset(int min,int max){
            x=rand() % max + min;
            y=rand() % max + min;
            z=rand() % max + min;
        }
        void value_get(double& rx,double& ry,double& rz){
            rx=x;
            ry=y;
            rz=z;        
        }
        int twodistance(Tocka t,Tocka t2){
            int distance=sqrt((pow((t.x-t2.x),2)+(t.y-t2.y),2));
        return distance;
        }
        int threedistance(Tocka t,Tocka t2){
            int distance=sqrt(pow((t2.x-t.x),2)+pow((t2.y-t.y),2)+pow((t2.z-t.z),2));
        return distance;
        }
        
        
    };


int main(){
    //-----------------------------------------prvi zadatak-----------------------!!
    Vector vector;
    vector.vector_new();
    vector.vector_push_back(2);
    vector.vector_push_back(4);
    vector.vector_push_back(2);
    //vector.vector_pop_back();
    //vector.vector_print();
    cout<<vector.vector_front()<<vector.vector_back()<<endl;
    vector.vector_delete();
    vector.vector_print();
    
    //-----------------------------------------drugi zadatak---------------------!!
    Tocka tocka,tocka2;
    srand (time(NULL));
    int min=2;
    int max=20;
    double rx;
    double ry;
    double rz; 
    //tocka.nula(); 
    tocka.asset(min,max);
    tocka2.asset(min,max);
    tocka.value_get(rx,ry,rz);
    tocka2.value_get(rx,ry,rz);
    cout<<tocka.twodistance(tocka,tocka2)<<endl;
    cout<<tocka.threedistance(tocka,tocka2);
    //-----------------------------------------peti zadatak---------------------!!
    int n;
    cout<<"Broj meta:";
    cin>>n;
    Meta* meta;
    Oruzje kalas;
    int q,w,e,r,t,z;
    for(int i=0;i<n;i++){
    cout<<"Donja lijeva tocka x:"<<"Donja lijeva tocka y:"<<"Gornja desna tocka x:"<<"Gornja desna tocka y:"<<"Duljina a stranice:"<<"Duljina b stranice:"<<endl;
    cin>>q>>w>>e>>r>>t>>z;
    meta[i].setMeta(q,w,e,r,t,z);
    }

    cout<<pogodene_mete(kalas,meta,n);
    
    
      
return 0;
}
