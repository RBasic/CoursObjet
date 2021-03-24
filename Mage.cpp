#include "Mage.h"

Mage::Mage() : Personnage(300,200,0.5){
    cout<<"Je suis un mage"<<endl;
}

Mage::Mage(int hp) : Personnage(5000,200,0.5){
    cout<<"Je suis un mage"<<endl;
}

void Mage::test(){
  cout<<"Mage"<<endl;
}