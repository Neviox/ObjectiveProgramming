#include <iostream>
#include "Stack.h"
using namespace std;

int main()
{
    Stack<int> s;
    for(int i=1;i<=5;i++){
        s.push(5);
    }
    s.push(7);

    cout<<"Size:"<<s.getSize()<<endl;
    int a=s.pop();
    cout<<"Pop number:"<<a<<endl;
    cout<<"Size after pop:"<<s.getSize()<<endl;
    if(s.check()==1){
        cout<<"Stack is not empty"<<endl;
    }
    else cout<<"Stack is empty";
}