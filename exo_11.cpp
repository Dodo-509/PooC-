#include <iostream>
#include <vector>
#include <limits>
#include <iterator>
#include <algorithm>
#include <numeric>

using namespace std;

class Traitement{
private :
    vector<int> vecteur;

public:
    void initialise() {
        int entree;
        cout<<"Entrer 15 entiers"<<endl;
        for(int i=0; i<15; i++){
            do {
                        while(true) {
                            try {
                                    cout<<"Entrer le "<<i+1<<" eme entier"<<endl;
                                    cin>>entree;

                                if (cin.fail()) {
                                    cin.clear();
                                    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                                    throw invalid_argument("Entrée invalide, veuillez entrer un nombre entier.");
                                }

                                break;
                            }
                            catch (const invalid_argument& e) {
                                cerr << e.what() << endl;
                            }
                        }

                if(entree %2 != 0 || entree == 0)
                    cout<<"Entree invalide, entrer des nombres pairs et non nuls"<<endl;

            } while(entree %2 != 0 || entree == 0);

            vecteur.push_back(entree);
        }
    }

    void show(int index) {
        if (index >= vecteur.size()) {
            cout <<endl;
            return;
        }

        cout << vecteur[index] << " ";

        show(index + 1);
    }

    friend double moyenne(const Traitement t);
    friend double median(const Traitement t);
};

double moyenne( Traitement t){
        int taille = t.vecteur.size();
        int somme = 0;

    // Utilisation d'une boucle for avec des itérateurs pour parcourir le vecteur
    for (vector<int>::iterator it = (t.vecteur).begin(); it != (t.vecteur).end(); ++it) {
        somme += *it;
    }

    // Calcul de la moyenne
    double moyenne = static_cast<double>(somme) / taille;

    return moyenne;
}

double median(Traitement t) {
        if (t.vecteur.empty()) return 0.0;

        std::vector<int> tempVecteur = t.vecteur;

        sort(tempVecteur.begin(), tempVecteur.end());

        int taille = tempVecteur.size();
        if (taille % 2 == 0) {
            return (tempVecteur[taille / 2 - 1] + tempVecteur[taille / 2]) / 2.0;
        } else {
            return tempVecteur[taille / 2];
        }
    }
int main() {

    Traitement t1;

    t1.initialise();
    t1.show(0);
return 0;
}
