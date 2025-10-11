#include<iostream>
using namespace std;
void remplir(int *arr, int n){
    for (int i = 0; i < n; i++)
    {
        cout << "entrer l'element " << i + 1 << " du tableau :";
        cin >> *(arr + i);
    }
    }
void afficher(const int *arr,int n){
    for (int i = 0; i < n; i++){
        cout << "les élements du tableau sont : " <<arr[i] <<"\n";
    }
}
int& trouverMax(int *arr, int n) {
    int indexMax = 0;

    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[indexMax]) {
            indexMax = i;
        }
    }

    return arr[indexMax];
}
// void inverser(int* arr, int n) {
//     int* debut = arr;          
//     int* fin = arr + n - 1;   

//     while (debut < fin) {
//         int temp = *debut;
//         *debut = *fin;
//         *fin = temp;

//         debut++;
//         fin--;
//     }
// }
void inverserAvecTemp(int* arr, int n) {
    int* temp = new int[n]; // tableau temporaire

    for (int i = 0; i < n; i++) {
        temp[i] = arr[n - 1 - i];
    }

    
    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }

    delete[] temp;
}
int main()
{
    // Exercice 1
    // char c = 'x\01'; //code ASCII de la valeur 1
    // short int p = 10;
    // cout << p + 3 <<endl; // int 13
    // cout << c + 1 <<endl; // int 2
    // cout << p + c << endl; //int 11
    // cout << 3 * p + 5 * c << endl; //int 35
    // Exercice 2
    // char c = '\x05' ;
    // int n = 5 ;
    // long  p = 1000 ;
    // float x = 1.25 ;
    // double z = 5.5 ;
    // cout << n + c + p << endl; //long 1010
    // cout << 2*x + c << endl; //float 7.5
    // cout << (char)n + c << endl; // int 10
    // cout << (float)z + n / 2 << endl; //float 7.5
    //Exercice 3 
    // int n = 5, p = 9 ;
    // int q ;
    // float x ;
    // cout << (q = n < p ) <<endl; //1 vrai
    // cout << (q = n == p) << endl; //0 faux
    // cout << (q = p % n + p > n) << endl; //int 1 (priorité des opérateurs)
    // cout << (x = p / n) << endl; //float 1.0
    // cout << (x = (float)p / n) << endl; // float 1.8
    // cout <<( x = (p + 0.5) / n) << endl; //float 1.9
    // cout << (x = (int)(p + 0.5) / n) << endl; //int 1
    // cout << (q = n * (p > n ? n : p)) << endl; //int 25
    // cout << (q = n * (p < n ? n : p)) << endl; //int 45
    //Exrcice 4
    // int i, j, n;
    // i = 0;
    // n = i++;
    // cout << "A : i = " << i << " n = " << n << "\n" ; // A: i = 1 n = 0
// i = 10 ;
// n = ++ i ;
// cout << "B : i = " << i << " n = " << n << "\n" ; // B: i =11 n = 11
// i = 20 ;
// j = 5 ;
// n = i++ * ++ j ;
// cout << "C : i = " << i << " j = " << j << " n = " << n << "\n" ; //C  : i = 21 j = 6 n =120
// i = 15 ;
// n = i += 3 ;
// cout << "D : i = " << i << " n = " << n << "\n" ;  D : i = 18 n = 18
// i = 3 ;
// j = 5 ;
// n = i *= --j ;
// cout << "E : i = " << i << " j = " << j << " n = " << n << "\n" ; E :i = 12  j = 4 n = 12
   //Exercice 5 :
    int i,n;
    cout << "entrer la taille du tableau";
    cin >> n;
    int *arr = new int(n);
    remplir(arr, n);
    afficher(arr, n);
    int &maxRef = trouverMax(arr, n);
    cout << "Le maximum est : " << &maxRef << endl;
    // inverser(arr, n);
    // cout << "les elements inverser du tableau sont :";
    // for (int i = 0; i < n; i++){
    //      cout <<arr[i];
    // }
    inverserAvecTemp(arr, n);

    cout << "Tableau inversé avec tableau temporaire : ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
        return 0;
}
