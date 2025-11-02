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
    Client(int id,string nom,string prenom) :id(id),nom(nom),prenom(prenom){}
    Client(const Client &c){
        this->id = c.id;
        this->nom = c.nom;
        this->prenom = c.prenom;
    }
    void afficher(){
        cout << "les information : \n";
        cout <<"id :"<<id <<" nom: "<< nom  <<" prenom: "<< prenom;
    }
    int getId() const { return id; }
    string getNom() const { return nom; }
    string getPrenom() const { return prenom; }
    ~Client(){
        cout << "Destruction du client : " << nom << " " << prenom << endl;
    }
};
class Compte{
    private :
        int numero;
        float solde;
        Client *client;
         static int compteur;
    public :
        Compte() : numero(0), solde(0), client(nullptr) { compteur++; }
        Compte(int numero ,float solde, Client &c) :numero(numero),solde(solde){
            client = new Client(c); // copie profonde du client
            compteur++;
        }
        Compte(const Compte &C) : numero(C.numero),solde(C.solde){
            client = new Client(*C.client); // copie profonde
            compteur++;
        }
        void afficher(){
            cout << "les information de compte : \n";
            cout << numero << " " << solde << "DHS";
             if (client)
            client->afficher();
        else
            cout << "Aucun client associé.\n";

        }
        static int nombrecompte(){
            return compteur;
        };
        inline int calculInteret();
         ~Compte()
        {
         delete client;
        compteur--;
        cout << "Compte #" << numero << " supprimé." << endl;
    }
};

int Compte ::compteur = 0;

inline float calculInteret(float solde, float taux){
    float nouveauSolde = solde + (solde * taux);
    cout << "le nouveau solde est :" << nouveauSolde;
}

int main (){
    Client c1(1,"Imane","Ranbok");
    Client c2(2,"Rahma","ranbok");
    Client c3(c2);
    c3.afficher();
    Compte compte1(1500,50000, c1);
    Compte compte2(2000, 10000, c2);
    Compte compte3(compte2);
    compte1.afficher();
    compte2.afficher();
    compte3.afficher();

    cout << "Nombre de comptes : " << Compte::nombrecompte();

    float nouveauSolde = calculInteret(1500, 0.05);
    cout << "Nouveau solde aprss interet : " << nouveauSolde;

    return 0;
}
