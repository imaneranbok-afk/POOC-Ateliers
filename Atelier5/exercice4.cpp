#include <iostream>
using namespace std ;
class A{
    protected :
    int n ;
    float x ;
public :
    A (int p = 2){ //constructeur de class A avec un seule parametre  aficher :
        n = p ; x = 1 ;
        cout << "** construction objet A : " << n << " " << x << "\n"; // construction objet A : 2 1
    }
};
class B{ 
    protected :
    int n ;
    float y ;
public :
B (float v = 0.0){ 
    n = 1 ; y = v ;
    cout << "** construction objet B : " << n << " " << y << "\n"; // construction object B : 1 0.0
}
} ;
class C : public B, public A{ //CLASS Herite de class A et B
    int n ;
    int p ;
    public :
    C (int n1=1, int n2=2, int n3=3, float v=0.0) : A (n1), B(v){ 
        n = n3 ; p = n1+n2 ;
        cout << "** construction objet C : " << n << " " << p <<"\n" ;
}
} ;
main()
{ 
    C c1 ; //constructer par default 
    //la class c herite de class A et B alors lorsque on cree un object de class C les constructeur de class B et  A ecrit des object respectivement  automatiquement : B en suite A en suite C  ordre de l'heritage multiple 
    // ** construction objet B : 1 0   constructeur de l'object B on a  B(v) :n = 1 et v = 0
    // ** construction objet A : 1 1   constructeur de l'object A on a A(n1) n = n1 = 1(valeur par defaut de n1) et x = 1
    // ** construction objet C : 3 3   constructeur de l'object C on a n = n3 = 3 et p =n1 +n2 =3
    
    C c2 (10, 11, 12, 5.0) ; 
    // ** construction objet B : 1 5  n = 1 et v = 5
    // ** construction objet A : 10 1 n1 =10 et x = 1
    // ** construction objet C : 12 21 n3 = 12 et p = n1+n2 =10+11
}