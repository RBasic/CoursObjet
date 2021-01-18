#include "Personnage.h"


Personnage::Personnage(){
    pv = 100;
	nom = "Default";
	attack = 0;
	defense = 0;
	percentCrit = 0.0f;
}

Personnage::Personnage(int p,int a,float pc){
    pv = p;
    attack = a;
    percentCrit = pc;
}

Personnage::Personnage(string n){
    nom = n;
}

Personnage::~Personnage(){
    cout<<"Mon personnage a ete detruit"<<endl;
}


int Personnage::getPv()
{
	return pv;
}

void Personnage::setPv(int s) {
	if (s > 1000 || s < 0) {
		cerr << "pv non autorise" << endl;
		pv = 0;
	}
	else {
		pv = s;
	}
}

string Personnage::getNom()
{
	return nom;
}

void Personnage::setNom(string n)
{
	nom = n;
}

int Personnage::getAttack()
{
	return attack;
}

void Personnage::setAttack(int a)
{
	if (a < 0) {
		attack = 0;
	}
	else {
		attack = a;
	}
}


int Personnage::getHeal()
{
	return heal;
}

void Personnage::setHeal(int h)
{
	if (h < 0) {
		heal = 0;
	}
	else {
		heal = h;
	}
}

int Personnage::getDefense()
{
	return defense;
}

void Personnage::setDefense(int d)
{
	if (d < 0) {
		defense = 0;
	}
	else {
		defense = d;
	}
}

float Personnage::getPercentCrit()
{
	return percentCrit;
}

void Personnage::setPercentCrit(float d)
{
	if (percentCrit > 1 || percentCrit < -1) {
		percentCrit = 0;
	}
	else {
		percentCrit = d;
	}
}

void Personnage::showInfos()
{
	cout << "nom : " << getNom() << endl;
	cout << "pv : " << getPv() << endl;
	cout << "attack : " << getAttack() << endl;
	cout << "defense : " << getDefense() << endl;
	cout << "crit : " << getPercentCrit() * 100 << "%" << endl;
}

void Personnage::attackPlayer(Personnage* cible){
    //(*cible).setPv(50);
    cible->setPv(cible->getPv() - getAttack());
}

void Personnage::healPlayer(Personnage* cible){
    cible->setPv( cible->getPv() + getHeal());
}
