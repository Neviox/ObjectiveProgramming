#include <iostream>
using namespace std;


class Vector {       
  public:             
    double* element;
    int logicka;
    int fizicka;
    void vector_new();
    void vector_delete();
    void vector_push_back();
    void vector_pop_back();
    void vector_front();
    void vector_back();
    void vector_size();


    void Vector::vector_new(){
        logicka=0;
        fizicka=1;
        element = new double[fizicka];
         
    } 
    void Vector::vector_delete(){
        delete vector[];
    } 
    void Vector::vector_push_back(){
        logicka++;
        int x;
        cin>>"Dodaj novi clan">>x;
        *element[logicka]=x;
    } 
    void Vector::vector_pop_back(){
        delete *element[logicka];
    }
    void Vector::vector_front(){return *element[0]};
    void Vector::vector_back(){return *element[logicka]};
    int Vector::vector_size(){return logicka}; 
};

class Tocka {       
  public:             
    double x;
    double y;
    double z;

    Tocka nula(double* x,double* y,double* z){
        Tocka.x=0.0;
        Tocka.y=0.0;
        Tocka.z=0.0;
    return Tocka;
    }

int main(){
    
    Vector vector;
    vector.vector_new();
    cout<<vector.element,vector.fizicka,vector.logicka;
    /*vector.vector_new();
    vector.vector_new();
    vector.vector_new();
    vector.vector_new();*/
    

}
