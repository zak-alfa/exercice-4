#include<iostream>
#include"Header.h"

using namespace std;

int main()
{
	int h=0, m=0, s=0;
	//Lecture de l'heure à partir du clavier 
	cout << "Veuillez entrer l'heure : ";
	cin >> h;
	cout << "Veuillez entrer les minutes : ";
	cin >> m;
	cout << "Veuillez entrer les secondes : ";
	cin >> s;

	Temps t(h, m, s), t2(23, 15, 30);

	//Choix type d'affichage
	char a;
	cout << "Quel type d'affichage il preferez (A pour anglais et F pour francais) : ";
	cin >> a;

	if (a == 'A')
	{
		t.afficherA();
	}
	else {
		t.afficherF();
	}

	//Comparaison de t et t2
	if (t < t2)
	{
		cout << "T est inferieure a T2" << endl;
	}
	else {
		cout << "T est superieur a T2" << endl;

	}

	return 0;
}