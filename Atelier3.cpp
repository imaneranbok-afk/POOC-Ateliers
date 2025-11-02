#include <iostream>
using namespace std;
// ----------------------------------------------------------------------------------EXERCICE1--------------------------------------------------------------------------------------------
// class Pile {
// private:
//     int T[5];
//     int dernier;
// public:

//     Pile(){
//         dernier = -1;
//         cout << "la pile initilisee est vide !" << "\n";
//     }
//     // Empiler
//     void push(int valeur) {
//             T[++dernier] = valeur ;
//             cout << " valeur empiler" << valeur <<"\n";
//     }

//     // Dépiler
//     void pop() {
//         if (dernier>= 0) {
//             T[dernier];
//             cout << "valeur dipiler" <<  T[dernier]<<"\n";
//         } else {
//             cout << "Pile vide !\n";
//         }
//     }

    
//     void afficher() {
//         cout << "le contenue de la pile :" <<"\n";
//         for (int i = 0; i < dernier; i++){
//             cout << T[i] << "\n";
//         }
//     }
// };
// int main() {
//     Pile p1;
//     p1.push(10);
//     p1.push(20);
//     p1.push(30);
//     p1.afficher();
//     p1.pop();
//     p1.afficher();

//     return 0;
// }
// -----------------------------------------------------------------------EXERCICE2--------------------------------------------------------------------------------------------
// class Fichier {
// private:
//     char* p;           // pointeur vers la zone mémoire
//     long longueur;     

// public:
//     Fichier(long longueur) {
//         this->longueur = longueur;
//         p = nullptr;
//     }
//     void Creation() {
//         p = new char[longueur]; // alloue un tableau d’octets
//         cout << "Mémoire de " << longueur << " octets allouée." << endl;
//     }
//     void Remplit() {
//         if (p == nullptr) {
//             cout << "Erreur : mémoire non allouée !" << endl;
//             return;
//         }

//         for (long i = 0; i < longueur; i++) {
//             p[i] = 'A' + (i % 26); // remplir avec des lettres
//         }
//     }
//     void Affiche() {
//         if (p == nullptr) {
//             cout << "Aucune mémoire à afficher !" << endl;
//             return;
//         }

//         cout << "Contenu du fichier : ";
//         for (long i = 0; i < longueur; i++) {
//             cout << p[i];
//         }
//         cout << endl;
//     }

//     ~Fichier() {
//         delete[] p;
//         cout << "Mémoire libérée, fichier détruit." << endl;
//     }
// };

// int main() {
    
//     Fichier* f = new Fichier(10); // fichier de 10 octets

//     f->Creation();  
//     f->Remplit();  
//     f->Affiche();   

//     delete f;
//     int x = 1;
//     int *p = &x;
//     cout << p <<endl;
//     cout << *p;
//     return 0;
// }
// ----------------------------------------------------------------------------EXERCICE3-------------------------------------------------------------------------------------------
//     struct element{
//         int valeur;
//         element *suivant;
//     };
// class liste{
//     private :
//         element *tete; // pointeur de type element ; liste chainee
//     public :
//     liste(){
//         tete = nullptr;
//     }
//     void ajouter(int x){
//         element *nouveau = new element; // cree un pointeur de type element
//         nouveau->valeur = x;
//         nouveau->suivant = tete;
//         tete = nouveau;
//        }
//     void supprimer(){
//         element *temp = tete;
//         tete = tete->suivant;
//         delete temp;
//     }
//     void afficher(){
//         element *courant = tete;
//         cout << "liste : ";
//         while (courant != nullptr)
//         {
//             cout << courant->valeur << " ";
//             courant = courant->suivant;
//         }
//     }
//     ~liste(){
//         while (tete != nullptr){
//             supprimer();
//         }
//     }
// };
// int main (){
//     liste l1;
//     l1.ajouter(1);
//     l1.ajouter(2);
//     l1.ajouter(3);
//     l1.afficher();

//     l1.supprimer();
//     l1.afficher();

//     return 0;
// }
//----------------------------------------------------------------------------EXERCICE4-------------------------------------------------------------------------------------------

class Client{
    private :
        int id;
        string nom, prenom;
    public :
    Client() :id(0),nom(""),prenom (""){}
    Client(int id,string nom,string prenom) :id(0),nom("imane"),prenom("ranbok"){}
    Client( const Client &c){
        this->id = c.id;
        this->nom = c.nom;
        this->prenom = c.prenom;
    }
    void afficher(){
        cout << "les information :";
        cout <<id <<" "<< nom  <<" "<< prenom;
    }
    ~Client(){
        delete id;
        delete nom;
        delete prenom;
    }
};
class Compte{
    private :
        int numero;
        float solde;
        Client *client;
    public :
        long num_comptes;
        Compte() : numero(0), solde(0), client(nullptr){}
        Compte(int numero ,float solde,&client)
}
