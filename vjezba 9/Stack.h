#include <iostream>
#include <vector>
using namespace std;

template < typename T >

class Stack
{
    private:
        const int _defaultSize=10;
        const int _maxSize=50;
        int _size;
        T _top;
        T* stackPtr;
        vector<T> v;

    public:
        Stack(int a=10){
            _size=a;
            stackPtr=nullptr;
            v.reserve(_defaultSize);
        }
        ~Stack(){};
        void push(T a){
            if(check() && getSize()!=_maxSize){
                v.push_back(a);
                stackPtr=&v.back();
                _size++;
            }
            else
                cout<<"Stack is full"<<endl;
        }

        T pop(){
            if(!check()|| (check()&& getSize()!=0)){
                T a=v.back();
                v.pop_back();
                stackPtr=&v.back();
                --_size;
                return a;
            }
            else{
                stackPtr=nullptr;
            }
        }

        bool check(){
            if(v.size()==0){
                cout<<"Stack is empty"<<endl;
                return true;
            }
            if(v.size()==_maxSize){
                cout<<"Stack is full"<<endl;
                return false;
            }
            return true;
        }

        int getSize(){
            return _size;
        }

};