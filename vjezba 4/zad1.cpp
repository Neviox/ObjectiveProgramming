#include <iostream>
#include "zad1.hpp"
using namespace std;
                 
    Vector::Vector(){
        element=0;
        logicka=0;
        fizicka=0;
        cout<<"Ulaz u konstruktor stvaranja"<<endl;

    }
    Vector::Vector(int n,double k){
        fizicka=n;
        logicka=n*4;
        if(&k==NULL){
            for(int i=0;i<fizicka;i++){
                element[i]=0;
            }
        }
        else{
            for(int i=0;i<fizicka;i++){
                element[i]=k;
            }
        }
        cout<<"Ulaz u konstruktor punjenja"<<endl;
    }
    Vector::Vector(Vector &v) {
        cout<<"Ulaz u konstruktor kopiranja"<<endl;
        Vector* vektor=new Vector;
        for(int i=0;i<v.logicka;i++){
        vektor->element[i]=v.element[i];
        }
        vektor->fizicka=v.fizicka;
        vektor->logicka=v.logicka;
          
    }

    Vector::~Vector(){
        cout<<"Unistenje za 3,2,1..."<<endl;
    }
    void Vector::vector_new(){
        logicka=0;
        fizicka=1;
        element= new double;
         
    } 
    void Vector::vector_delete(){
        for(int i=0;i<logicka;i++){
            delete &element[i];
        }
        delete[] element;
        } 
    void Vector::vector_push_back(int x){
        element[logicka]=x;
        logicka++;
    } 
    void Vector::vector_pop_back(){
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
    void Vector::vector_print(){
        for(int i=0;i<fizicka;i++){
        cout<<element[i]<<endl;
      }
    }

int main(){
    Vector v1;
    Vector v2(3,2);
    Vector v3(v2);
    v3.vector_print();
    
return 0;
}