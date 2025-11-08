#include<iostream>
using namespace std;


 class Personne{
    private :
        string nom, prenom;
        int age;
    public :
        // constructeur par defaul par defaul :
        Personne() = default;
        Personne(string n, string p , int a) : nom(n), prenom(p), age(a) {};
        void afficherInfo(){  // puisque les attribut de classe sont d'acces private alors on peux pas afficher a l'exeterieur du classe d'ou  la methode fonction afficher leux
            cout << "le nom est :" << nom <<endl;
            cout << "le Prenom est :" << prenom <<endl;
            cout << "le age est :" << age <<endl;
        }
 };

int main (){
    Personne P;
    Personne P2("Imane", "Ranbok", 23);
    P.afficherInfo();
    P2.afficherInfo();
    return 0;
}