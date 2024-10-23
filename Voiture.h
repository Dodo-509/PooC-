#ifndef VOITURE_H_INTERFACE
#def VOITURE_H_INTERFACE

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
