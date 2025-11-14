#include <iostream>
using namespace std;


class NombreComplexe{
    private :
        int reel, img;
    public :
    NombreComplexe() :reel(0),img(0){} // constructeur par defaut 
    NombreComplexe(int r,int i ) :reel(r),img(i){} //constructeur avec parametre 
    int getreel(){
        return reel;
    }
    int getimg(){
        return img;
    }
    void afficher(){
        cout << "la partie reel de nombre complexe : \n";
        cout << reel;
        cout << "la partie imaginaire de nombre complexe : \n";
        cout << img;
    }
    bool operator ==(const NombreComplexe &autre){
        if(reel == autre.reel && img == autre.img){
            return true;
        }
        else
            return false;
    }
    NombreComplexe operator + (const NombreComplexe &autre){
        int re = reel + autre.reel;
        int img = img + autre.img;
        return NombreComplexe(re,img);
    }
    NombreComplexe operator -(const NombreComplexe &autre){
        int re = reel - autre.reel;
        int img = img - autre.img;
        return NombreComplexe(re, img);
    }
    NombreComplexe operator *(const NombreComplexe &autre){
        int re = reel * autre.reel - img * autre.img;
        int img = reel*autre.img +img*autre.reel;
        return NombreComplexe(re, img);
    }
    NombreComplexe operator /(const NombreComplexe &autre){
        int demon = (autre.reel * autre.reel) + (autre.img * autre.img); 
        int re = ((reel*autre.reel)-(img*autre.img))/demon; // partie reel de nombre complexe : reel*autre.reel -img*autre.img
        int img = ((reel*autre.img)+(img*autre.reel))/demon; //partie imaginaire :reel*autre.img +img*autre.reel
        return NombreComplexe(re, img);
    }
   
};
 int devision(int a ,int b){
        if(b == 0){
            throw "impossible de faire la division sur 0";
             }
             return a / b;
    }
int main (){
    // int r1,r2,i1,i2;
    // cout << "donner la partie reel de 1ere nombre complexe :";
    // cin >> r1;
    // cout << "donner la partie imaginaire de 1ere nombre complexe :";
    // cin >> i1;
    // cout << "donner la partie reel de 2eme nombre complexe :";
    // cin >> r2;
    // cout << "donner la partie imaginaire de 2eme nombre complexe :";
    // cin >> i2;
    // NombreComplexe N1(r1, i1);
    // NombreComplexe N2(r2, i2);
    // N1.afficher();
    // N2.afficher();
    // int choix;
    // cout << "veuillez choisir l'operation par le numero correspondant : \n";
    // cout << "1 -egalite \n";
    // cout << "2 -addition \n";
    // cout << "3 -soustraction \n";
    // cout << "4 -multiplication \n";
    // cout << "5 -division \n";
    // cin >> choix;
    // NombreComplexe resultat;
    // switch(choix){
    // case 1: {
    //     bool egalite = N1 == N2;
    //     cout << "les deux nombres sont " << (egalite ? "egaux" : "differents");
    //     break;
    // }

    // case 2: {
    //     resultat = N1 + N2;
    //     cout << resultat.getreel() << "+i" << resultat.getimg();
    //     break;
    // }

    // case 3: {
    //     resultat = N1 - N2;
    //     cout << resultat.getreel() << "-i" << resultat.getimg();
    //     break;
    // }

    // case 4: {
    //     resultat = N1 * N2;
    //     cout << resultat.getreel() << "+i" << resultat.getimg();
    //     break;
    // }

    // case 5: {
    //     resultat = N1 / N2;
    //     cout << resultat.getreel() << "+i" << resultat.getimg();
    //     break;
    // }
    // }
         int a, b;
        cout << "entrer la valeur de a \n";
        cin >> a;
        cout << "entrer la valeur de b \n";
        cin >> b;
        try{
            int k = devision(a, b);
            cout << k;
        }
        catch (const char *e){
            cerr << e << endl;
        }

            return 0;
}