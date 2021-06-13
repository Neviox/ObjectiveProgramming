#include <iostream>
#include <vector>
#include <iterator>
#include <string>
#include <algorithm>
#include <fstream>
using namespace std;

template <class t, unsigned int n>
class array{
    private:
        t polje[n];
    public:
        typedef t* myIterator;
        array(int val);
        myIterator begin();
        myIterator end();
        t& operator[] (unsigned int index);
        array& operator= (t isEq);
        t& operator+= (t toAdd);
};

void prirodan(vector<int>& vec);
bool veciodsto(int n);
bool manjiodsto(int n);
bool sortirajsilazno (int i,int j);
