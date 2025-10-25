#include<iostream>
#include <new>
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
int main(){
    int a;
    cout << "donner une valeur de a :";
    cin >> a;
    int &ref_a = a;
    int *ref_a = &a;
    cout << ref_a; //reference of a 
    // cout << *ref_a; 
}