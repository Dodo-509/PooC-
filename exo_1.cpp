#include <iostream>

using namespace std;

class nombreComplexe {
private:
    float partieReelle;
    float partieImaginaire;

public:
    /*Les constructeurs*/
    nombreComplexe() : partieReelle(0.0), partieImaginaire(0.0){}

    nombreComplexe(float partieReelle, float partieImaginaire) {
    this->partieReelle = partieReelle;
    this->partieImaginaire = partieImaginaire;
    }

    /*les accesseurs*/
    float getPartieReelle () {
        return partieReelle;
    }

    float getPartieImaginaire() {
        return partieImaginaire;
    }


    /*les fonctions de classes*/
    static nombreComplexe addition(nombreComplexe z1, nombreComplexe z2) {
        nombreComplexe z3(z1.getPartieReelle() + z2.getPartieReelle(), z1.getPartieImaginaire() + z2.getPartieImaginaire());
        return z3;
    }

    static bool egalite(nombreComplexe z1, nombreComplexe z2) {
        return (z1.getPartieReelle() == z2.getPartieReelle() &&  z1.getPartieImaginaire() == z2.getPartieImaginaire());
    }

    static nombreComplexe soustraction(nombreComplexe z1, nombreComplexe z2) {
        nombreComplexe z3(z1.getPartieReelle() - z2.getPartieReelle(), z1.getPartieImaginaire() - z2.getPartieImaginaire());
        return z3;
    }

    static nombreComplexe multiplication(nombreComplexe z1, nombreComplexe z2) {
        float _partieReelle , _partieImaginaire ;

        _partieReelle = z1.getPartieReelle() * z2.getPartieReelle() - z1.getPartieImaginaire() *z2.getPartieImaginaire();
        _partieImaginaire = z1.getPartieReelle() * z2.getPartieImaginaire() + z1.getPartieImaginaire() * z2.getPartieReelle();

        nombreComplexe z3(_partieReelle, _partieImaginaire);

        return z3;
    }

    static nombreComplexe division (nombreComplexe z1, nombreComplexe z2){
        float _partieReelle , _partieImaginaire ;

        _partieReelle = ( z1.getPartieReelle() * z2.getPartieReelle() + z1.getPartieImaginaire() *z2.getPartieImaginaire())/(z2.getPartieReelle() *z2.getPartieReelle() + z2.getPartieImaginaire()*z2.getPartieImaginaire());
        _partieImaginaire = (z2.getPartieReelle() * z1.getPartieImaginaire() - z2.getPartieImaginaire () *z1.getPartieReelle())/(z2.getPartieReelle() * z2.getPartieReelle() + z2.getPartieImaginaire() * z2.getPartieImaginaire());

        nombreComplexe z3(_partieReelle, _partieImaginaire);

        return z3;
    }
};


int main() {
    float _partieReelleZ1, _partieImaginaireZ1, _partieReelleZ2, _partieImaginaireZ2;
    int operation;

    cout<<"Calcul de nombre complexe"<<endl<<"Entrer la partie reelle de z1"<<endl;
    cin>> _partieReelleZ1;
    cout<<"Entrer la partie Imaginaire de z1"<<endl;
    cin>> _partieImaginaireZ1;
    cout<<"Entrer la partie reelle de z2"<<endl;
    cin>> _partieReelleZ2;
    cout<<"Entrer la partie imaginaire de z2"<<endl;
    cin>> _partieImaginaireZ2;

    //Iniatilisation des objets
    nombreComplexe z1(_partieReelleZ1, _partieImaginaireZ1), z2(_partieReelleZ2, _partieImaginaireZ2);

    cout<<"Quel operation arithmetique"<<endl<<"1. Egalite"<<endl<<"2. Addition"<<endl<<"3. Soustraction"<<endl<<"4. Multiplication"<<endl<<"5. Division"<<endl;
    cin>>operation;

    switch(operation) {
    case 1: {
        if (nombreComplexe::egalite(z1, z2))
            cout<<"Les nombres sont egaux"<<endl;
        else
            cout<<"Les nombres ne sont pas egaux"<<endl;
            break;
    }
    case 2:{
        nombreComplexe z3 = nombreComplexe::addition(z1, z2);
        cout<<"La somme est "<<z3.getPartieReelle()<<" + "<<z3.getPartieImaginaire()<<"i"<<endl;
        break;
    }
    case 3:{
        nombreComplexe z3 = nombreComplexe::soustraction(z1, z2);
        cout<<"La difference est "<<z3.getPartieReelle()<<" + "<<z3.getPartieImaginaire()<<"i"<<endl;
        break;
    }
    case 4:{
        nombreComplexe z3 = nombreComplexe::multiplication(z1, z2);
        cout<<"Le produit est "<<z3.getPartieReelle()<<" + "<<z3.getPartieImaginaire()<<"i"<<endl;
        break;
    }
    case 5:{
        nombreComplexe z3 = nombreComplexe::division(z1, z2);
        cout<<"La division est "<<z3.getPartieReelle()<<" + "<<z3.getPartieImaginaire()<<"i"<<endl;
        break;
    }
    default :
        cout<<"Operation invalide"<<endl;
    }

    return 0;
}
