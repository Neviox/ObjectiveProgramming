#include <iostream>
#include <fstream>
#include <ctime>

using namespace std;
class xception{
    public:
    virtual const char* what() =0;
};

class Operand:public xception{
    public:
    virtual const char* what() {
        return "Not a number error!";
    }
};

class Operation:public xception{
    public:
    virtual const char* what(){
        return "Operation error!";
    }
};

class Resultex:public xception{
    public:
    virtual const char* what(){
        return "Divided by zero error!";
    }
};

class Log{
    public:
        void writer(string msg){
        ofstream fout("errors.log", ios_base::out | ios_base::app);
		time_t rawtime;
        struct tm * timeinfo;
        char buffer[80];
        time (&rawtime);
        timeinfo = localtime(&rawtime);
        strftime(buffer,sizeof(buffer),"%d-%m-%Y %H:%M:%S",timeinfo);
        string str(buffer);
		fout<<str<<" ";
		fout << msg << endl;
        fout.close();
       }
};
int Check_number(){
    int a;
    cout<<"Unesite operand:";
    cin>>a;
    if(cin.fail() || isalpha(a)){
        throw Operand();
    }
    else return a;

}

char Check_operation(){
    char c;
    cout<<"Unesite operator:";
    cin>>c;
    if(isdigit(c) || (c!='*' && c!='/' && c!='-' && c!='+')){
        throw Operation();
    }
    else return c;

}

int Result(int a,int b,char c){
    if(c=='+'){return a+b;}
    else if(c=='-'){return abs(a-b);}
    else if(c=='*'){return a*b;}
    else if(c=='/'){return a/b;}
}

int main(){
    Log log;
    try{
    while(true){
        int a=Check_number();
        char c=Check_operation();
        int b=Check_number();
        int res=Result(a,b,c);
        cout<<"Result of the operation is: "<<res<<endl;
        }    

    }
    catch(xception& ex){
            log.writer(ex.what());
            cout<<ex.what()<<endl;
        }
}