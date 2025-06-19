#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    double pe ,al,re;
char sx;
    cout << "Digite o sexo(f para feminino, m para masculino):";
    cin >> sx;
    cout << endl;

     cout<< "Digite o peso:";
    cin >> pe;
    cout << "Digite a altura:";
    cin >> al;
    re =pe /pow(al,2);
cout << "o imc eh "<<re<<endl;

    if (sx=='m')
    {

     if(re>=20&&re<25)
    {
cout<<"peso ideal"<<endl;
}
else if (re<20)
{
cout <<" abaixo do peso"<<endl;
}
   else 
   {
   cout<<"acima do peso"<<endl;
   }
   }
    else if (sx=='f')
    {
if(re>=20&&re<24)
    {
cout<<"peso ideal"<<endl;
}
else if (re<19)
{
cout <<" abaixo do peso"<<endl;
}
   else 
   {
   cout<<"acima do peso"<<endl;
   }
}
    else
cout<< "sexo invalido digite 'm' para masculino ou 'f' para feminino." <<endl;
    return 0;
}
