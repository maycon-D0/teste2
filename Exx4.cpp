#include <iostream>
using namespace std;

int main()
{
    double bas;
    double alt;
    double ar;
    cout <<" digite a base do retangulo:";
    cin>> bas;
    cout<<"digite a altura do retangulo:";
    cin>> alt;
    
ar=(bas*alt);
cout<<"a area do terreno eh "<< ar<<endl;
   

if (ar>100)
{
cout <<"terreno grande" <<endl;
}
    return 0;
}