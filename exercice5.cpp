#include <iostream>
using namespace std;

template <class C>
C carre(C x){
    cout << "le carre est : " << endl;
    C carre = x*x;
    return carre;
}
int main (){
    int nombre;
    cout << "veuillez entrer la valeur  :" << endl;
    cin >> nombre;
    cout << carre(nombre);
    return 0;
}