#include <iostream>
using namespace std;
int main()
{
double 	x;
double y;
   cout << "digite valor 1 :";
   cin >> x;
   cout <<"digite valor 2 :";
   cin>>y;
   cout<<endl;
   if (x>y)
   {
   	cout<<"o maior numero eh o "<<x<<endl;
   }
    else if (x<y)
   {
   	cout<<"o maior numero eh o "<<y<<endl;	
   }
   else
   {
   	cout<<"os numeros sao iguais"<<endl;
   }
   cout<<" fim do programa"<<endl;
	return 0;
}