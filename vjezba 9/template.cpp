#include <algorithm> 
#include <iostream>
using namespace std;

bool cmp(const char a,const char b){
    return (tolower(a) < tolower(b));
}

template <typename T>
void f(T* niz, unsigned int len){
    sort(niz, niz+len);
}

template <>
void f(char * niz, unsigned int len){
    sort(niz, niz+len, cmp);
}



int main(){
    int numbers[]= {1,5,4,3,7,9};
    int len = sizeof(numbers) / sizeof(numbers[0]);
    char chars[] = {'M', 'i', 'r', 'O', 'S', 'k', 'o', 'r', 'O'};
    int lens = sizeof(chars) / sizeof(chars[0]);
    f<int>(numbers, len);
    cout << "Integers sorted:" << endl;
    for (int i = 0; i < len; ++i)
        cout << numbers[i] << " ";
    cout << "\nChars sorted:" << endl;
    f<char>(chars, lens);
    for (int i = 0; i < lens; ++i)
        cout << chars[i] << " ";
    return 0;
}
