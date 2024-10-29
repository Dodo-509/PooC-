#include <iostream>

using namespace std;

class Pile {
private:
    int *pile;
    int taille;

public:
    Pile (int x){
        taille = 1;
        pile = new int[taille];
        pile[0] = x;
    }

    void push(int x) {
        ++taille;
        int *pile_transition = new int[taille];

        for(int i=0; i<taille-1; i++)
            pile_transition[i] = pile[i];

        pile_transition[taille-1] = x;

        delete[] pile;

        pile = pile_transition;

        pile_transition = nullptr;
    }

    void pop() {
        --taille;
        int *pile_transition = new int[taille];

        for(int i=0; i<taille; i++)
            pile_transition[i] = pile[i];

        delete[] pile;

        pile = pile_transition;

        pile_transition = nullptr;

    }

    void affiche_valeur() {
        for(int i=0; i<taille; i++)
            cout<<pile[i]<<" ";

        cout<<endl;
    }

    ~Pile() {
        delete[] pile;
        cout<<"La pile est detruite"<<endl;
    }
};


int main() {

    Pile pile1(5);

    pile1.push(10);
    pile1.push(12);
    pile1.pop();
    pile1.pop();
    pile1.affiche_valeur();
    return 0;
}
