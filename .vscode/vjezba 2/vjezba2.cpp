#include <iostream>
#include <cstring>
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


int* alocirani_niz(){
    int* niz=(int*)malloc(sizeof(int)*10);
    while(true){
        int c;
        int x;
        int i=0;
        cin >> x;
        if(c%10==0){
            int* niz=(int*)malloc(sizeof(int)*2);
        }
        if(x>0){
            niz[i]=x;
            i++;
        }
        else
            break;
        
    }
    return niz;
}
int* zbroj_prethodnika(int niz[],int n){
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
int min_max(int niz[],int n,int& min,int* max){
    min=niz[0];
    *max=niz[0];
    for(int i=0;i<n;i++){
        if(niz[i]<min){
            min=niz[i];
        }
        if(niz[i]>*max){
            *max=niz[i];
        }
    }
}

int main(){
   /* int niz[10]={1,1,3,4,5,6,7,8,9,22};
    int n=10;
    int min;
    int max;
    min_max(niz,n,min,&max);
    cout<<"Najmanji je:"<<min<<"\n Najveci je:"<<max<<endl;
    int* nizbrdo=zbroj_prethodnika(niz,n);
    for(int i=0;i<n;i++){
        cout<<"Novi niz je "<<nizbrdo[i]<<endl;1

    }
    free(nizbrdo);*/
    int* nizakpod=alocirani_niz();
    int len=(sizeof(nizakpod)/sizeof(*nizakpod));
    cout << "print" << len<<endl;
    for(int i=0;i<len;i++){
        cout<<"Alocirani niz je "<<nizakpod[i]<<endl;
    }
    free(nizakpod);
}