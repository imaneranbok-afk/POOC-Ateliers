#include <iostream>
using namespace std;

class erreur{ 
    public :
    int num ;
} ;
class A :public erreur{ 
    public :
    A(int n){ 
        if (n==1){ 
            erreur er ; 
            er.num = 999 ; 
            throw er ;
        }   
}
 void f();
} ;
 void A ::f(){};
int main(){
   
    erreur Imane;
    try
    {
         A a(1); // parceque n =1 alors le constructeur lance une erreur que l'onject ne doit pas construit 
         a.f(); // dans ce cas la fct f ca sert a rien 
        cout << "suite main\n";
    }
catch (erreur er)
{ cout << "dans main : " << er.num << "\n" ;
}

 try
{ A a(1) ;
}
catch (erreur er)
{ cout << "dans f : " << er.num << "\n" ;
}
    return 0;  // dans main : 999 , dans f :999 
    }
    ;