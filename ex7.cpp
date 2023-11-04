#include <iostream>
      using namespace std ;
      class A
      { int n ;
float x ;
public :
A (int p = 2)
{n=p;x=1;
cout << "** construction objet A : " << n << " " << x << "\n" ; }
};
class B
{ int n ;
float y ;
public :
B (float v = 0.0)
{n=1;y=v;
cout << "** construction objet B : " << n << " " << y << "\n" ; }
};
class C : public B, public A
{ int n ;
int p ;
public :
C (int n1=1, int n2=2, int n3=3, float v=0.0) : A (n1), B(v)
{ n = n3 ; p = n1+n2 ;
cout << "** construction objet C : " << n << " " << p <<"\n" ; }
};
int main()
{ C c1 ;
C c2 (10, 11, 12, 5.0) ;
}
/*
 Ce programme définit trois classes : A, B et C, chacune ayant des constructeurs avec des valeurs par défaut. Ensuite, il instancie deux objets de la classe C, c1 et c2, en utilisant différentes approches de création.
 Pendant l'exécution du programme, les constructeurs de chaque classe sont invoqués, et ils utilisent les valeurs par défaut ou les valeurs spécifiques fournies lors de la création des objets. Chaque constructeur affiche un message indiquant la construction de l'objet, en montrant les valeurs de ses membres. Les résultats du programme seront des messages de construction pour chaque objet créé, révélant les valeurs des membres spécifiées ou par défaut pour les classes A, B et C.
 */
