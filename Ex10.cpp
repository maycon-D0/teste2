#include <iostream>
using namespace std;

int main()
{
	double me;
	double p1;
	double p2;
	cout << "informe  a nota da 1a prova:";
	cin >> p1;
	cout << "informe a nota da 2a prova:";
	cin >> p2 ;
me=(p1+2*p2)/3;
cout<<" a media eh "<<me<<endl;
if ( me >=5)
{

cout<< "aprovado";
}

 else
 {
cout <<"reprovado"<<endl; 
}
	
	return 0;
}