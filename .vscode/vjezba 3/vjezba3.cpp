#include <iostream>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
using namespace std;


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
        for(int i=0;i<logicka;i++){
            delete &element[i];
        }
        delete[] element;
        } 
    void vector_push_back(int x){
        // cout<<"Unesi novi element vektora";
        // cin>>element[logicka];
        element[logicka]=x;
        logicka++;
    } 
    void vector_pop_back(){
        double* temp=new double[logicka-1];
        for(int i=0;i<(logicka-1);i++){
            temp[i]=element[i];
        }
        delete[] element;
        element=temp;
        logicka--;
    }
    int vector_front(){return element[0];}
    int vector_back(){return element[logicka-1];}
    int vector_size(){return logicka;} 
    void vector_print(){
        for(int i=0;i<logicka;i++){
            cout<<element[i]<<endl;
        }
    }
};

class Tocka {       
public:             
    double x;
    double y;
    double z;

    void nula(){
        x=0.0;
        y=0.0;
        z=0.0;
    }
    /*    
        void asset(int min,int max){
            x=rand() % max + min;
            y=rand() % max + min;
            z=rand() % max + min;
            cout<<x<<y<<z;
        }
        void value_get(double& rx,double& ry,double& rz){
            rx=x;
            ry=y;
            rz=z;        
        }
        int twodistance(int testx,int testy){
            int distance=sqrt((pow((x-testx),2)+(y-testy),2));
        return distance;
        }
        int threedistance(int testx,int testy,int testz){
            int distance=sqrt(pow((x-testx),2)+pow((y-testy),2)+pow((z-testz),2)));
        return distance;
        }
        */
    };


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
    Tocka tocka;
    srand (time(NULL));
    int min=2;
    int max=20;
    double rx=0;
    double ry=0;
    double rz=0; 
    value_get(rx,ry,rz);
    asset(min,max);
    twodistance(2,4);
    threedistasnce(2,2,2);
return 0;
}
