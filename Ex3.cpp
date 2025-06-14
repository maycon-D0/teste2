#include <iostream>
using namespace std;
int main()
{
double 	x;
double y;
double z ;
   cout << "digite valor 1 :";
   cin >> x;
   cout <<"digite valor 2 :";
   cin>>y;
   cout << "digite valor 3 :";
   cin >> z;
   cout<<endl;
   if (x>=y&& x>=z)
   {
   	cout<<"o maior numero eh o "<<x<<endl;	
   }
   else if(y>=x&&y>=z)
   {
   	cout<<"o maior numero eh o "<<y<<endl;	
   }
else
   {
   	cout<<"o maior numero eh o "<<z<<endl;	
   }
	return 0;
}