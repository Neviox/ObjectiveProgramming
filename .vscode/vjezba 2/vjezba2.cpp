#include <iostream>
using namespace std;

struct Pravokutnik
{
    int a;
    int b;
};
struct Kruznica
{

    int fi;
};


int& alocirani_niz(int &referenca){
    int* niz=(int*)malloc(sizeof(int)*10);
    while(true){
        int x;
        int i=0;
        cin >> x;
        if(referenca%10==0){
            int* niz=(int*)malloc(sizeof(int)*2);
        }
        if(x>0){
            niz[i]=x;
            i++;
            referenca++;
        }
        else
            break;
        
    }
    return niz;
}
int* zbroj_prethodnika(int *niz,int n){
    int* novi=(int*)malloc(sizeof(int)*n);
    for(int i=0;i<n;i++){
        if(i>1){
            novi[i]=niz[i-1]+niz[i-2];
        }
        else
        novi[i]=niz[i];

    }
return novi;
}
int min_max(int niz[],int n,int& min,int &max){
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
        cout<<"Alocirani niz je "<<nizakpod[z]<<endl;
    }
    free(nizakpod);
}