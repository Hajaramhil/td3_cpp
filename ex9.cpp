//aEn utilisant point<char> avec p(60, 65), on a spécifié que T est de type char. Cela signifie que les valeurs 60 et 65 sont traitées comme des caractères, et non comme des nombres et Pour que l'instruction p.affiche(); affiche réellement "Coordonnees : 60 65" on doit utiliser un type numérique commme int double ...
#include <iostream>

template <class T>
class point {
    T x, y;
public:
    point(T abs, T ord) : x(abs), y(ord) {}
    void affiche() {
        std::cout << "Coordonnees : " << x << " " << y << "\n";
    }
};

int main() {
    point<int> p(60, 65);
    p.affiche();
    return 0;
}

