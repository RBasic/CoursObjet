#include "Personnage.h"


Personnage::Personnage(){
    pv = 100;
	nom = "Default";
	attack = 0;
	defense = 0;
	percentCrit = 0.0f;
	arme = new Arme();
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


int Personnage::getPv() const
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

string Personnage::getNom() const
{
	return nom;
}

void Personnage::setNom(string n)
{
	nom = n;
}

int Personnage::getAttack() const
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


int Personnage::getHeal() const
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

int Personnage::getDefense() const
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

float Personnage::getPercentCrit() const
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

Arme* Personnage::getArme() const
{
    return arme;
}

void Personnage::setArme(Arme* a){
    arme = a;
}

void Personnage::showInfos() const
{
	cout << "nom : " << getNom() << endl;
	cout << "pv : " << getPv() << endl;
	cout << "attack : " << getAttack() << endl;
	cout << "defense : " << getDefense() << endl;
	cout << "crit : " << getPercentCrit() * 100 << "%" << endl;
}

void Personnage::attackPlayer(Personnage* cible){
    float random = rand()%100;
    if(random <= (getPercentCrit()*100)){
        cout<<"CRIT"<<endl;
        cible->setPv(cible->getPv() - (getAttack()*3));
    }else{
        cible->setPv(cible->getPv() - getAttack());
    }
}

void Personnage::healPlayer(Personnage* cible){
    float random = rand()%100;
    if(random <= (getPercentCrit()*100)){
        cout<<"CRIT"<<endl;
        cible->setPv( cible->getPv() + (getHeal()*3));
    }else{
        cible->setPv( cible->getPv() + getHeal());
    }
}

bool Personnage::operator==(Personnage & p){
    return p.getPv() == getPv() && p.getAttack() == getAttack()&& p.getDefense() == getDefense()&& p.getHeal() == getHeal();
}

Personnage Personnage::operator+(Personnage const & p){
    Personnage temp;
    temp.setPv(getPv() + p.getPv());
    temp.setAttack(getAttack() + p.getAttack());
    temp.setDefense(getDefense() + p.getDefense());
    temp.setHeal(getHeal() - p.getHeal());
    temp.setPercentCrit(max(getPercentCrit(), p.getPercentCrit()));
    return temp;
}


void Personnage::operator+=(Personnage const & p){
    setPv(getPv() + p.getPv());
    setAttack(getAttack() + p.getAttack());
    setDefense(getDefense() + p.getDefense());
    setHeal(getHeal() - p.getHeal());
    setPercentCrit(max(getPercentCrit(), p.getPercentCrit()));
}

bool Personnage::operator!=(Personnage & p){
    return !(p == *this);
}
