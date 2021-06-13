#include <iostream>
#include <vector>
#include <iterator>
#include <string>
#include <algorithm>
#include <fstream>
#include "standardalgorithms.hpp"
using namespace std;


// class players
// {
// public:
//     players(){};
//     int number;
//     string name;
//     string lastname;
//     string country;
//     int doublefaults;
//     int games;
//     friend istream& operator>>(istream& is, players& i);
//     players(const players& i)
//     {
//         this->number = i.number;
//         this->name = i.name;
//         this->lastname = i.lastname;
//         this->country = i.country;
//         this->doublefaults = i.doublefaults;
//         this->games = i.games;
//     }
// };



// istream& operator>>(istream& is,players& i)
// {
//     return is >> i.number >> i.name >> i.lastname >> i.country >> i.doublefaults >> i.games;
// }

// vector<players> loadPlayer(ifstream& file)
// {
//     istream_iterator<players> is(file),ends;

//     vector<players> vec;
//     copy(is, ends, back_inserter(vec));

//     return vec;
// }

// void deleteFun(vector<players>& vec)
// {
//     vector<players>::iterator it = vec.begin();

//     while (it != vec.end())
//     {
//         if(it->doublefaults >= 4)
//         {
//             it = vec.erase(it);
//         }
//         else
//             it++;
//     }
// }

// void winner(vector<players> vec)
// {
//     int najmanje = 10;
//     players i;

//     for (vector<players>::iterator it = vec.begin(); it != vec.end(); it++)
//     {
//         if (it->doublefaults < najmanje)
//         {
//             najmanje = it->doublefaults;
//             i = (*it);
//         }
//     }
//     cout << "Player with least doublefaults: " << i.name << " " << i.lastname;
// }

// bool sortFun(players i1, players i2)
// {
//     if (i1.doublefaults < i2.doublefaults)
//     {
//         return true;
//     }
//     return false;
// }

// void sorting(vector<players>& vec)
// {
//     sort(vec.begin(), vec.end(), sortFun);
// }

// void printwautonr(vector<players>& vec)
// {
//     for(vector<players>::iterator it = vec.begin(); it != vec.end(); it++)
//     {
//         cout << it->number << " ";
//         cout << it->name << " ";
//         cout << it->lastname << " ";
//         cout << it->doublefaults << endl;
//     }
// }
//----------------------------------------------2 zadatak------------------------------------------//
// template <class t, unsigned int n>
// t& array<t, n>::operator+= (t toAdd){
//     return this = this + toAdd;
// }

// template <class t, unsigned int n>
// array<t, n>& array<t, n>::operator= (t isEq){
//     return this = isEq;
// }

// template <class t, unsigned int n>
// t& array<t, n>::operator[] (unsigned int index){
//     return polje[index];
// }

// template <class t, unsigned int n>
// t* array<t, n>::end(){
//     return polje + n;
// }

// template <class t, unsigned int n>
// t*  array<t, n>::begin(){
//     return polje;
// }

// template <class t, unsigned int n>
// array<t, n>::array(int val){
//     fill(polje, polje + n, val);
// }

//------------------------------3. zadatak----------------------------------------------
void prirodan(vector<int>& vec){
    for(vector<int>::iterator i=vec.begin();i!=vec.end();++i){
        if(*i<0){throw 100;}
        cout<<*i<< " ";
    }
}
bool veciodsto(int n){
    return n>100;
}
bool manjiodsto(int n){
    return n<100;
}
bool sortirajsilazno (int i,int j) { return (i>j); }