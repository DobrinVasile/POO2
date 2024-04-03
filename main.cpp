#include <iostream>
#include <stdio.h>

using namespace std;

class CDreptunghi
{
    int x, y;
public:
    void set_valori (int a, int b)
    {
        x = a;
        y = b;
    }
    int aria (void);
};

int CDreptunghi::aria(void)
{return x*y;}

int main ()
{
    char l;
    int a,b;
    CDreptunghi drept;

    cout<<"--Aria dreptunghiului--"<<endl;
   do {
           cout << "lungimea:";
           cin >> a;
           cout << "latimea:";
           cin >> b;
           drept.set_valori(a, b);
           cout << "aria:" << drept.aria()<<endl;

           cout<<"Doresti sa continui?(d-da/n-nu):";
           cin>>l;

           while(l!='d' && l!='n'){
               cout<<"Eroare, introdu o optiune valida(d-da/n-nu):";
               cin>>l;
           }
   }while(l=='d');

    return 0;
}
