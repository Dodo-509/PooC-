#ifndef VOITURE_H_INTERFACE
#define VOITURE_H_INTERFACE

#include <string>

using namespace std;

class Voiture {
	
	public : 
		Voiture();
		Voiture (std::string marque, std::string modele, int annee, float kilometrage, float vitesse);
		void accelerer (float valeur);
		void freiner (float valeur);
		void afficherInfo ();
		void avancer (float distance);
		~Voiture();
	
	private :
		std::string marque;
		std::string modele;
		int annee;
		float kilometrage;
		float vitesse;
};

#endif
