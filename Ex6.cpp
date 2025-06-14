#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double ps;
    double alt;
    double re;
    cout <<" digite o peso :";
    cin>> ps;
    cout<<"digite a altura :";
    cin>> alt;
    
re=ps/pow(alt,2);
cout <<" a  relacao eh "<<re<<endl;

if (re>=20&& re<25)
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
   
    return 0;
}