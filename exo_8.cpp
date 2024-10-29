#include <iostream>

using namespace std;

class Fichier {
private :
    int longueur;
    char *address;

public :
    Fichier() {}

    void creation(){
        this->longueur = 2000;
        this->address = new char[longueur];
    }

    void remplit() {
        for(int i=0; i<longueur; i++)
            address[i] = '1';

    }

    void affiche() {
        for(int i=0; i<longueur; i++)
            cout<<address[i];

        cout<<endl;
    }


    ~Fichier(){
        delete[] address;
        cout<<"Le fichier est supprimer de la memoire vive"<<endl;
    }
};

int main() {

Fichier *fichier1 = new Fichier;

fichier1->creation();
fichier1->remplit();
fichier1->affiche();

fichier1->~Fichier();

//delete[] fichier1;

return 0;
}
