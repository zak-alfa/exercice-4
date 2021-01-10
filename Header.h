#pragma once

class Temps
{
private:
	int heure, minute, secondes;

public:
	Temps();  //Constructeur par d�faut
	Temps(int, int, int);  //Constructeur avec arguments
	Temps(Temps const&);   //Constructeur de copie

	void afficherA();  //Affichage anglais
	void afficherF();  //Affichage fran�ais

	bool operator<(Temps const&); //Op�rateur de comparaison

};
