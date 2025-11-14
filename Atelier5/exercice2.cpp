#include <iostream>
using namespace std;
template<class D> 
class Test{
public:
static D tableau[] ; //declaration d'une tableau de type D template  static 
public :
    static D division(D indice, D diviseur){  
        if( diviseur == 0){
            throw "cannot device by 0";
        }
        return  tableau[indice]/diviseur;
}
};
template <class D>
D Test<D> ::tableau[] = {17, 12, 15, 38, 29, 157, 89, -22, 0, 5} ;
int main() {
int x, y;
cout << "Entrez l'indice de l'entier à diviser: " << endl;
cin >> x ;
cout << "Entrez le diviseur: " << endl;
cin >> y ;
try{
cout << "Le résultat de la division est: "<< endl;
cout <<Test<int>::division(x,y) << endl;
}
catch(const char* e){
    cerr << e << endl;
}
return 0;
}