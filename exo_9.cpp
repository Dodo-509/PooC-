#include <iostream>

using namespace std;

struct element {
	int valeur;
	element *suivant;
};

class Liste {
private:
	element *debut;
	
public:
	Liste(int valeur = 0) {
		debut = new element; 
        debut->valeur = valeur;  
        debut->suivant = nullptr; 
	}
	
	void ajouter_debut(int valeur) {
		element *maillon = new element;
		maillon->valeur = valeur;
		maillon->suivant = debut;
		debut = maillon;
	}
	
	void supprimer_debut() {
		element *maillon = debut;
		debut = debut->suivant;
		delete[] maillon;
	}
	
	void afficher_liste() {
		element *ptr_liste = debut; 
		while (ptr_liste != nullptr) {
			element *temp = ptr_liste;
			cout << temp->valeur<< " ";
			ptr_liste = ptr_liste->suivant;
		}
	}
	
	~Liste() {
		while (debut != nullptr) {
            element* temp = debut;
            debut = debut->suivant;
            delete temp; 
        }
		
		cout<<endl<<"Liste detruit"<<endl;
	}
};

int main() {
	Liste list;
	list.ajouter_debut(10);
	list.ajouter_debut(20);
	list.ajouter_debut(15);
	list.afficher_liste();

}
