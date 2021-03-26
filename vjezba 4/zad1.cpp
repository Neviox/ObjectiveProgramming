#include <iostream>
#include "zad1.hpp"
using namespace std;

class Vector {                    
    double* element;
    int logicka;
    int fizicka;

    Vector(){
        Vector* v=new Vector;
    }
    Vector(int n,int k){
        if(k==true){
        for(int i=0;i<n;i++){
            element[i]=k;
            }
        }
    }
    Vector(int n,int k,Vector* v){
        Vector* cpy=new Vector;
        cpy->logicka=n;
        for(int i=0;i<n;i++){
            cpy->element[i]=v->element[i];
        }
    }
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


int main(){
    Vector v1;

}