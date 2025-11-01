#include <iostream>
#include <stack>
using namespace std;

class Pile {
private:
    stack<int> p; 

public:
    // Empiler
    void push(int valeur) {
        p.push(valeur);
        cout << valeur << " empile.\n";
    }

    // Dépiler
    void pop() {
        if (!p.empty()) {
            cout << p.top() << " dépile.\n";
            p.pop();
        } else {
            cout << "Pile vide !\n";
        }
    }

    // Afficher le derinier element 
    void top() {
        if (!p.empty())
            cout << "dernier element est  : " << p.top() << endl;
        else
            cout << "Pile vide.\n";
    }

    void afficher() {
        stack<int> temp = p; // copie pour ne pas modifier la pile originale
        cout << "Contenu de la pile : ";
        while (!temp.empty()) {
            cout << temp.top() << " ";
            temp.pop(); // depiler seulement la copie de la pile pour l'affichage
        }
        cout << endl;
    }

    // Vérifier si la pile est vide
    bool estVide() {
        return p.empty();
    }
};
int main() {
    Pile p1;

    p1.push(10);
    p1.push(20);
    p1.push(30);
    p1.afficher();
    p1.top();

    p1.pop();
    p1.afficher();

    return 0;
}
