#include "Guerrier.h"

Guerrier::Guerrier() : Personnage(300,200,0.5){
    cout<<"Je suis un guerrier"<<endl;
}

Guerrier::Guerrier(int hp) : Personnage(5000,200,0.5){
    cout<<"Je suis un guerrier"<<endl;
}


void Guerrier::test(){
  cout<<"Guerrier"<<endl;
}