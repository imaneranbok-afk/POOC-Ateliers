// -------------------------------------------------------------EXERCICE 1---------------------------------------------
#include<iostream>
using namespace std;

class Ressource{
    public :
        int id;
        string titre;
        string auteur;
        int annee;
    public :
    Ressource(){
        id = 0;
        titre = "";
        auteur = "";
        annee = 0;
    }
      Ressource(int id,string titre,string auteur,int annee): id(id),titre(titre),auteur(auteur),annee(annee){
        this->id = id;
        this->titre = titre;
        this->auteur = auteur;
        this->annee = annee;
    }
     void afficherInfos(){
        cout << "les informations de la ressource sont : \n";
        cout << this->id << endl;
        cout << this->titre <<endl;
        cout << this->auteur <<endl;
        cout << this->annee<<endl;
    }
    void telecharger(){
        cout << "le ressource d id :" << id << "et de titre :" << titre << "et telecharger aves succes " << "\n";
    }
};
class Telechargable{
    public :
    void telecharger(){
        cout << "le ressource est en cours de telechargement ";
    }
    void afficherMessage(){
        cout << "telecharger avec succes" << endl;
    }
};
class Livre : public Ressource,public Telechargable{
    public :
        string maisonEdition;
        Livre(){}
        Livre(Ressource &r,string maisonEdition) : Ressource(r),maisonEdition(maisonEdition){}
         void afficherInfos(){
            cout << "les informations de la livre sont : \n";
            cout << Ressource :: id << endl;
            cout << Ressource :: titre <<endl;
            cout << Ressource :: auteur <<endl;
            cout << Ressource :: annee <<endl;
            cout << maisonEdition<<endl;
        }

};
class Magazin :public Ressource,public Telechargable{
    public :
        string adresse;
        Magazin(Ressource &r,string adresse):Ressource(r),adresse(adresse){}
    void afficherInfos(){
        cout << "les informations de la ressource sont : \n";
            cout << Ressource :: id << endl;
            cout << Ressource :: titre <<endl;
            cout << Ressource :: auteur <<endl;
            cout << Ressource :: annee <<endl;
            cout << adresse<<endl;
    }
};
class Vedio :public Ressource,public Telechargable{
    public :
        int durre;
    void afficherInfos(){
            cout << "les informations de la ressource sont : \n";
            cout << Ressource :: id << endl;
            cout << Ressource :: titre <<endl;
            cout << Ressource :: auteur <<endl;
            cout << Ressource :: annee <<endl;
            cout << durre<<endl;
    }
};
class Mediatheque {
private:
    int id,annee;
    string titre, auteur;
    Ressource* tab[10];
    int nb;
    Ressource *r;

public:
    Mediatheque() : nb(0) {}
    void ajouter(Ressource* r) {
        if (nb < 10) {
            tab[nb++] = r;
            cout << "Ressource "<<r->id <<" "<<"ajoutee avec succes.\n";
        } else {
            cout << "Erreur : mediatheque pleine !\n";
        }
    }
    void rechercher(int id,string titre,string auteur,int annee){
        bool existe = false;
        for (int i = 0; i < nb;i++){
            if(id == tab[i]->id && titre ==tab[i]->titre && auteur==tab[i]->auteur && annee ==tab[i]->annee){
                existe = true;
                break;
            }
        }
        if(existe){
            cout << "le ressource est deja existe ";
        }
        else{
            cout << "veuillez l'ajouter";
        }
    }
    void rechercher(string auteur,int annee){
        bool existe = false;
        for (int i = 0; i < nb;i++){
            if(auteur==tab[i]->auteur && annee ==tab[i]->annee){
                existe = true;
                break;
        }
    }
    if(existe){
            cout << "le ressource est deja existe " <<"\n";
        }
        else{
            cout << "veuillez l'ajouter" <<"\n";
        }
}
    void afficher() {
        for (int i = 0; i < nb; i++) {
            tab[i]->afficherInfos();
        }
    }
}
;

