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