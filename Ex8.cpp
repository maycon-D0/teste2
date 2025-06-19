#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    double va, vb, vc;
    
    cout << "Digite o valor 1: ";
    cin >> va;
    cout << "Digite o valor 2: ";
    cin >> vb;
    cout << "Digite o valor 3: ";
    cin >> vc;
    cout << endl;
    
    double hipotenusa, cateto1, cateto2;

    if (va >= vb && va >= vc) {
        hipotenusa = va;
        cateto1 = vb;
        cateto2 = vc;
    }
    else if (vb >= va && vb >= vc) {
        hipotenusa = vb;
        cateto1 = va;
        cateto2 = vc;
    }
    else {
        hipotenusa = vc;
        cateto1 = va;
        cateto2 = vb;
    }

    cout << "A hipotenusa eh" << hipotenusa << endl;
    if(abs (pow(hipotenusa, 2) - (pow(cateto1, 2) + pow(cateto2, 2)))<0,0001){
        cout << "Os valores formam um triangulo retangulo." << endl;
    }
    else {
        cout << "Os valores nao formam um triangulo retangulo." << endl;
    }

    return 0;
}
