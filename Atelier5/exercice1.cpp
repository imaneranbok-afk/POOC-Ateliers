#include <iostream>
#include <vector>
#include <iterator>
#include <set>
using namespace std;
// exercice 1 : 
void remplir(set<int>& s){
        for (int i = 1; i <= 100; i++)
        {
            s.insert(i);
        }
    }
    void afficherSet(set<int>& s){
    set<int>::iterator itr;
     cout << "les element de set de 1 a 100 \n";
    for (itr = s.begin(); itr != s.end();itr++){
        cout << *itr << " ";
    }
}
    bool trouver(const set<int>& s,int valeur) {
        if(s.find(valeur) != s.end()){
            return true;
        }else
            return false;
    }
    // bool trouver(set<int> ::iterator &debut , set<int>::iterator &fin , int valeur){
    //     set<int> s;
    //     for (*debut = 70; fin != s.end();debut++)
    //     {
    //        if(s.find(valeur) != s.end()){
    //         return true;
    //     }else
    //         return false;

    //     }
    // }
    int main (){
    set<int> s1; // declaration of set de type entier
    remplir(s1);
    afficherSet(s1);
    trouver(s1, 101);
        return 0;
}
