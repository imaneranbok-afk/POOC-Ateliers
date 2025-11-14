#include <iostream>
using namespace std;
template <class A , class B , class C>
class Personne {
    private :
        A nom, prenom;
        B age;
        C salaire;
    public :
    Personne (A n,A p,B a, C s) :nom(n),prenom(p),age(a),salaire(s){}
    void ajouter (A n , A p , B a,C s){
        cout << "les informations de personne sont :" << endl;
        cout << n << endl;
        cout << p << endl;
        cout << a << endl;
        cout << s << endl;
        cout << "ajouter avec succes" << endl;
    }
    void afficher(){
        cout << nom << endl;
        cout << prenom << endl;
        cout << age << endl;
        cout << salaire << endl;
    }
};
int main (){
    Personne<string, int, double> personne1("Imane", "Ranbok", 23, 100000);
    personne1.afficher();
}