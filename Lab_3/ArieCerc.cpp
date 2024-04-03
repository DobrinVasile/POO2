
#include <math.h>
#include <iostream>

using namespace std;

class Cerc
{
    int raza;
public:
    void set_raza(int a){raza=a;};
    float lungime (void) {return (2*M_PI*raza);};
    float arie (void) {return (M_PI*raza*raza);};

};

int main()
{
    Cerc cerculet;
    int r;
    char l;
    do {
        cout << "--Lungime/Arie cerc--" << endl;
        cout << "introduceti raza cercului raza=";
        cin >> r;
        cerculet.set_raza(r);
        cout << "Lungimea cercului este: " << cerculet.lungime();
        cout<<endl;
        cout << "Aria cercului este: " << cerculet.arie();
        
    }while(l=='d');

    return 1;
}


