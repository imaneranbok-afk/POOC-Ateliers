#include <iostream>
using namespace std;

class Client{
    protected :
        int id_client;
        string nom;
        string CIN;
    public :
        Client():id_client(0),nom(""),CIN(""){}
        Client(int id_client,string nom,string CIN) :id_client(id_client),nom(nom),CIN(CIN){}      
};
class CompteBancaire : public Client{
    protected :
        int num_compte;
        long solde;
        string code;
    public :
        CompteBancaire(int num_compte,long solde,string code,Client &c) :num_compte(num_compte),solde(solde),code(code){
        }

};
class AgentBancaire : public Client,public CompteBancaire{
    public :
    void afficherCode(){
        cout << CompteBancaire ::code;
    }
};
class Banque: public Client , public CompteBancaire{
    public :
    void ajouterclient(Client &c,CompteBancaire &cb){
        cout << "le client num :" << Client ::id_client << "ajouter avec succes";
    }
    void afficherClient(){
    }
};

int main(){

    return 0;
}