#include <iostream>
using namespace std;

struct Pravokutnik
{
    int a;
    int b;
    int x;
    int y;
};
struct Kruznica
{
    int fipola;
    int x;
    int y;
};
struct Vector {                    
    double* element;
    int logicka;
    int fizicka;
};
    void vector_new(int logicka,int fizicka,double* element){
        logicka=0;
        fizicka=1;
        element= new double;
         
    } 
    void vector_delete(int logicka,double* element){
        for(int i=0;i<logicka;i++){
            delete &element[i];
        }
        delete[] element;
        } 
    void vector_push_back(int x,double* element,int logicka){
        // cout<<"Unesi novi element vektora";
        // cin>>element[logicka];
        element[logicka]=x;
        logicka++;
    } 
    void vector_pop_back(int logicka,double* element){
        double* temp=new double[logicka-1];
        for(int i=0;i<(logicka-1);i++){
            temp[i]=element[i];
        }
        delete[] element;
        element=temp;
        logicka--;
    }
    int vector_front(double* element){return element[0];}
    int vector_back(double* element,int logicka){return element[logicka-1];}
    int vector_size(int logicka){return logicka;} 

int broj_pravokutnika(Pravokutnik prav,Kruznica kruz,int& rez_pravokutnika){ //vraca broj pravokutnika u povrsini kruznice
    cout << "Unesi za kruznicu : polumjer i poziciju u kordinatnom sustavu(x,y)"<<endl;
    cin >> kruz.fipola >> kruz.x >> kruz.y;
    for(int i=0;i<3;i++){
        cout << "Unesi za pravokutnik : sirinu/2,visinu/2 i poziciju u kordinatnom sustavu(x,y) "<<endl;
        cin >> prav.a >> prav.b >> prav.x >> prav.y;
        if(abs(prav.x-kruz.x)<=kruz.fipola+prav.a && abs(prav.y-kruz.y)<=kruz.fipola+prav.b){
                rez_pravokutnika++;        
            }   
    }
return rez_pravokutnika;
}

int& vraca_referencu(int niz[],int &ref){ //vraca referencu na element niza
    return niz[ref];
}


int* alocirani_niz(int &referenca){ //input koji prima u funkciji ispisuje u mainu
    int* niz=new int[10];
    while(true){
        int x;
        cin >> x;
        if(referenca%10==0){
            int* niz=new int[referenca*2];
        }
        if(x>0){
            niz[referenca]=x;
            referenca++;
        }
        else
            break;
        
    }
    return niz;
}
int* zbroj_prethodnika(int *niz,int n){ //u primljenom nizu zbraja zadnja dva prethodnika te zbrojem mijenja mjesto trenutnog indexa
    int* novi=new int[n];
    for(int i=0;i<n;i++){
        if(i>1){
            novi[i]=niz[i-1]+niz[i-2];
        }
        else
        novi[i]=niz[i];

    }
return novi;
}
void min_max(int niz[],int n,int& min,int &max){  //ispisuje najmanji i najveci broj u nizu!
    min=niz[0];
    max=niz[0];
    for(int i=0;i<n;i++){
        if(niz[i]<min){
            min=niz[i];
        }
        if(niz[i]>max){
            max=niz[i];
        }
    }
}

int main(){
    
    //prvi zadatak!
    int niz[10]={1,1,3,4,5,6,7,8,9,22};
    int n=10;
    int min;
    int max;
    min_max(niz,n,min,max);
    cout<<"Najmanji je:"<<min<<"\n Najveci je:"<<max<<endl;

    //cetvrti zadatak!
    int* nizbrdo=zbroj_prethodnika(niz,n);
    for(int i=0;i<n;i++){
        cout<<"Novi niz je "<<nizbrdo[i]<<endl;
    }
    free(nizbrdo);

    //peti zadatak!
    int referenca=0;
    int* nizakpod=alocirani_niz(referenca);
    //int len=(sizeof(nizakpod)/sizeof(nizakpod));
    
    cout << referenca<<endl;
    for(int z=0;z<referenca;z++){
        cout<<"Alocirani niz je  "<<nizakpod[z]<<endl;
    }
    free(nizakpod);

    //treci zadatak
    int ref=0;
    for(int i=0;i<n;i++){
     cout<<"Referencirani element je"<<vraca_referencu(niz,ref)<<endl;
     ref++;
    }
    //drugi zadatak
    int rez_pravokutnika;
    Pravokutnik prav[3];
    Kruznica kruz;
    cout<<broj_pravokutnika(*prav,kruz,rez_pravokutnika)<<endl;
    //sesti zadatak
    Vector vector;
    int x;
    cin>>x;
    vector_new(vector.logicka,vector.fizicka,vector.element);
    vector_push_back(x,vector.element,vector.logicka);
    //vector.vector_pop_back();
    //vector.vector_print();
    cout<<vector_front(vector.element)<<vector_back(vector.element,vector.logicka)<<endl;
    vector_delete(vector.logicka,vector.element);
}