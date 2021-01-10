#include<iostream>
#include"Header.h"

using namespace std;


//Constructeur par défaut
Temps::Temps()
{
	this->heure = 0;
	this->minute = 0;
	this->secondes = 0;
}

//Constructeur avec arguments
Temps::Temps(int h, int m, int s)
{
	this->heure = h;
	this->minute = m;
	this->secondes = s;
}

//Constructeur de copie
Temps::Temps(Temps const& t2)
{
	this->heure = t2.heure;
	this->minute = t2.minute;
	this->secondes = t2.secondes;
}

//Affichage anglais
void Temps::afficherA()
{
	if (this->heure > 12)
	{
		cout << this->heure -12 << " : " << this->minute << " : " << this->secondes << " pm " << endl;
	}
	else {
		cout << this->heure << " : " << this->minute << " : " << this->secondes << " am " << endl;
	}

}

//Affichage français
void Temps::afficherF()
{
	cout << this->heure << " : " << this->minute << " : " << this->secondes<< endl;

}

//Opérateur de comparaison
bool Temps::operator<(Temps const& t2)
{
	if (this->heure < t2.heure)
	{
		return true;
	}
	else if(this->heure==t2.heure && this->minute<t2.minute){
		return true;
	}
	else if (this->minute == t2.minute && this->secondes < t2.secondes) {
		return true;
	}
	else {
		return false;
	}
}
