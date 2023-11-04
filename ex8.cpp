#include <iostream>
using namespace std;
template <typename T>
T carre(const T& valeur) {
    return valeur * valeur;
}
int main() {
    int entier = 5;
    double reel = 2.5;

    int carreEntier = carre(entier);
    double carreReel = carre(reel);

    cout << "Le carré de l'entier " << entier << " est : " << carreEntier << endl;
    cout << "Le carré du réel " << reel << " est : " << carreReel << endl;

    return 0;
}

