#include "Vehicle.hpp"
#include <iostream>
using namespace std;


 
int main () {

Counter c;
Vehicle* v[] = {new Catamaran(30), new Ferry(10, 5, 3), new Seaplane(15)};
size_t sz =sizeof v /sizeof v[0];
    for(unsigned i = 0; i < sz; ++i){c.ukupno(v[i]);}
    cout << "ukupno " << c.get_zbroj() << " putnika" << endl;
    for(unsigned i = 0; i < sz; ++i){delete v[i];}

return 0;
}