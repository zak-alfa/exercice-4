#pragma once

class Temps
{
private:
	int heure, minute, secondes;

public:
	Temps();  //Constructeur par défaut
	Temps(int, int, int);  //Constructeur avec arguments
	Temps(Temps const&);   //Constructeur de copie

	void afficherA();  //Affichage anglais
	void afficherF();  //Affichage français

	bool operator<(Temps const&); //Opérateur de comparaison

};
