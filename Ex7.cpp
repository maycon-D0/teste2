#include <iostream>
using namespace std;

int main()
{
    double v1;
    double v2;
    double v3;
    cout <<" digite o primeiro valor :";
    cin>> v1;
    cout <<" digite o segundo valor:";
    cin>> v2;
    cout <<" digite o  terceirovalor :";
    cin>> v3;
if (v1+v2>v3&&v2+v3>v1&&v1+v3>v2)
    {
        
cout<<"e um triangulo"<<endl;


 if (v1==v2&&v1==v3)
{
cout <<"equilatero"<<endl;}

   else if (v1!=v2&&v1!=v3&& v2!=v3)
   {
   cout<<"escaleno"<<endl;
   }
   else 
   {
       cout<<"isosceles"<<endl;
       
   }
}
else 
{
cout<< "nao eh um triangulo"<<endl;
}
    return 0;
}