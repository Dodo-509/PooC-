#include <iostream>
#include <string>
#include "Voiture.h"


Voiture::Voiture () {
	marque = "Undefined";
	modele = "Undefined";
	annee = 2000;
	kilometrage = 0.0;
	vitesse = 0.0;
}

Voiture::Voiture(std::string marque, std::string modele, int annee, float kilometrage, float vitesse) {
	this->marque = marque;
	this->modele = modele;
	this->annee = annee;
	this->kilometrage = kilometrage;
	this->vitesse = vitesse;
}

void Voiture::accelerer(float valeur) {
	vitesse += valeur;
}

void Voiture::freiner(float valeur) {
	if (vitesse >= valeur)
		vitesse-=valeur;
	else
		vitesse = 0;
}

void Voiture::afficherInfo() {
	cout<<"Marque      : "<<marque<<std::endl;
	cout<<"Modele      : "<<modele<<std::endl;
	cout<<"Annee       : "<<annee<<std::endl;
	cout<<"Kilometrage : "<<kilometrage<<std::endl;
	cout<<"Vitesse     : "<<vitesse<<std::endl;
}

void Voiture::avancer(float distance) {
	kilometrage += distance;
}

Voiture::~Voiture() {
	cout<<"La voiture est detruite"<<std::endl;
}
