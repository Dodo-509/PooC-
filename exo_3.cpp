#include <iostream>
#include <string>

using namespace std;

class Personne {
protected:
    string nom;
    string prenom;
    string dateNaissance;

public :
    Personne (string nom, string prenom, string dateNaissance) {
        this->nom = nom;
        this->prenom = prenom;
        this->dateNaissance = dateNaissance;
    }

    void afficher(){
        cout<<"Le nom est "<<nom<<", le prenom est "<<prenom<<", la date de naissance est "<<dateNaissance<<endl;
    }
};

class Employe : public Personne {
protected:
    string salaire;
    string propriete;

public:
    Employe(string nom, string prenom, string dateNaissance, string salaire, string propriete):Personne(nom, prenom, dateNaissance) {
        this->salaire = salaire;
        this->propriete = propriete;
    }

    void afficher(){
        cout<<"Le nom est "<<nom<<", le prenom est "<<prenom<<", la date de naissance est "<<dateNaissance<<", son salaire est de "<<salaire<<", sa propriete est "<<propriete<<endl;
    }
};

class Chef : public Employe{
protected :
    string service;
    string servicePropriete;

public :
    Chef(string nom, string prenom, string dateNaissance, string salaire, string propriete, string service, string servicePropriete): Employe(nom, prenom, dateNaissance, salaire, propriete) {
        this->service = service;
        this->servicePropriete = servicePropriete;
    }

    void afficher(){
        cout<<"Le nom est "<<nom<<", le prenom est "<<prenom<<", la date de naissance est "<<dateNaissance<<", son salaire est de "<<salaire<<", sa propriete est "<<propriete<<", son service est "<<service<<", la propriete du service est "<<servicePropriete<<endl;
    }
};

class Directeur: public Chef {
protected:
    string societe;
    string proprieteSociete;

public:
    Directeur(string nom, string prenom, string dateNaissance, string salaire, string propriete, string service, string servicePropriete, string societe, string societePropriete):Chef(nom, prenom, dateNaissance, salaire, propriete, service, servicePropriete) {
        this->societe = societe;
        this->proprieteSociete = proprieteSociete;
    }

    void afficher(){
        cout<<"Le nom est "<<nom<<", le prenom est "<<prenom<<", la date de naissance est "<<dateNaissance<<", son salaire est de "<<salaire<<", sa propriete est "<<propriete<<", son service est "<<service<<", la propriete du service est "<<servicePropriete<<", la societe est "<<societe<<"la propriete de la societe est "<<proprieteSociete<<endl;
    }
};

int main() {

return 0;
}
