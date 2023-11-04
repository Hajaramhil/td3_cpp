#include <iostream>
using namespace std;

class vect {
protected:
    int* adr;
    int nelen;
public:
    vect(int nelen) : nelen(nelen) {
        adr = new int[nelen];
    }
    ~vect() {
        delete[] adr;
    }
    int& operator[](int index) {
        return adr[index];
    }
};

class vectok : public vect {
public:
    vectok(int nelen) : vect(nelen) {}
    vectok(const vectok& other) : vect(other.nelen) {
        for (int i = 0; i < nelen; i++) {
            adr[i] = other.adr[i];
        }
    }
    vectok& operator=(const vectok& other) {
        if (this != &other) {
            delete[] adr;
            nelen = other.nelen;
            adr = new int[nelen];
            for (int i = 0; i < nelen; i++) {
                adr[i] = other.adr[i];
            }
        }
        return *this;
    }
    int taille() const {
        return nelen;
    }
};

int main() {
    vectok v1(5);
    v1[0] = 1;
    v1[1] = 2;
    v1[2] = 3;
    v1[3] = 4;
    v1[4] = 5;

    vectok v2 = v1;
    vectok v3(3);
    v3 = v2;

    cout << "Taille de v1 : " << v1.taille() << endl;
    cout << "Taille de v2 : " << v2.taille() << endl;
    cout << "Taille de v3 : " << v3.taille() << endl;

    return 0;
}
