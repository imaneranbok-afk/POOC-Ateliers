#include<iostream>
#include <new>
#include <cmath>
using namespace std;
//   ------------------------------------------------------------------------------------EXERCICE1 ---------------------------------------------------------
// int i = 0;

// void myfunction(){
//     i++;
//     cout <<"appel numéro "<< i; 
// }
// int main(){
//     myfunction();
//     myfunction();
//     myfunction();
// }
//     --------------------------------------------------------------------------EXERCICE2 --------------------------------------------------------------
// int x;
// int function1(int x){
//   if(x%2 == 0){
//       return 1;
//   }
//   return 0;
// }
// int function2(int x){
//     if(x%3 == 0){
//         return 1;
//     }
//     return 0;
// }
// int main(){
//     cout << "donnez un nombre :";
//     cin >> x;
//     int estMultiple2 = function1(x); // pour stocker le resultat des fonctions
//     int estMultiple3 = function2(x); 
//     if(estMultiple2 == 1){
//         cout << " il est multiple de 2 \n";
//         cout << "il est pair \n";
//     }
//     if(estMultiple3 == 1){
//         cout << " il est multiple de 3\n";
//     }
//     if( estMultiple2 == 1 && estMultiple3 == 1){
//         cout << "il est divisible par 6";
//     }
//     return 0;
// }
//     -------------------------------------------------------------------------- EXERCICE3--------
// Methode 1 :
// int main()
// {
//     int i = 0;
//     int mytable[10] = {4, 11, 8, 2, 15, 5, 22, 13, 9 , 16};
//     int petit = mytable[0];
//     for (i = 0; i < 10; i++)
//     {
//         if (petit > mytable[i])
//         {
//             cout << " le plus petit element de tableau est : " << mytable[i];
//         }
// }
//     int grand = mytable[0];
//     for (i = 0; i < 10;i++){
//         if(mytable[i] > grand){
//             grand = mytable[i];
//     }
// }
// cout << " \nle plus grand element est :" << grand;
// return 0;
//  }
//  ---------------------------------------------------------------------------- EXERCICE4---------------------------------------------------------------
// int main(){
//     int n; // la taille saiser par l'utilisateur

//     cout << "donnez la taille de tableau :";
//     cin >> n;

//     int *T = new int[n];
//     int *Carre = new int[n]; // allocation de deuxime tableau pour les carre des element de  premier element 
//     int *tab = new int[n]; //allocation pour le nouvelle tableau

//     for (int i = 0; i < n; i++){
//         cout << " \nentrez l'element " << i+1 << ":";
//         cin >> *(T + i);
//     }
//     cout << " \nle carre des element du tableau est  :";
//         for (int i = 0; i < n; i++)
//         {
//             *(Carre + i) = (*(T + i)) * (*(T + i));
            
//             cout  << *(Carre + i) << " ";
//         }

//         for (int i = 0; i < n;i++){
//             *(tab + i) = *(Carre + i); //Pour remplacer les carres des element de 1tableau dans un nouvelle tableau 
//         }
//             delete[] T; //Suprimer le premier tableau
//             cout << "\nnouvelle tableau ";
//             for (int i = 0; i < n;i++){
//                 cout << *(tab + i) << " ";
//             }
//             delete[] tab;
//             return 0;
// }
//  -------------------------------------------------------------------- EXERCICE5-----------------------------------------------------------------------
// int main(){
//     int a;
//     cout << "donner une valeur de a :";
//     cin >> a;
//     int &ref_a = a;
//     int *p = &a;
// cout << "la valeur de a : " << a;
// cout << " la reference vers a :" << ref_a;
// cout << " la valeur pointee" << *p;
// return 0;
// }
// ----------------------------------------------------Exercice 7-------------------------------------------------------------

// int n;
// int factorielle(int n){
//          if (n <= 1)
//         return 1;
//     else
//         return n * factorielle(n - 1);
//     }
// string chaine;
// int permutation(string chaine){
//     int t = chaine.length();
//     cout << "le nombre des permutation est : \n";
//     return factorielle(t);
// }

// int main(){
   
//     cout << permutation("IMANE");
//     return 0;
// }
//  -------------------------------------------------------------------- EXERCICE8-----------------------------------------------------------------------

// class Voiture{
//      public:
//          string marque;
//          string modele;
//          int annee;
//          float kilometrage;
//          float vitesse;
//          public:
//          Voiture(){
//              marque = "unkown";
//              modele =  "unkown";
//              annee = 0;
//              kilometrage = 0.0;
//              vitesse = 0.0;
//          }
//          Voiture(string marque, string modele, int annee,float kilometrage,float vitesse){
//              this->marque = marque;
//              this->modele = modele;
//              this->annee = annee;
//              this->kilometrage = kilometrage;
//              this->vitesse = vitesse;
//          }
//          float accelerer( float valeur){
//              return vitesse +=valeur;
//          }
//          void freiner(float valeur){
//                  vitesse -= valeur;
//                  if(vitesse <0){
//                      vitesse = 0;
//                  }
//          }
//          float avancer(float distance){
//              return kilometrage += distance;
//          }
//          void afficherInfo(){
//              cout <<marque<<" "<<modele <<" "<<annee <<" "<< kilometrage <<" "<< vitesse << "\n";
//          }
//         ~Voiture(){
//             cout << "la voiture est detruite.";
//         }
// };

//     int main(){
//     Voiture voiture1;
//     Voiture voiture2("Toyota"," Corolla",2018,35000,50);
//     voiture2.accelerer(20);
//     voiture2.freiner(10);
//     voiture2.accelerer(45.5);
//     cout << "voiture1:\n";
//     voiture1.afficherInfo();
//     cout << "voiture2:\n";
//     voiture2.afficherInfo();
    
//  -------------------------------------------------------------------- EXERCICE9-----------------------------------------------------------------------

//  class vecteur3d{
//     public :
//         float x, y, z;
//     public :
//         vecteur3d( float a = 0.0, float b = 0.0 , float c = 0.0)
//         {
//             x = a;
//             y = b;
//             z = c;
//         }
//         void afficher(){
//             cout << "(" << x <<","<< y <<","<< z <<")"<< "\n";
//         }
//         vecteur3d somme(vecteur3d v){
//             vecteur3d resultat1; // resultat is the type of class 
//             resultat1.x = x + v.x;
//             resultat1.y = y + v.y;
//             resultat1.z = z + v.z;
//             return resultat1;
//         }
//         float produitScalaire(vecteur3d v){
//             return x*v.x + y*v.y + z*v.z;
//         }
//         bool coincide(vecteur3d v){
//             return (x == v.x && y == v.y && z == v.z);
//         }
//         float norme() {
//         return sqrt(x*x + y*y + z*z);
//     }
    
// };
//  int main(){
//      vecteur3d vecteur1(1,2,3);
//      vecteur3d vecteur2(4,5,6);
     
//     vecteur3d resultat1 =vecteur1.somme(vecteur2);
//     resultat1.afficher();
//     cout << vecteur1.produitScalaire(vecteur2) << "\n";
//     cout << (vecteur1.coincide(vecteur2) ? "Oui" : "Non") << "\n";
//  }