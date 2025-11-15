#include<iostream>
#include<stack>
using namespace std;

class Stack{
    public:
        stack<int> p;
        int taille;
        Stack(int nb = 20):taille(nb){};
        Stack&  operator <<(int valeur){
             p.push(valeur);
             return *this;
        }
        Stack& operator >>(int &valeur){
            if(!p.empty()){
            valeur =p.top();
            p.pop();
            }
            else
                cout << "pile vide !";
            return *this;
        }
        int operator ++(){
            if(p.size() == taille){
                return 1;
            }else
                return 0;
        }
        int operator --(){
            if(p.size() == taille){
                return 0;
            }else
                return 1;
        }
};  

int main(){
    int nb,entier;
    cout << "entrer la taille de la pile :" << endl;
    cin >> nb;
    Stack a(nb);
    a.p.push(10);
    a.p.push(10);
    a.p.push(10);
    int choix;
    do
    {
        cout << "choisir l'operation avec le numero correspondant :" << endl;
        cout << "1 - <<" << endl;
        cout << "2 - >>"<< endl;
        cout << "3 - ++" << endl;
        cout << "4 - --" << endl;
        cin >> choix;
    } while (choix< 1 ||choix>4);
    switch (choix)
    {
    case 1:
        cout << "entrer l'entier" << endl;
        cin >> entier;
        a << entier;
        break;
    case 2 :
            a >> entier;
            cout << "valeur supprimer" << endl;
            break;
    case 3 :
        cout << ++a <<endl;
        break;
    case 4 :
        cout <<--a <<endl;
        break;
    default:
        cout << "choix inconnue ";
        break;
    }
    cout <<"la taille actuelle de pile est :"<<a.p.size();
    return 0;
}