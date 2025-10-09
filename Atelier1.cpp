#include<iostream>
using namespace std;
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
    return 0;

}