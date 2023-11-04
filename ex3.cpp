#include <iostream>
#include <list>
#include <iterator>
#include <string>
#include <algorithm>
using namespace std;

struct personne {
    string nom;
    string prenom;
    int age;
};

void display(const personne& person) {
    cout << "Nom : " << person.nom << ", Prénom : " << person.prenom << ", Âge : " << person.age << endl;
}

bool comparePersonnes( personne a, personne b) {
    if (a.nom == b.nom) {
        return a.prenom < b.prenom;
    }
    return a.nom < b.nom;
}
int main() {
    list<personne> personnes;
    int n;
    cout << "Entrez le nombre de personnes que vous voulez lister : ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        personne person;
        cout << "Entrez le nom : ";
        cin >> person.nom;
        cout << "Entrez le prénom : ";
        cin >> person.prenom;
        cout << "Entrez l'âge : ";
        cin >> person.age;
        personnes.push_back(person);
    }

    cout << "Liste originale : " << endl;
    for (const personne& person : personnes) {
        display(person);
    }

    personnes.sort(comparePersonnes);

    cout << "La liste triée est : " << endl;
    for (const personne& person : personnes) {
        display(person);
    }

    return 0;
}
