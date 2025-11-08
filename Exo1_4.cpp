#include<iostream>
using namespace std;

class Ressource{
    protected :
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
        cout << id << endl;
        cout << titre <<endl;
        cout << auteur <<endl;
        cout << annee<<endl;
    }
    void telecharger(){
    }
};
class Telechargable{
    public :
    void afficherMessage(){
        cout << "telecharger avec succes" << endl;
    }
};
class Livre : public Ressource,public Telechargable{
    public :
        string maisonEdition;
        Livre(Ressource &r,string maisonEdition) : Ressource(r){
            this->maisonEdition = maisonEdition;
        }
        void afficherInfos(){
            cout << "les informations de la ressource sont : \n";
            cout << id << endl;
            cout << titre <<endl;
            cout << auteur <<endl;
            cout << annee<<endl;
            cout << maisonEdition<<endl;
        }

};
class Magazin :public Ressource,public Telechargable{
    public :
        string adresse;
    void afficherInfos(){
        cout << "les informations de la ressource sont : \n";
        cout << id << endl;
        cout << titre <<endl;
        cout << auteur <<endl;
        cout << annee<<endl;
        cout << adresse<<endl;
    }
};
class Vedio :public Ressource,public Telechargable{
    public :
        int durre;
    void afficherInfos(){
            cout << "les informations de la ressource sont : \n";
            cout << id << endl;
            cout << titre <<endl;
            cout << auteur <<endl;
            cout << annee<<endl;
            cout << durre<<endl;
    }
};
// class Mediatheque :public Ressource,public Livre,public Magazin,public Vedio{
//     public :


//         void ajouterRessource(Livre& L,Magazin& M,Vedio& V){
//             L.afficherInfos();
//             M.afficherInfos();
//             V.afficherInfos();
//             cout << "le ressource est ajouter avec succes";
//         }
//         void Afficher(){
//             cout << "les informations de la ressource sont : \n";
//             Livre ::afficherInfos();
//             Magazin ::afficherInfos();
//             Vedio ::afficherInfos();
//         }
// };

int main() {
    Ressource ressource2(1, "titlex", "auteurx", 2023);
    Ressource ressource3(2,"titley","auteury",2022);
    ressource2.afficherInfos();
    ressource3.afficherInfos();
    Livre livre1(ressource2,"maisonEditionx");
    Livre livre2(ressource3,"maisonEditiony");
    livre1.afficherInfos();
    livre2.afficherInfos();
    return 0;
}