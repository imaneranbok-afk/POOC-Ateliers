#include <iostream>
using namespace std;


class Client {
protected:
    int id_client;
    string nom;
    string CIN;

public:
    Client() : id_client(0), nom(""), CIN("") {}
    Client(int id, string n, string cin) : id_client(id), nom(n), CIN(cin) {}

    void afficherClient() {
        cout << "Client [" << id_client << "] " << nom << ", CIN: " << CIN << endl;
    }
};


class CompteBancaire {
private:
    string code;  
public:
    int num_compte;
    double solde;
    Client* proprietaire;

    CompteBancaire() : num_compte(0), solde(0), proprietaire(nullptr), code("0000") {}
    CompteBancaire(int num, double s, string c, Client* p)
        : num_compte(num), solde(s), code(c), proprietaire(p) {}

    void depot(double montant) {
        solde += montant;
        cout << "Depot: " << montant << " | Nouveau solde: " << solde << endl;
    }

    void retrait(double montant) {
        if (montant <= solde) {
            solde -= montant;
            cout << "Retrait: " << montant << " | Nouveau solde: " << solde << endl;
        } else {
            cout << "Solde insuffisant !" << endl;
        }
    }

    friend class AgentBancaire;  
    friend class Banque;
};


class AgentBancaire {
public:
    void afficherCode(CompteBancaire &c) {
        cout << "Code secret du compte " << c.num_compte << " : " << c.code << endl;
    }

    void transferer(CompteBancaire &source, CompteBancaire &dest, double montant) {
        if (source.solde >= montant) {
            source.solde -= montant;
            dest.solde += montant;
            cout << "Transfert de " << montant << " de " << source.num_compte
                 << " vers " << dest.num_compte << " reussi." << endl;
        } else {
            cout << "Solde insuffisant pour le transfert !" << endl;
        }
    }
};

// class Banque {
// private:
//     Client* clients[10];
//     CompteBancaire* comptes[10];
//     int nbClients;
//     int nbComptes;

// public:
//     Banque() : nbClients(0), nbComptes(0) {}

//     void ajouterClient(Client* c, CompteBancaire* cb) {
//         if (nbClients < 10 && nbComptes < 10) {
//             clients[nbClients++] = c;
//             comptes[nbComptes++] = cb;
//             cout << "Client [" << c->id_client << "] ajoute avec succes" << endl;
//         } else {
//             cout << "Limite de clients ou comptes atteinte !" << endl;
//         }
//     }
int main() {
    
    Client c1(1, "Imane", "CIN123");
    Client c2(2, "Ranbok", "CIN456");

    
    CompteBancaire cb1(1001, 5000, "1111", &c1);
    CompteBancaire cb2(1002, 3000, "2222", &c2);

    // Banque banque;
    // banque.ajouterClient(&c1, &cb1);
    // banque.ajouterClient(&c2, &cb2);

    // Agent bancaire effectue des opérations
    AgentBancaire agent;
    agent.afficherCode(cb1);
    agent.transferer(cb1, cb2, 1500);

    // Opérations sur les comptes
    cb1.depot(200);
    cb2.retrait(500);

    // Affichage du rapport d'audit
    banque.afficherAudit();

    return 0;
}
