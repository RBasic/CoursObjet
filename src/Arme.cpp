#include "Arme.h"

Arme::Arme()
{
    setDegats(10);
    setPortee(1);
    setType("normal");
    setNiveauRequis(0);
    setPrix(0);
}

Arme::Arme(int d,int p,string t,int nr ,float pr){
    setDegats(d);
    setPortee(p);
    setType(t);
    setNiveauRequis(nr);
    setPrix(pr);
}

Arme::~Arme()
{
    //dtor
}

int Arme::getDegats(){
    return degats;
}

int Arme::getPortee(){
    return portee;
}

string Arme::getType(){
    return type;
}
int Arme::getNiveauRequis(){
    return niveauRequis;
}
float Arme::getPrix(){
    return prix;
}

void Arme::setDegats(int d){
    degats = d;
}

void Arme::setPortee(int p){
    portee = p;
}

void Arme::setType(string t){
    type = t;
}

void Arme::setNiveauRequis(int nr){
    niveauRequis = nr;
}

void Arme::setPrix(float p){
    prix = p;
}
