#ifndef PERSONNAGE_H
#define PERSONNAGE_H

#include <string>
#include <iostream>
#include <random>
#include <ctime>
#include <stdlib.h>
#include "Arme.h"

using namespace std;

class Personnage
{
private:
	int pv = 100;
	string nom = "Bob";
	int attack = 10;
	int defense = 10;
	float percentCrit = 0.9f;
	int heal = 10;
	Arme* arme;

public:
    //CONSTRUCTEURS
    Personnage();
    Personnage(int p, int a, float pc);
    Personnage(string n);


    //DESTRUCTEUR
    ~Personnage();

    //GETTER/SETTER PV
	int getPv() const;
	void setPv(int s);

    //GETTER/SETTER NOM
	string getNom() const;
	void setNom(string n);

    //GETTER/SETTER HEAL
	int getHeal() const;
	void setHeal(int h);

    //GETTER/SETTER ATTACK
	int getAttack() const;
	void setAttack(int a);

    //GETTER/SETTER DEFENSE
	int getDefense() const;
	void setDefense(int d);

    //GETTER/SETTER PERCENT CRIT
	float getPercentCrit() const;
	void setPercentCrit(float d);

	//GETTER/SETTER ARME
	Arme* getArme() const;
	void setArme(Arme* a);

    //AFFICHE LES INFOS DU PERSO
	void showInfos() const;

    void attackPlayer(Personnage* cible);
    void healPlayer(Personnage* cible);

    bool operator==(Personnage & p);

    Personnage operator+(Personnage const & p);
    void operator+=(Personnage const & p);

    bool operator!=(Personnage & p);
};

#endif // PERSONNAGE_H