int main() {
    Ressource ressource2(1, "titlex", "auteurx", 2023);
    Ressource ressource3(2,"titley","auteury",2022);
    ressource2.afficherInfos();
    ressource2.telecharger();
    ressource3.afficherInfos();
    cout << "------------" << "\n";
    Livre livre1(ressource2,"maisonEditionx");
    Livre livre2(ressource3,"maisonEditiony");
    livre1.afficherInfos();
    livre2.afficherInfos();
    cout << "------------" << "\n";
    Magazin m1(ressource2, "Tanger");
    Magazin m2(ressource3, "Rabat");
    m1.afficherInfos();
    cout << "----------------"<<"\n";
    Mediatheque M1;
    M1.ajouter(&ressource2);
    M1.ajouter(&ressource3);
    cout << "contenue du mediathique" << "\n";
    M1.afficher();
    M1.rechercher("auteurz", 20);

    return 0;
}

// -------------------------------------------------------------EXERCICE 2---------------------------------------------
// #include <iostream>
// using namespace std;


// class Client {
// protected:
//     int id_client;
//     string nom;
//     string CIN;

// public:
//     Client() : id_client(0), nom(""), CIN("") {}
//     Client(int id, string n, string cin) : id_client(id), nom(n), CIN(cin) {}

//     void afficherClient() {
//         cout << "Client [" << id_client << "] " << nom << ", CIN: " << CIN << endl;
//     }
// };


// class CompteBancaire {
// private:
//     string code;  
// public:
//     int num_compte;
//     double solde;
//     Client* proprietaire;

//     CompteBancaire() : num_compte(0), solde(0), proprietaire(nullptr), code("0000") {}
//     CompteBancaire(int num, double s, string c, Client* p)
//         : num_compte(num), solde(s), code(c), proprietaire(p) {}

//     void depot(double montant) {
//         solde += montant;
//         cout << "Depot: " << montant << " | Nouveau solde: " << solde << endl;
//     }

//     void retrait(double montant) {
//         if (montant <= solde) {
//             solde -= montant;
//             cout << "Retrait: " << montant << " | Nouveau solde: " << solde << endl;
//         } else {
//             cout << "Solde insuffisant !" << endl;
//         }
//     }

//     friend class AgentBancaire;  
//     friend class Banque;
// };


// class AgentBancaire {
// public:
//     void afficherCode(CompteBancaire &c) {
//         cout << "Code secret du compte " << c.num_compte << " : " << c.code << endl;
//     }

//     void transferer(CompteBancaire &source, CompteBancaire &dest, double montant) {
//         if (source.solde >= montant) {
//             source.solde -= montant;
//             dest.solde += montant;
//             cout << "Transfert de " << montant << " de " << source.num_compte
//                  << " vers " << dest.num_compte << " reussi." << endl;
//         } else {
//             cout << "Solde insuffisant pour le transfert !" << endl;
//         }
//     }
// };

// // class Banque {
// // private:
// //     Client* clients[10];
// //     CompteBancaire* comptes[10];
// //     int nbClients;
// //     int nbComptes;

// // public:
// //     Banque() : nbClients(0), nbComptes(0) {}

// //     void ajouterClient(Client* c, CompteBancaire* cb) {
// //         if (nbClients < 10 && nbComptes < 10) {
// //             clients[nbClients++] = c;
// //             comptes[nbComptes++] = cb;
// //             cout << "Client [" << c->id_client << "] ajoute avec succes" << endl;
// //         } else {
// //             cout << "Limite de clients ou comptes atteinte !" << endl;
// //         }
// //     }
// int main() {
    
//     Client c1(1, "Imane", "CIN123");
//     Client c2(2, "Ranbok", "CIN456");

    
//     CompteBancaire cb1(1001, 5000, "1111", &c1);
//     CompteBancaire cb2(1002, 3000, "2222", &c2);

//     // Banque banque;
//     // banque.ajouterClient(&c1, &cb1);
//     // banque.ajouterClient(&c2, &cb2);

//     // Agent bancaire effectue des opérations
//     AgentBancaire agent;
//     agent.afficherCode(cb1);
//     agent.transferer(cb1, cb2, 1500);

//     // Opérations sur les comptes
//     cb1.depot(200);
//     cb2.retrait(500);

//     // Affichage du rapport d'audit
//     banque.afficherAudit();

//     return 0;
// }
