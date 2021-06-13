#include <iostream>
#include <vector>
#include <iterator>
#include <string>
#include <algorithm>
#include <fstream>
#include "standardalgorithms.cpp"
using namespace std;


int main()
{
    // ifstream file("winbledon_double_faults.txt");
    // vector<players> vec = loadPlayer(file);

    // // for(int i = 0; i < vec.size(); i++)
    // // {
    // //     cout << vec[i].name <<  " " << vec[i].lastname << endl;
    // // }
    // // cout << "Players with less than 4 doublefaults:" << endl;
    // // deleteFun(vec);
    // // for(int i = 0; i < vec.size();i++)
    // // {
    // //     cout << vec[i].name <<  " " << vec[i].lastname << endl;
    // // }
    // // winner(vec);
    // cout << "--------------------------------------------" << endl;
    // sorting(vec);
    // for(int i = 0; i < vec.size(); i++)
    // {
    //     cout << vec[i].name << " " << vec[i].lastname << " " << vec[i].doublefaults << endl;
    // }
    // cout<<"Auto number print!-----------------------------------------------";
    // printwautonr(vec);

    // ostream_iterator<short> os(cout, " ");
	// array<short, 10> a(4);
	// a[0] = a[2] += 5;
	// copy(a.begin(), a.end(), os);

    ifstream file3("brojevi.txt");
    istream_iterator<int> is(file3),ends;
    ostream_iterator<int> os(cout," ");
    ofstream novifile("novibrojevi.txt");
    ostream_iterator<int> osfile(novifile," ");
    vector<int> brojevi;
    copy(is,ends,back_inserter(brojevi));
    // try{
    //     prirodan(brojevi);
    // }
    // catch(int xc){
    //     if(xc==100){cout<<"Broj nije prirodan"<<endl;}
    // }
    int n=count_if(brojevi.begin(),brojevi.end(),veciodsto);
    cout<<"Zbroj brojeva vecih od 100="<<n<<endl;
    brojevi.erase(remove_if(brojevi.begin(),brojevi.end(),manjiodsto),brojevi.end());
    sort(brojevi.begin(),brojevi.end(),sortirajsilazno);
    copy(brojevi.begin(),brojevi.end(),os);
    //copy(brojevi.begin(),brojevi.end(),osfile);

}
