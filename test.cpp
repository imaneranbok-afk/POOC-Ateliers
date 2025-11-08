#include<iostream>
using namespace std;
 
class Personne{
    private :
        string nom;
        string prenom;
        int age;
    public :
        void affichage(string n,string p,int a){
            nom = n;
            prenom = p;
            age = a;
            cout << n;
            cout << p;
            cout << a;
        }
};

int main (){
    Personne P;
    string n, p;
    int a;
    cout << "veuillez entrer votre nom :";
    cin >> n;
    cout << "veuillez entrer votre prenom :";
    cin >> p;
    cout << "veuillez entrer votre age :";
    cin >> a;

    P.affichage(n, p, a);

    return 0;
}